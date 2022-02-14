
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int error; int attr; } ;
struct TYPE_13__ {int size; } ;
struct TYPE_11__ {int glyph_data_format; int index_to_loc_format; int font_direction_hint; int lowest_rec_ppem; int mac_style; int y_max; int x_max; int y_min; int x_min; int modified; int created; int units_per_em; int flags; int magic_number; int font_revision; int version_number; } ;
struct TYPE_12__ {TYPE_1__ header; } ;
typedef int HPDF_UINT32 ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef TYPE_3__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_4__* HPDF_FontDef ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static HPDF_STATUS
FUNC_6 (HPDF_FontDef VAR_1,
             HPDF_Stream VAR_2,
             HPDF_UINT32 *VAR_3)
{
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_1->attr;
    HPDF_STATUS VAR_5 = VAR_0;

    FUNC_1 ((" WriteHeader\n"));

    VAR_5 += FUNC_2 (VAR_2, VAR_4->header.version_number, 4);
    VAR_5 += FUNC_5 (VAR_2, VAR_4->header.font_revision);





    *VAR_3 = VAR_2->size;

    VAR_5 += FUNC_5 (VAR_2, 0);
    VAR_5 += FUNC_5 (VAR_2, VAR_4->header.magic_number);
    VAR_5 += FUNC_4 (VAR_2, VAR_4->header.flags);
    VAR_5 += FUNC_4 (VAR_2, VAR_4->header.units_per_em);
    VAR_5 += FUNC_2 (VAR_2, VAR_4->header.created, 8);
    VAR_5 += FUNC_2 (VAR_2, VAR_4->header.modified, 8);
    VAR_5 += FUNC_3 (VAR_2, VAR_4->header.x_min);
    VAR_5 += FUNC_3 (VAR_2, VAR_4->header.y_min);
    VAR_5 += FUNC_3 (VAR_2, VAR_4->header.x_max);
    VAR_5 += FUNC_3 (VAR_2, VAR_4->header.y_max);
    VAR_5 += FUNC_4 (VAR_2, VAR_4->header.mac_style);
    VAR_5 += FUNC_4 (VAR_2, VAR_4->header.lowest_rec_ppem);
    VAR_5 += FUNC_3 (VAR_2, VAR_4->header.font_direction_hint);
    VAR_5 += FUNC_3 (VAR_2, VAR_4->header.index_to_loc_format);
    VAR_5 += FUNC_3 (VAR_2, VAR_4->header.glyph_data_format);

    if (VAR_5 != VAR_0)
        return FUNC_0 (VAR_1->error);

    return VAR_0;
}
