
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int attr; } ;
struct TYPE_5__ {int* flgs; } ;
struct TYPE_6__ {int num_glyphs; TYPE_1__ glyph_tbl; } ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef TYPE_3__* HPDF_FontDef ;
typedef int HPDF_BYTE ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_1 (HPDF_FontDef VAR_0)
{
    HPDF_TTFontDefAttr VAR_1 = (HPDF_TTFontDefAttr)VAR_0->attr;
    FUNC_0 (VAR_1->glyph_tbl.flgs, 0,
            sizeof (HPDF_BYTE) * VAR_1->num_glyphs);
    VAR_1->glyph_tbl.flgs[0] = 1;
}
