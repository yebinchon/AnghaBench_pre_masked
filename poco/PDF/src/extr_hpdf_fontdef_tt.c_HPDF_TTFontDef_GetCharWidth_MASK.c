
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int missing_width; int attr; } ;
struct TYPE_12__ {scalar_t__ advance_width; } ;
struct TYPE_10__ {int units_per_em; } ;
struct TYPE_9__ {int* flgs; } ;
struct TYPE_11__ {size_t num_glyphs; TYPE_2__ header; scalar_t__ embedding; TYPE_1__ glyph_tbl; TYPE_4__* h_metric; } ;
typedef size_t HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_3__* HPDF_TTFontDefAttr ;
typedef TYPE_4__ HPDF_TTF_LongHorMetric ;
typedef int HPDF_INT16 ;
typedef TYPE_5__* HPDF_FontDef ;


 int FUNC_0 (TYPE_5__*,size_t) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (TYPE_5__*,size_t) ;

HPDF_INT16
FUNC_3 (HPDF_FontDef VAR_0,
                              HPDF_UINT16 VAR_1)
{
    HPDF_UINT16 VAR_2;
    HPDF_TTF_LongHorMetric VAR_3;
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_0->attr;
    HPDF_UINT16 VAR_5 = FUNC_2 (VAR_0, VAR_1);

    FUNC_1((" HPDF_TTFontDef_GetCharWidth\n"));

    if (VAR_5 >= VAR_4->num_glyphs) {
        FUNC_1((" HPDF_TTFontDef_GetCharWidth WARNING gid > "
                    "num_glyphs %u > %u\n", VAR_5, VAR_4->num_glyphs));
        return VAR_0->missing_width;
    }

    VAR_3 = VAR_4->h_metric[VAR_5];

    if (!VAR_4->glyph_tbl.flgs[VAR_5]) {
        VAR_4->glyph_tbl.flgs[VAR_5] = 1;

        if (VAR_4->embedding)
            FUNC_0 (VAR_0, VAR_5);
    }

    VAR_2 = (HPDF_UINT16)((HPDF_UINT)VAR_3.advance_width * 1000 /
            VAR_4->header.units_per_em);

    return (HPDF_INT16)VAR_2;
}
