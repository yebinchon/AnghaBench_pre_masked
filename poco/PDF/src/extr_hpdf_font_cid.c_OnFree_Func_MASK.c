
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmgr; int attr; } ;
typedef scalar_t__ HPDF_FontAttr ;
typedef TYPE_1__* HPDF_Dict ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (HPDF_Dict VAR_0)
{
    HPDF_FontAttr VAR_1 = (HPDF_FontAttr)VAR_0->attr;

    FUNC_1 ((" HPDF_Type0Font_OnFree\n"));

    if (VAR_1)
        FUNC_0 (VAR_0->mmgr, VAR_1);
}
