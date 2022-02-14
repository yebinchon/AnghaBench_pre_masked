
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mmgr; int attr; } ;
struct TYPE_5__ {scalar_t__ gstate; } ;
typedef TYPE_1__* HPDF_PageAttr ;
typedef TYPE_2__* HPDF_Dict ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (HPDF_Dict VAR_0)
{
    HPDF_PageAttr VAR_1 = (HPDF_PageAttr)VAR_0->attr;

    FUNC_2((" HPDF_Page_OnFree\n"));

    if (VAR_1) {
        if (VAR_1->gstate)
            FUNC_1 (VAR_0->mmgr, VAR_1->gstate);

        FUNC_0 (VAR_0->mmgr, VAR_1);
    }
}
