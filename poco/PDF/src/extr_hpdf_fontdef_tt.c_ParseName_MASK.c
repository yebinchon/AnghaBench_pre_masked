
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ base_font; int flags; int error; int mmgr; int attr; } ;
struct TYPE_13__ {int offset; } ;
struct TYPE_12__ {int platform_id; int encoding_id; int language_id; int name_id; int length; int offset; } ;
struct TYPE_10__ {int format; int count; int string_offset; TYPE_3__* name_records; } ;
struct TYPE_11__ {char* base_font; int stream; TYPE_1__ name_tbl; } ;
typedef int HPDF_UINT ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef TYPE_3__ HPDF_TTF_NameRecord ;
typedef TYPE_4__ HPDF_TTFTable ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_5__* HPDF_FontDef ;
typedef int HPDF_BYTE ;


 TYPE_4__* FUNC_0 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_3 (int ,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (char*,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 scalar_t__ FUNC_9 (char*,char*,int) ;
 scalar_t__ FUNC_10 (int ,int *,int*) ;
 scalar_t__ FUNC_11 (int ,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (int ,int,int,char*) ;

__attribute__((used)) static HPDF_STATUS
FUNC_13 (HPDF_FontDef VAR_7)
{
    HPDF_TTFontDefAttr VAR_8 = (HPDF_TTFontDefAttr)VAR_7->attr;
    HPDF_TTFTable *VAR_9 = FUNC_0 (VAR_7, "name");
    HPDF_STATUS VAR_10;
    HPDF_UINT VAR_11;
    HPDF_TTF_NameRecord *VAR_12;
    HPDF_UINT VAR_13 = 0;
    HPDF_UINT VAR_14 = 0;
    HPDF_UINT VAR_15 = 0;
    HPDF_UINT VAR_16 = 0;
    HPDF_UINT VAR_17 = 0;
    HPDF_UINT VAR_18 = 0;
    HPDF_UINT VAR_19 = 0;
    HPDF_UINT VAR_20 = 0;
    char VAR_21[VAR_2 + 1];

    FUNC_7 ((" HPDF_TTFontDef_ParseMaxp\n"));

    if (!VAR_9)
        return FUNC_8 (VAR_7->error, VAR_6, 10);

    VAR_10 = FUNC_11 (VAR_8->stream, VAR_9->offset, VAR_4);
    if (VAR_10 != VAR_3)
        return VAR_10;

    VAR_10 += FUNC_1 (VAR_8->stream, &VAR_8->name_tbl.format);
    VAR_10 += FUNC_1 (VAR_8->stream, &VAR_8->name_tbl.count);
    VAR_10 += FUNC_1 (VAR_8->stream, &VAR_8->name_tbl.string_offset);
    if (VAR_10 != VAR_3)
        return FUNC_2 (VAR_7->error);

    FUNC_7((" ParseName() format=%u, count=%u, string_offset=%u\n",
                VAR_8->name_tbl.format, VAR_8->name_tbl.count,
                VAR_8->name_tbl.string_offset));

    VAR_8->name_tbl.name_records = FUNC_3 (VAR_7->mmgr,
            sizeof (HPDF_TTF_NameRecord) * VAR_8->name_tbl.count);

    if (!VAR_8->name_tbl.name_records)
        return FUNC_2 (VAR_7->error);

    VAR_12 = VAR_8->name_tbl.name_records;

   for (VAR_11 = 0; VAR_11 < VAR_8->name_tbl.count; VAR_11++) {
        VAR_10 += FUNC_1 (VAR_8->stream, &VAR_12->platform_id);
        VAR_10 += FUNC_1 (VAR_8->stream, &VAR_12->encoding_id);
        VAR_10 += FUNC_1 (VAR_8->stream, &VAR_12->language_id);
        VAR_10 += FUNC_1 (VAR_8->stream, &VAR_12->name_id);
        VAR_10 += FUNC_1 (VAR_8->stream, &VAR_12->length);
        VAR_10 += FUNC_1 (VAR_8->stream, &VAR_12->offset);

        if (VAR_10 != VAR_3)
            return FUNC_2 (VAR_7->error);

        FUNC_7((" ParseName() platformID=%u, encodingID=%d, nameID=%d\n",
                    VAR_12->platform_id, VAR_12->encoding_id,
                    VAR_12->name_id));

        if (VAR_12->platform_id == 1 && VAR_12->encoding_id == 0 &&
                VAR_12->name_id == 6) {
            VAR_13 = VAR_9->offset + VAR_12->offset +
                    VAR_8->name_tbl.string_offset;
            VAR_17 = VAR_12->length;
        }

        if (VAR_12->platform_id == 1 && VAR_12->encoding_id == 0 &&
                VAR_12->name_id == 2) {
            VAR_14 = VAR_9->offset + VAR_12->offset +
                    VAR_8->name_tbl.string_offset;
            VAR_18 = VAR_12->length;
        }

        if (VAR_12->platform_id == 3 && VAR_12->encoding_id == 1 &&
                VAR_12->name_id == 6 && VAR_12->language_id == 0x0409) {
            VAR_15 = VAR_9->offset + VAR_12->offset +
                    VAR_8->name_tbl.string_offset;
            VAR_19 = VAR_12->length;
        }

        if (VAR_12->platform_id == 3 && VAR_12->encoding_id == 1 &&
                VAR_12->name_id == 2 && VAR_12->language_id == 0x0409) {
            VAR_16 = VAR_9->offset + VAR_12->offset +
                    VAR_8->name_tbl.string_offset;
            VAR_20 = VAR_12->length;
        }

        VAR_12++;
    }

    if ((!VAR_13 && !VAR_15) ||
            (!VAR_14 && !VAR_16))
        return FUNC_8 (VAR_7->error, VAR_5, 0);

    if (VAR_17 == 0 && VAR_19 > 0)
        VAR_17 = VAR_19 / 2 + VAR_19 % 2;

    if (VAR_18 == 0 && VAR_20 > 0)
        VAR_18 = VAR_20 / 2 + VAR_20 % 2;

    if (VAR_17 + VAR_18 + 8 > 127)
        return FUNC_8 (VAR_7->error, VAR_5, 0);

    FUNC_6 (VAR_8->base_font, 0, VAR_2 + 1);

    if (VAR_13) {
        if ((VAR_10 = FUNC_11 (VAR_8->stream, VAR_13,
                VAR_4)) != VAR_3)
        return VAR_10;

        if ((VAR_10 = FUNC_10 (VAR_8->stream, (HPDF_BYTE *)VAR_8->base_font, &VAR_17))
                 != VAR_3)
            return VAR_10;
    } else {
        if ((VAR_10 = FUNC_12 (VAR_8->stream, VAR_15, VAR_19,
                VAR_8->base_font)) != VAR_3)
            return VAR_10;
    }

    FUNC_6 (VAR_21, 0, VAR_2 + 1);

    if (VAR_14) {
        if ((VAR_10 = FUNC_11 (VAR_8->stream, VAR_14, VAR_4))
                != VAR_3)
            return VAR_10;

        if ((VAR_10 = FUNC_10 (VAR_8->stream, (HPDF_BYTE *)VAR_21, &VAR_18)) != VAR_3)
            return VAR_10;
    } else {
        if ((VAR_10 = FUNC_12 (VAR_8->stream, VAR_16, VAR_20,
                VAR_21)) != VAR_3)
            return VAR_10;
    }
    if (FUNC_4 ((HPDF_BYTE *)VAR_21, (HPDF_BYTE *)"Regular", 7) != 0) {
        char *VAR_22 = VAR_8->base_font + VAR_17;
        char *VAR_23 = VAR_21;
        HPDF_UINT VAR_24;

        *VAR_22++ = ',';

        for (VAR_24 = 0; VAR_24 < VAR_18; VAR_24++) {
            if (*VAR_23 != ' ')
                *VAR_22++ = *VAR_23++;

            if (VAR_22 >= VAR_8->base_font + VAR_2)
                break;
        }

        *VAR_22 = 0;

        if (FUNC_9 (VAR_21, "Bold", VAR_18))
            VAR_7->flags |= VAR_0;
        if (FUNC_9 (VAR_21, "Italic", VAR_18))
            VAR_7->flags |= VAR_1;
    }

    FUNC_5 ((HPDF_BYTE *)VAR_7->base_font, (HPDF_BYTE *)VAR_8->base_font, VAR_2 + 1);

    FUNC_7(("  ParseName() base_font=%s\n", VAR_8->base_font));

    return VAR_3;
}
