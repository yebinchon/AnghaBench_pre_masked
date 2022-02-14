
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int attr; } ;
struct TYPE_6__ {scalar_t__ gmode; TYPE_1__* gstate; } ;
struct TYPE_5__ {scalar_t__ prev; } ;
typedef int HPDF_STATUS ;
typedef TYPE_2__* HPDF_PageAttr ;
typedef int HPDF_Page ;
typedef TYPE_3__* HPDF_Dict ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static HPDF_STATUS
FUNC_4 (HPDF_Dict VAR_3)
{
    HPDF_STATUS VAR_4;
    HPDF_Page VAR_5 = (HPDF_Page)VAR_3;
    HPDF_PageAttr VAR_6 = (HPDF_PageAttr)VAR_3->attr;

    FUNC_0((" HPDF_Page_BeforeWrite\n"));

    if (VAR_6->gmode == VAR_0) {
        FUNC_0((" HPDF_Page_BeforeWrite warning path object is not"
                    " end\n"));

        if ((VAR_4 = FUNC_1 (VAR_5)) != VAR_2)
           return VAR_4;
    }

    if (VAR_6->gmode == VAR_1) {
        FUNC_0((" HPDF_Page_BeforeWrite warning text block is not end\n"));

        if ((VAR_4 = FUNC_2 (VAR_5)) != VAR_2)
            return VAR_4;
    }

    if (VAR_6->gstate)
        while (VAR_6->gstate->prev) {
            if ((VAR_4 = FUNC_3 (VAR_5)) != VAR_2)
                return VAR_4;
        }

    return VAR_2;
}
