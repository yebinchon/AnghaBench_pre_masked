
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {void* top; void* right; void* bottom; void* left; } ;
struct TYPE_13__ {int attr; } ;
struct TYPE_11__ {scalar_t__ index_to_loc_format; int units_per_em; } ;
struct TYPE_10__ {int* offsets; scalar_t__ base_offset; } ;
struct TYPE_12__ {TYPE_2__ header; int stream; TYPE_1__ glyph_tbl; } ;
typedef size_t HPDF_UINT16 ;
typedef TYPE_3__* HPDF_TTFontDefAttr ;
typedef scalar_t__ HPDF_STATUS ;
typedef void* HPDF_REAL ;
typedef int HPDF_INT32 ;
typedef scalar_t__ HPDF_INT16 ;
typedef int HPDF_INT ;
typedef TYPE_4__* HPDF_FontDef ;
typedef TYPE_5__ HPDF_Box ;


 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;
 size_t FUNC_3 (TYPE_4__*,size_t) ;
 TYPE_5__ FUNC_4 (int ,int ,int ,int ) ;

HPDF_Box
FUNC_5 (HPDF_FontDef VAR_2,
                             HPDF_UINT16 VAR_3)
{
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_2->attr;
    HPDF_UINT16 VAR_5 = FUNC_3(VAR_2, VAR_3);
    HPDF_STATUS VAR_6;
    HPDF_Box VAR_7 = FUNC_4(0, 0, 0, 0);
    HPDF_INT16 VAR_8;
    HPDF_INT VAR_9;

    if (VAR_5 == 0) {
        FUNC_1 ((" GetCharHeight cannot get gid char=0x%04x\n", VAR_3));
        return VAR_7;
    }

    if (VAR_4->header.index_to_loc_format == 0)
        VAR_9 = 2;
    else
        VAR_9 = 1;

    VAR_6 = FUNC_2 (VAR_4->stream, VAR_4->glyph_tbl.base_offset +
                     VAR_4->glyph_tbl.offsets[VAR_5] * VAR_9 + 2, VAR_1);

    if (VAR_6 != VAR_0)
        return VAR_7;

    VAR_6 += FUNC_0 (VAR_4->stream, &VAR_8);
    VAR_7.left = (HPDF_REAL)((HPDF_INT32)VAR_8 * 1000 / VAR_4->header.units_per_em);

    VAR_6 += FUNC_0 (VAR_4->stream, &VAR_8);
    VAR_7.bottom = (HPDF_REAL)((HPDF_INT32)VAR_8 * 1000 / VAR_4->header.units_per_em);

    VAR_6 += FUNC_0 (VAR_4->stream, &VAR_8);
    VAR_7.right = (HPDF_REAL)((HPDF_INT32)VAR_8 * 1000 / VAR_4->header.units_per_em);

    VAR_6 += FUNC_0 (VAR_4->stream, &VAR_8);
    VAR_7.top = (HPDF_REAL)((HPDF_INT32)VAR_8 * 1000 / VAR_4->header.units_per_em);

    if (VAR_6 != VAR_0)
        return FUNC_4(0, 0, 0, 0);

    FUNC_1((" PdfTTFontDef_GetCharBBox char=0x%04X, "
            "box=[%f,%f,%f,%f]\n", VAR_3, VAR_7.left, VAR_7.bottom, VAR_7.right,
            VAR_7.top));

    return VAR_7;
}
