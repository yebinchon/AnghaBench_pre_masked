
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmgr; int attr; } ;
typedef TYPE_1__* HPDF_FontDef ;
typedef int HPDF_CIDFontDefAttr ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;

void
FUNC_3 (HPDF_FontDef VAR_0)
{
    HPDF_CIDFontDefAttr VAR_1 = (HPDF_CIDFontDefAttr)VAR_0->attr;

    FUNC_2 ((" HPDF_CIDFontDef_FreeFunc\n"));

    FUNC_0 (VAR_0);
    FUNC_1 (VAR_0->mmgr, VAR_1);
}
