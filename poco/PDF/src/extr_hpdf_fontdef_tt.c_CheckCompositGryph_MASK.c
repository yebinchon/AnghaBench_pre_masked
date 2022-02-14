
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int attr; } ;
struct TYPE_7__ {int* offsets; int* flgs; scalar_t__ base_offset; } ;
struct TYPE_6__ {scalar_t__ index_to_loc_format; } ;
struct TYPE_8__ {int num_glyphs; TYPE_2__ glyph_tbl; int stream; TYPE_1__ header; } ;
typedef size_t HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_3__* HPDF_TTFontDefAttr ;
typedef int HPDF_STATUS ;
typedef int HPDF_INT16 ;
typedef TYPE_4__* HPDF_FontDef ;


 int FUNC_0 (int ,int*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static HPDF_STATUS
FUNC_3 (HPDF_FontDef VAR_3,
                     HPDF_UINT16 VAR_4)
{
    HPDF_TTFontDefAttr VAR_5 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_UINT VAR_6 = VAR_5->glyph_tbl.offsets[VAR_4];

    HPDF_STATUS VAR_7;

    FUNC_1 ((" CheckCompositGryph\n"));

    if (VAR_5->header.index_to_loc_format == 0)
        VAR_6 *= 2;

    VAR_6 += VAR_5->glyph_tbl.base_offset;

    if ((VAR_7 = FUNC_2 (VAR_5->stream, VAR_6, VAR_2))
            != VAR_0) {
        return VAR_7;
    } else {
        HPDF_INT16 VAR_8;
        HPDF_INT16 VAR_9;
        HPDF_INT16 VAR_10;
        const HPDF_UINT16 VAR_11 = 1;
        const HPDF_UINT16 VAR_12 = 8;
        const HPDF_UINT16 VAR_13 = 32;
        const HPDF_UINT16 VAR_14 = 64;
        const HPDF_UINT16 VAR_15 = 128;

        if ((VAR_7 = FUNC_0 (VAR_5->stream, &VAR_8)) != VAR_0)
            return VAR_7;

        if (VAR_8 != -1)
            return VAR_0;

        FUNC_1 ((" CheckCompositGryph composit font gid=%u\n", VAR_4));

        if ((VAR_7 = FUNC_2 (VAR_5->stream, 8, VAR_1))
            != VAR_0)
            return VAR_7;

        do {
            if ((VAR_7 = FUNC_0 (VAR_5->stream, &VAR_9)) != VAR_0)
                return VAR_7;

            if ((VAR_7 = FUNC_0 (VAR_5->stream, &VAR_10)) != VAR_0)
                return VAR_7;

            if (VAR_9 & VAR_11) {
                if ((VAR_7 = FUNC_2 (VAR_5->stream, 4, VAR_1))
                    != VAR_0)
                    return VAR_7;
            } else {
                if ((VAR_7 = FUNC_2 (VAR_5->stream, 2, VAR_1))
                    != VAR_0)
                    return VAR_7;
            }

            if (VAR_9 & VAR_12) {
                if ((VAR_7 = FUNC_2 (VAR_5->stream, 2, VAR_1))
                    != VAR_0)
                    return VAR_7;
            } else if (VAR_9 & VAR_14) {
                if ((VAR_7 = FUNC_2 (VAR_5->stream, 4, VAR_1))
                    != VAR_0)
                    return VAR_7;
            } else if (VAR_9 & VAR_15) {
                if ((VAR_7 = FUNC_2 (VAR_5->stream, 8, VAR_1))
                    != VAR_0)
                    return VAR_7;
            }

            if (VAR_10 > 0 && VAR_10 < VAR_5->num_glyphs)
                VAR_5->glyph_tbl.flgs[VAR_10] = 1;

            FUNC_1 ((" gid=%d, num_of_contours=%d, flags=%d, "
                    "glyph_index=%d\n", VAR_4, VAR_8, VAR_9,
                    VAR_10));

        } while (VAR_9 & VAR_13);
    }

    return VAR_0;
}
