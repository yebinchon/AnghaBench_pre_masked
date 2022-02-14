
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int error; int mmgr; int attr; } ;
struct TYPE_12__ {int offset; } ;
struct TYPE_10__ {int* offsets; int* flgs; } ;
struct TYPE_9__ {scalar_t__ index_to_loc_format; } ;
struct TYPE_11__ {int num_glyphs; TYPE_2__ glyph_tbl; int stream; TYPE_1__ header; } ;
typedef int HPDF_UINT32 ;
typedef int HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_3__* HPDF_TTFontDefAttr ;
typedef TYPE_4__ HPDF_TTFTable ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_5__* HPDF_FontDef ;
typedef int HPDF_BYTE ;


 TYPE_4__* FUNC_0 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (int*,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static HPDF_STATUS
FUNC_9 (HPDF_FontDef VAR_3)
{
    HPDF_TTFontDefAttr VAR_4 = (HPDF_TTFontDefAttr)VAR_3->attr;
    HPDF_TTFTable *VAR_5 = FUNC_0 (VAR_3, "loca");
    HPDF_STATUS VAR_6;
    HPDF_UINT VAR_7;
    HPDF_UINT32 *VAR_8;

    FUNC_6 ((" HPDF_TTFontDef_ParseLoca\n"));

    if (!VAR_5)
        return FUNC_7 (VAR_3->error, VAR_2, 8);

    VAR_6 = FUNC_8 (VAR_4->stream, VAR_5->offset, VAR_1);
    if (VAR_6 != VAR_0)
        return VAR_6;


    VAR_4->glyph_tbl.offsets = FUNC_4 (VAR_3->mmgr,
        sizeof (HPDF_UINT32) * (VAR_4->num_glyphs + 1));

    if (!VAR_4->glyph_tbl.offsets)
        return FUNC_3 (VAR_3->error);

    FUNC_5 (VAR_4->glyph_tbl.offsets, 0,
            sizeof (HPDF_UINT32) * (VAR_4->num_glyphs + 1));




    VAR_4->glyph_tbl.flgs = FUNC_4 (VAR_3->mmgr,
        sizeof (HPDF_BYTE) * VAR_4->num_glyphs);

    if (!VAR_4->glyph_tbl.flgs)
        return FUNC_3 (VAR_3->error);

    FUNC_5 (VAR_4->glyph_tbl.flgs, 0,
        sizeof (HPDF_BYTE) * VAR_4->num_glyphs);
    VAR_4->glyph_tbl.flgs[0] = 1;

    VAR_8 = VAR_4->glyph_tbl.offsets;
    if (VAR_4->header.index_to_loc_format == 0) {

        for (VAR_7 = 0; VAR_7 <= VAR_4->num_glyphs; VAR_7++) {
            HPDF_UINT16 VAR_9 = 0;

            if ((VAR_6 = FUNC_1 (VAR_4->stream, &VAR_9)) != VAR_0)
                return VAR_6;

            *VAR_8 = VAR_9;
            VAR_8++;
        }
    } else {

        for (VAR_7 = 0; VAR_7 <= VAR_4->num_glyphs; VAR_7++) {
            if ((VAR_6 = FUNC_2 (VAR_4->stream, VAR_8)) != VAR_0)
                return VAR_6;

            VAR_8++;
        }
    }
    return VAR_0;
}
