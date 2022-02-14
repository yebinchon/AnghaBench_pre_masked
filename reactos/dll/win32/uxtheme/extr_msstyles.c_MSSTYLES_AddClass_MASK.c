
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * overrides; int * partstate; struct TYPE_9__* next; int szClassName; int szAppName; int hTheme; } ;
struct TYPE_8__ {TYPE_2__* classes; int hTheme; } ;
typedef int THEME_CLASS ;
typedef TYPE_1__* PTHEME_FILE ;
typedef TYPE_2__* PTHEME_CLASS ;
typedef int LPCWSTR ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static PTHEME_CLASS FUNC_4(PTHEME_FILE VAR_0, LPCWSTR VAR_1, LPCWSTR VAR_2)
{
    PTHEME_CLASS VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
    if(VAR_3) return VAR_3;

    VAR_3 = FUNC_1(FUNC_0(), 0, sizeof(THEME_CLASS));
    VAR_3->hTheme = VAR_0->hTheme;
    FUNC_3(VAR_3->szAppName, VAR_1);
    FUNC_3(VAR_3->szClassName, VAR_2);
    VAR_3->next = VAR_0->classes;
    VAR_3->partstate = ((void*)0);
    VAR_3->overrides = ((void*)0);
    VAR_0->classes = VAR_3;
    return VAR_3;
}
