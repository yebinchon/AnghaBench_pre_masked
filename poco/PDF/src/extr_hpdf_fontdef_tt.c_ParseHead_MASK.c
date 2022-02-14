
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* top; void* right; void* bottom; void* left; } ;
struct TYPE_13__ {TYPE_1__ font_bbox; int error; int attr; } ;
struct TYPE_12__ {int offset; } ;
struct TYPE_10__ {int flags; int units_per_em; int mac_style; int lowest_rec_ppem; scalar_t__ y_max; scalar_t__ x_max; scalar_t__ y_min; scalar_t__ x_min; scalar_t__ glyph_data_format; scalar_t__ index_to_loc_format; scalar_t__ font_direction_hint; int * modified; int * created; int magic_number; int check_sum_adjustment; int font_revision; int version_number; } ;
struct TYPE_11__ {TYPE_2__ header; int stream; } ;
typedef int HPDF_UINT ;
typedef TYPE_3__* HPDF_TTFontDefAttr ;
typedef TYPE_4__ HPDF_TTFTable ;
typedef scalar_t__ HPDF_STATUS ;
typedef void* HPDF_REAL ;
typedef int HPDF_INT32 ;
typedef TYPE_5__* HPDF_FontDef ;
typedef int HPDF_BYTE ;


 TYPE_4__* FUNC_0 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (int ,int *,int*) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static HPDF_STATUS
FUNC_9 (HPDF_FontDef VAR_3)
{
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_TTFTable *VAR_5 = FUNC_0 (VAR_3, "head");
    HPDF_STATUS VAR_6;
    HPDF_UINT VAR_7;

    FUNC_5 ((" HPDF_TTFontDef_ParseHead\n"));

    if (!VAR_5)
        return FUNC_6 (VAR_3->error, VAR_2, 5);

    VAR_6 = FUNC_8 (VAR_4->stream, VAR_5->offset, VAR_1);
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_7 = 4;
    VAR_6 += FUNC_7 (VAR_4->stream,
            (HPDF_BYTE *)&VAR_4->header.version_number, &VAR_7);
    VAR_6 += FUNC_3 (VAR_4->stream, &VAR_4->header.font_revision);
    VAR_6 += FUNC_3 (VAR_4->stream, &VAR_4->header.check_sum_adjustment);
    VAR_6 += FUNC_3 (VAR_4->stream, &VAR_4->header.magic_number);
    VAR_6 += FUNC_2 (VAR_4->stream, &VAR_4->header.flags);
    VAR_6 += FUNC_2 (VAR_4->stream, &VAR_4->header.units_per_em);

    VAR_7 = 8;
    VAR_6 += FUNC_7 (VAR_4->stream, VAR_4->header.created, &VAR_7);
    VAR_7 = 8;
    VAR_6 += FUNC_7 (VAR_4->stream, VAR_4->header.modified, &VAR_7);

    VAR_6 += FUNC_1 (VAR_4->stream, &VAR_4->header.x_min);
    VAR_6 += FUNC_1 (VAR_4->stream, &VAR_4->header.y_min);
    VAR_6 += FUNC_1 (VAR_4->stream, &VAR_4->header.x_max);
    VAR_6 += FUNC_1 (VAR_4->stream, &VAR_4->header.y_max);
    VAR_6 += FUNC_2 (VAR_4->stream, &VAR_4->header.mac_style);
    VAR_6 += FUNC_2 (VAR_4->stream, &VAR_4->header.lowest_rec_ppem);
    VAR_6 += FUNC_1 (VAR_4->stream, &VAR_4->header.font_direction_hint);
    VAR_6 += FUNC_1 (VAR_4->stream, &VAR_4->header.index_to_loc_format);
    VAR_6 += FUNC_1 (VAR_4->stream, &VAR_4->header.glyph_data_format);

    if (VAR_6 != VAR_0)
        return FUNC_4 (VAR_3->error);

    VAR_3->font_bbox. left = (HPDF_REAL)((HPDF_INT32)VAR_4->header.x_min * 1000 /
                VAR_4->header.units_per_em);
    VAR_3->font_bbox. bottom = (HPDF_REAL)((HPDF_INT32)VAR_4->header.y_min * 1000 /
                VAR_4->header.units_per_em);
    VAR_3->font_bbox. right = (HPDF_REAL)((HPDF_INT32)VAR_4->header.x_max * 1000 /
                VAR_4->header.units_per_em);
    VAR_3->font_bbox. top = (HPDF_REAL)((HPDF_INT32)VAR_4->header.y_max * 1000 /
                VAR_4->header.units_per_em);

    return VAR_0;
}
