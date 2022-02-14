
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct va_image_formats {int num; TYPE_1__* entries; } ;
struct priv {struct va_image_formats* image_formats; int display; } ;
typedef int VAStatus ;
struct TYPE_3__ {int fourcc; } ;


 int FUNC_0 (struct priv*,char*) ;
 int FUNC_1 (struct priv*,char*,int) ;
 int VAR_0 ;
 struct va_image_formats* VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct va_image_formats*,int ,int) ;
 struct va_image_formats* FUNC_4 (struct priv*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_1__*,int*) ;

__attribute__((used)) static void FUNC_7(struct priv *VAR_2)
{
    struct va_image_formats *VAR_3 = FUNC_4(VAR_2, VAR_3);
    VAR_3->num = FUNC_5(VAR_2->display);
    VAR_3->entries = FUNC_3(VAR_3, VAR_0, VAR_3->num);
    VAStatus VAR_4 = FUNC_6(VAR_2->display, VAR_3->entries,
                                          &VAR_3->num);
    if (!FUNC_0(VAR_2, "vaQueryImageFormats()"))
        return;
    FUNC_1(VAR_2, "%d image formats available:\n", VAR_3->num);
    for (int VAR_5 = 0; VAR_5 < VAR_3->num; VAR_5++)
        FUNC_1(VAR_2, "  %s\n", FUNC_2(VAR_3->entries[VAR_5].fourcc));
    VAR_2->image_formats = VAR_3;
}
