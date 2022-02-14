
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_22__ {int error; int mmgr; int attr; } ;
struct TYPE_21__ {scalar_t__ size; } ;
struct TYPE_20__ {scalar_t__ offset; } ;
struct TYPE_19__ {scalar_t__ length; scalar_t__ offset; int name_id; int platform_id; int encoding_id; int language_id; } ;
struct TYPE_17__ {int format; int count; int string_offset; TYPE_3__* name_records; } ;
struct TYPE_18__ {int stream; scalar_t__ tag_name; scalar_t__ tag_name2; TYPE_1__ name_tbl; } ;
typedef int HPDF_UINT16 ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef TYPE_3__ HPDF_TTF_NameRecord ;
typedef TYPE_4__ HPDF_TTFTable ;
typedef TYPE_5__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_6__* HPDF_FontDef ;
typedef int HPDF_BYTE ;


 TYPE_4__* FUNC_0 (TYPE_6__*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ,int *,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int *,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_5__*,TYPE_5__*,int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_5__*,int) ;

__attribute__((used)) static HPDF_STATUS
FUNC_10 (HPDF_FontDef VAR_4,
               HPDF_Stream VAR_5)
{
    HPDF_TTFontDefAttr VAR_6 = (HPDF_TTFontDefAttr)VAR_4->attr;
    HPDF_TTFTable *VAR_7 = FUNC_0 (VAR_4, "name");
    HPDF_STATUS VAR_8 = VAR_0;
    HPDF_UINT VAR_9;
    HPDF_TTF_NameRecord *VAR_10;
    HPDF_Stream VAR_11 = FUNC_2 (VAR_4->mmgr,
                VAR_2);

    FUNC_3 ((" RecreateName\n"));

    if (!VAR_11)
        return FUNC_1 (VAR_4->error);

    VAR_8 += FUNC_9 (VAR_5, VAR_6->name_tbl.format);
    VAR_8 += FUNC_9 (VAR_5, VAR_6->name_tbl.count);
    VAR_8 += FUNC_9 (VAR_5, VAR_6->name_tbl.string_offset);

    if (VAR_8 != VAR_0) {
        FUNC_4 (VAR_11);
        return FUNC_1 (VAR_4->error);
    }

    VAR_10 = VAR_6->name_tbl.name_records;
    for (VAR_9 = 0; VAR_9 < VAR_6->name_tbl.count; VAR_9++) {
        HPDF_UINT VAR_12 = VAR_10->length;
        HPDF_BYTE VAR_13[VAR_2];
        HPDF_UINT VAR_14 = VAR_12;
        HPDF_UINT VAR_15 = VAR_7->offset + VAR_6->name_tbl.string_offset +
                VAR_10->offset;
        HPDF_UINT VAR_16 = VAR_11->size;


        if (VAR_10->name_id == 1 || VAR_10->name_id == 4) {
            if (VAR_10->platform_id == 0 || VAR_10->platform_id == 3) {
                VAR_8 += FUNC_7 (VAR_11, (HPDF_BYTE *)VAR_6->tag_name2,
                        sizeof(VAR_6->tag_name2));
                VAR_12 += sizeof(VAR_6->tag_name2);
            } else {
                VAR_8 += FUNC_7 (VAR_11, (HPDF_BYTE *)VAR_6->tag_name,
                        sizeof(VAR_6->tag_name));
                VAR_12 += sizeof(VAR_6->tag_name);
            }
        }

        VAR_8 += FUNC_9 (VAR_5, VAR_10->platform_id);
        VAR_8 += FUNC_9 (VAR_5, VAR_10->encoding_id);
        VAR_8 += FUNC_9 (VAR_5, VAR_10->language_id);
        VAR_8 += FUNC_9 (VAR_5, VAR_10->name_id);
        VAR_8 += FUNC_9 (VAR_5, (HPDF_UINT16)VAR_12);
        VAR_8 += FUNC_9 (VAR_5, (HPDF_UINT16)VAR_16);

        VAR_8 += FUNC_6 (VAR_6->stream, VAR_15, VAR_1);

        if (VAR_8 != VAR_0) {
            FUNC_4 (VAR_11);
            return FUNC_1 (VAR_4->error);
        }

        while (VAR_14 > 0) {
            HPDF_UINT VAR_17 = (VAR_14 > VAR_2) ?
                    VAR_2 : VAR_14;

            if ((VAR_8 = FUNC_5 (VAR_6->stream, VAR_13, &VAR_17)) != VAR_0) {
                FUNC_4 (VAR_11);
                return VAR_8;
            }

            if ((VAR_8 = FUNC_7 (VAR_11, VAR_13, VAR_17)) != VAR_0) {
                FUNC_4 (VAR_11);
                return VAR_8;
            }

            VAR_14 -= VAR_17;
        }

        FUNC_3((" RecreateNAME name_rec[%u] platform_id=%u "
                        "encoding_id=%u language_id=%u name_rec->name_id=%u "
                        "length=%u offset=%u\n", VAR_9, VAR_10->platform_id,
                        VAR_10->encoding_id, VAR_10->language_id,
                        VAR_10->name_id, VAR_12, VAR_16));

        VAR_10++;
    }

    VAR_8 = FUNC_8 (VAR_11, VAR_5,
                VAR_3, ((void*)0));

    FUNC_4 (VAR_11);

    return VAR_8;
}
