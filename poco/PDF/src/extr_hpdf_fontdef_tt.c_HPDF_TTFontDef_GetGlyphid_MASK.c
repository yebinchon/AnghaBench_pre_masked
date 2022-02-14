
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int error; int attr; } ;
struct TYPE_5__ {int* end_count; int seg_count_x2; scalar_t__ format; int* glyph_id_array; int* start_count; int* id_range_offset; int* id_delta; size_t glyph_id_array_count; } ;
struct TYPE_6__ {TYPE_1__ cmap; } ;
typedef int HPDF_UINT16 ;
typedef size_t HPDF_UINT ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef TYPE_3__* HPDF_FontDef ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;

HPDF_UINT16
FUNC_2 (HPDF_FontDef VAR_1,
                            HPDF_UINT16 VAR_2)
{
    HPDF_TTFontDefAttr VAR_3 = (HPDF_TTFontDefAttr)VAR_1->attr;
    HPDF_UINT16 *VAR_4 = VAR_3->cmap.end_count;
    HPDF_UINT VAR_5 = VAR_3->cmap.seg_count_x2 / 2;
    HPDF_UINT VAR_6;

    FUNC_0((" HPDF_TTFontDef_GetGlyphid\n"));


    if (VAR_3->cmap.format == 0) {
        VAR_2 &= 0xFF;
        return VAR_3->cmap.glyph_id_array[VAR_2];
    }


    if (VAR_3->cmap.seg_count_x2 == 0) {
        FUNC_1 (VAR_1->error, VAR_0, 0);
        return 0;
    }

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        if (VAR_2 <= *VAR_4)
            break;
        VAR_4++;
    }

    if (VAR_3->cmap.start_count[VAR_6] > VAR_2) {
        FUNC_0((" HPDF_TTFontDef_GetGlyphid undefined char(0x%04X)\n",
                    VAR_2));
        return 0;
    }

    if (VAR_3->cmap.id_range_offset[VAR_6] == 0) {
        FUNC_0((" HPDF_TTFontDef_GetGlyphid idx=%u code=%u "
                    " ret=%u\n", VAR_6, VAR_2,
                    VAR_2 + VAR_3->cmap.id_delta[VAR_6]));

        return (HPDF_UINT16)(VAR_2 + VAR_3->cmap.id_delta[VAR_6]);
    } else {
        HPDF_UINT VAR_7 = VAR_3->cmap.id_range_offset[VAR_6] / 2 +
            (VAR_2 - VAR_3->cmap.start_count[VAR_6]) - (VAR_5 - VAR_6);

        if (VAR_7 > VAR_3->cmap.glyph_id_array_count) {
            FUNC_0((" HPDF_TTFontDef_GetGlyphid[%u] %u > %u\n",
                        VAR_6, VAR_7, (HPDF_UINT)VAR_3->cmap.glyph_id_array_count));
            return 0;
        } else {
            HPDF_UINT16 VAR_8 = (HPDF_UINT16)(VAR_3->cmap.glyph_id_array[VAR_7] +
                VAR_3->cmap.id_delta[VAR_6]);
            FUNC_0((" HPDF_TTFontDef_GetGlyphid idx=%u unicode=0x%04X "
                        "id=%u\n", VAR_7, VAR_2, VAR_8));
            return VAR_8;
        }
    }
}
