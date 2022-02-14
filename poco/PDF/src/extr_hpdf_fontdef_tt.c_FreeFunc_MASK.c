
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmgr; int attr; } ;
typedef scalar_t__ HPDF_TTFontDefAttr ;
typedef TYPE_1__* HPDF_FontDef ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3 (HPDF_FontDef VAR_0)
{
    HPDF_TTFontDefAttr VAR_1 = (HPDF_TTFontDefAttr)VAR_0->attr;

    FUNC_1 ((" HPDF_TTFontDef_FreeFunc\n"));

    if (VAR_1) {
        FUNC_2 (VAR_0);

        FUNC_0 (VAR_0->mmgr, VAR_1);
    }
}
