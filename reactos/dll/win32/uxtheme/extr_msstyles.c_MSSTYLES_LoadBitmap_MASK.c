
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int szFile ;
typedef char WCHAR ;
struct TYPE_9__ {TYPE_1__* tf; int hTheme; } ;
struct TYPE_8__ {int image; int name; struct TYPE_8__* next; int hasAlpha; } ;
struct TYPE_7__ {TYPE_2__* images; } ;
typedef int THEME_IMAGE ;
typedef TYPE_2__* PTHEME_IMAGE ;
typedef TYPE_3__* PTHEME_CLASS ;
typedef char* LPWSTR ;
typedef int LPCWSTR ;
typedef int HBITMAP ;
typedef int BOOL ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,TYPE_2__*,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int ,int *) ;

HBITMAP FUNC_9 (PTHEME_CLASS VAR_3, LPCWSTR VAR_4, BOOL* VAR_5)
{
    WCHAR VAR_6[VAR_2];
    LPWSTR VAR_7;
    PTHEME_IMAGE VAR_8;
    FUNC_7(VAR_6, VAR_4, sizeof(VAR_6)/sizeof(VAR_6[0]));
    VAR_7 = VAR_6;
    do {
        if(*VAR_7 == '\\') *VAR_7 = '_';
        if(*VAR_7 == '/') *VAR_7 = '_';
        if(*VAR_7 == '.') *VAR_7 = '_';
    } while(*VAR_7++);


    VAR_8 = VAR_3->tf->images;
    while (VAR_8)
    {
        if (FUNC_5 (VAR_6, VAR_8->name) == 0)
        {
            FUNC_3 ("found %p %s: %p\n", VAR_8, FUNC_4 (VAR_8->name), VAR_8->image);
            *VAR_5 = VAR_8->hasAlpha;
            return VAR_8->image;
        }
        VAR_8 = VAR_8->next;
    }

    VAR_8 = FUNC_1 (FUNC_0(), 0, sizeof (THEME_IMAGE));
    VAR_8->image = FUNC_2(VAR_3->hTheme, VAR_6, VAR_0, 0, 0, VAR_1);
    FUNC_8 (VAR_8->image, VAR_5);
    VAR_8->hasAlpha = *VAR_5;

    FUNC_6 (VAR_8->name, VAR_6);
    VAR_8->next = VAR_3->tf->images;
    VAR_3->tf->images = VAR_8;
    FUNC_3 ("new %p %s: %p\n", VAR_8, FUNC_4 (VAR_8->name), VAR_8->image);
    return VAR_8->image;
}
