
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mmgr; int attr; } ;
struct TYPE_5__ {struct TYPE_5__* widths; scalar_t__ font_data; struct TYPE_5__* char_set; } ;
typedef TYPE_1__* HPDF_Type1FontDefAttr ;
typedef TYPE_2__* HPDF_FontDef ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (HPDF_FontDef VAR_0)
{
    HPDF_Type1FontDefAttr VAR_1 = (HPDF_Type1FontDefAttr)VAR_0->attr;

    FUNC_1 ((" FreeFunc\n"));

    if (VAR_1->char_set)
        FUNC_0 (VAR_0->mmgr, VAR_1->char_set);

    if (VAR_1->font_data)
        FUNC_2 (VAR_1->font_data);

    FUNC_0 (VAR_0->mmgr, VAR_1->widths);
    FUNC_0 (VAR_0->mmgr, VAR_1);
}
