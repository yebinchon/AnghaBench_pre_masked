
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int attr; } ;
struct TYPE_12__ {int size; } ;
struct TYPE_10__ {scalar_t__ index_to_loc_format; } ;
struct TYPE_9__ {int* flgs; int* offsets; scalar_t__ base_offset; } ;
struct TYPE_11__ {size_t num_glyphs; TYPE_2__ header; int stream; TYPE_1__ glyph_tbl; } ;
typedef int HPDF_UINT32 ;
typedef int HPDF_UINT ;
typedef TYPE_3__* HPDF_TTFontDefAttr ;
typedef TYPE_4__* HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef size_t HPDF_INT ;
typedef TYPE_5__* HPDF_FontDef ;
typedef int HPDF_BYTE ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,int*) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (TYPE_4__*,int *,int) ;

__attribute__((used)) static HPDF_STATUS
FUNC_5 (HPDF_FontDef VAR_3,
               HPDF_UINT32 *VAR_4,
               HPDF_Stream VAR_5)
{
    HPDF_UINT32 VAR_6 = 0;
    HPDF_UINT32 VAR_7 = VAR_5->size;
    HPDF_TTFontDefAttr VAR_8 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_STATUS VAR_9;
    HPDF_INT VAR_10;

    FUNC_1 ((" RecreateGLYF\n"));

    for (VAR_10 = 0; VAR_10 < VAR_8->num_glyphs; VAR_10++) {
        HPDF_BYTE VAR_11[VAR_2];

        if (VAR_8->glyph_tbl.flgs[VAR_10] == 1) {
            HPDF_UINT VAR_12 = VAR_8->glyph_tbl.offsets[VAR_10];
            HPDF_UINT VAR_13 = VAR_8->glyph_tbl.offsets[VAR_10 + 1] - VAR_12;

            VAR_4[VAR_10] = VAR_5->size - VAR_7;
            if (VAR_8->header.index_to_loc_format == 0) {
                VAR_4[VAR_10] /= 2;
                VAR_13 *= 2;
            }

            FUNC_1((" RecreateGLYF[%u] move from [%u] to [%u]\n", VAR_10,
                        (HPDF_UINT)VAR_8->glyph_tbl.base_offset + VAR_12,
                        (HPDF_UINT)VAR_4[VAR_10]));

            if (VAR_8->header.index_to_loc_format == 0)
                VAR_12 *= 2;

            VAR_12 += VAR_8->glyph_tbl.base_offset;

            if ((VAR_9 = FUNC_3 (VAR_8->stream, VAR_12, VAR_1))
                    != VAR_0)
                return VAR_9;

            while (VAR_13 > 0) {
                HPDF_UINT VAR_14 =
                    (VAR_13 > VAR_2) ? VAR_2 : VAR_13;

                FUNC_0 (VAR_11, 0, VAR_14);

                if ((VAR_9 = FUNC_2 (VAR_8->stream, VAR_11, &VAR_14))
                        != VAR_0)
                    return VAR_9;

                if ((VAR_9 = FUNC_4 (VAR_5, VAR_11, VAR_14)) !=
                        VAR_0)
                    return VAR_9;

                VAR_13 -= VAR_14;
            }

            VAR_6 = VAR_5->size - VAR_7;
            if (VAR_8->header.index_to_loc_format == 0)
                VAR_6 /= 2;
        } else {
            VAR_4[VAR_10] = VAR_6;
        }
    }

    VAR_4[VAR_8->num_glyphs] = VAR_6;







    return VAR_0;
}
