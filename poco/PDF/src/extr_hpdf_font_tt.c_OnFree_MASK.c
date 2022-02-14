
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mmgr; int attr; } ;
struct TYPE_5__ {struct TYPE_5__* used; struct TYPE_5__* widths; } ;
typedef TYPE_1__* HPDF_FontAttr ;
typedef TYPE_2__* HPDF_Dict ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (HPDF_Dict VAR_0)
{
    HPDF_FontAttr VAR_1 = (HPDF_FontAttr)VAR_0->attr;

    FUNC_1 ((" HPDF_TTFont_OnFree\n"));

    if (VAR_1) {
        if (VAR_1->widths) {
            FUNC_0 (VAR_0->mmgr, VAR_1->widths);
        }

        if (VAR_1->used) {
            FUNC_0 (VAR_0->mmgr, VAR_1->used);
        }

        FUNC_0 (VAR_0->mmgr, VAR_1);
    }
}
