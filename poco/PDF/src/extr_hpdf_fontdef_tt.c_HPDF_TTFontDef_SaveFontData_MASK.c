
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int buf ;
struct TYPE_32__ {int mmgr; int error; int attr; } ;
struct TYPE_31__ {int size; } ;
struct TYPE_30__ {int length; int offset; int check_sum; scalar_t__ tag; } ;
struct TYPE_28__ {scalar_t__ index_to_loc_format; } ;
struct TYPE_27__ {int sfnt_version; int search_range; int entry_selector; int range_shift; } ;
struct TYPE_29__ {int num_glyphs; int length1; TYPE_5__* stream; TYPE_2__ header; TYPE_1__ offset_tbl; } ;
typedef int HPDF_UINT32 ;
typedef int HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_3__* HPDF_TTFontDefAttr ;
typedef TYPE_4__ HPDF_TTFTable ;
typedef TYPE_5__* HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_6__* HPDF_FontDef ;
typedef int HPDF_BYTE ;


 TYPE_4__* FUNC_0 (TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int*) ;
 int* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int*,int ,int) ;
 TYPE_5__* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int *,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_9 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_10 (int ,int ,int) ;
 int FUNC_11 (TYPE_5__*) ;
 scalar_t__ FUNC_12 (TYPE_5__*,int *,int*) ;
 scalar_t__ FUNC_13 (TYPE_5__*,int,int ) ;
 scalar_t__ FUNC_14 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_15 (TYPE_5__*,TYPE_5__*,int ,int *) ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ FUNC_16 (TYPE_6__*,int*,TYPE_5__*) ;
 scalar_t__ FUNC_17 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_18 (int*) ;
 scalar_t__ FUNC_19 (TYPE_6__*,TYPE_5__*,int*) ;
 scalar_t__ FUNC_20 (TYPE_5__*,int) ;
 scalar_t__ FUNC_21 (TYPE_5__*,int) ;

HPDF_STATUS
FUNC_22 (HPDF_FontDef VAR_7,
                              HPDF_Stream VAR_8)
{
    HPDF_TTFontDefAttr VAR_9 = (HPDF_TTFontDefAttr)VAR_7->attr;
    HPDF_TTFTable VAR_10[VAR_1];
    HPDF_Stream VAR_11;
    HPDF_UINT32 *VAR_12;
    HPDF_UINT VAR_13;
    HPDF_UINT32 VAR_14 = 0;
    HPDF_STATUS VAR_15;
    HPDF_UINT32 VAR_16;
    HPDF_UINT32 VAR_17 = 0xB1B0AFBA;
    HPDF_TTFTable VAR_18;
    VAR_18.length = 0;
    VAR_18.offset = 0;

    FUNC_9 ((" SaveFontData\n"));

    VAR_15 = FUNC_21 (VAR_8, VAR_9->offset_tbl.sfnt_version);
    VAR_15 += FUNC_20 (VAR_8, VAR_1);
    VAR_15 += FUNC_20 (VAR_8, VAR_9->offset_tbl.search_range);
    VAR_15 += FUNC_20 (VAR_8, VAR_9->offset_tbl.entry_selector);
    VAR_15 += FUNC_20 (VAR_8, VAR_9->offset_tbl.range_shift);

    if (VAR_15 != VAR_0)
        return FUNC_1 (VAR_7->error);

    VAR_11 = FUNC_7 (VAR_7->mmgr, VAR_3);
    if (!VAR_11)
        return FUNC_1 (VAR_7->error);

    VAR_16 = 12 + 16 * VAR_1;

    VAR_12 = FUNC_3 (VAR_7->mmgr,
            sizeof (HPDF_UINT32) * (VAR_9->num_glyphs + 1));
    if (!VAR_12) {
        FUNC_11 (VAR_11);
        return FUNC_1 (VAR_7->error);
    }

    for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
        HPDF_TTFTable *VAR_19 = FUNC_0 (VAR_7, VAR_6[VAR_13]);
        HPDF_UINT32 VAR_20;
        HPDF_UINT VAR_21;
        HPDF_UINT32 *VAR_22;
        HPDF_UINT32 VAR_23;

 if (!VAR_19) {
     VAR_19 = &VAR_18;
     FUNC_5((HPDF_BYTE *)VAR_19->tag,
   (const HPDF_BYTE *)VAR_6[VAR_13], 4);
 }

        if (!VAR_19) {
            VAR_15 = FUNC_10 (VAR_7->error, VAR_5, VAR_13);
            goto Exit;
        }

        VAR_15 = FUNC_13 (VAR_9->stream, VAR_19->offset, VAR_2);
        if (VAR_15 != VAR_0)
            goto Exit;

        VAR_20 = VAR_19->length;
        VAR_21 = VAR_11->size;

        if (FUNC_4 ((HPDF_BYTE *)VAR_19->tag, (HPDF_BYTE *)"head", 4) == 0) {
            VAR_15 = FUNC_19 (VAR_7, VAR_11, &VAR_14);
        } else if (FUNC_4 ((HPDF_BYTE *)VAR_19->tag, (HPDF_BYTE *)"glyf", 4) == 0) {
            VAR_15 = FUNC_16 (VAR_7, VAR_12, VAR_11);
        } else if (FUNC_4 ((HPDF_BYTE *)VAR_19->tag, (HPDF_BYTE *)"loca", 4) == 0) {
            HPDF_UINT VAR_24;

            FUNC_6 (&VAR_23, 0, 4);
            VAR_22 = VAR_12;

            if (VAR_9->header.index_to_loc_format == 0) {
                for (VAR_24 = 0; VAR_24 <= VAR_9->num_glyphs; VAR_24++) {
                    VAR_15 += FUNC_20 (VAR_11, (HPDF_UINT16)*VAR_22);
                    VAR_22++;
                }
            } else {
                for (VAR_24 = 0; VAR_24 <= VAR_9->num_glyphs; VAR_24++) {
                    VAR_15 += FUNC_21 (VAR_11, *VAR_22);
                    VAR_22++;
                }
            }
        } else if (FUNC_4 ((HPDF_BYTE *)VAR_19->tag, (HPDF_BYTE *)"name", 4) == 0) {
            VAR_15 = FUNC_17 (VAR_7, VAR_11);
        } else {
            HPDF_UINT VAR_25 = 4;

            while (VAR_20 > 4) {
                VAR_23 = 0;
                VAR_25 = 4;
                VAR_15 = FUNC_12 (VAR_9->stream, (HPDF_BYTE *)&VAR_23, &VAR_25);
                VAR_15 += FUNC_14 (VAR_11, (HPDF_BYTE *)&VAR_23, VAR_25);
                VAR_20 -= 4;
            }

            VAR_23 = 0;
            VAR_25 = VAR_20;
            VAR_15 += FUNC_12 (VAR_9->stream, (HPDF_BYTE *)&VAR_23, &VAR_25);
            VAR_15 += FUNC_14 (VAR_11, (HPDF_BYTE *)&VAR_23, VAR_25);
        }

        VAR_10[VAR_13].offset = VAR_21;
        VAR_10[VAR_13].length = VAR_11->size - VAR_21;

        if (VAR_15 != VAR_0)
            goto Exit;
    }


    for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
        HPDF_TTFTable VAR_26 = VAR_10[VAR_13];
        HPDF_UINT32 VAR_27;
        HPDF_UINT VAR_28 = VAR_26.length;

        FUNC_9((" SaveFontData() tag[%s] length=%u\n",
                VAR_6[VAR_13], VAR_28));

        if ((VAR_15 = FUNC_13 (VAR_11, VAR_26.offset, VAR_2))
                != VAR_0)
            break;

        VAR_26.check_sum = 0;
        while (VAR_28 > 0) {
            HPDF_UINT VAR_29 = (VAR_28 > 4) ? 4 : VAR_28;
            VAR_27 = 0;
            if ((VAR_15 = FUNC_12 (VAR_11, (HPDF_BYTE *)&VAR_27, &VAR_29))
                    != VAR_0)
                break;

            FUNC_18 (&VAR_27);
            VAR_26.check_sum += VAR_27;
            VAR_28 -= VAR_29;
        }

        if (VAR_15 != VAR_0)
            break;

        FUNC_9((" SaveFontData tag[%s] check-sum=%u offset=%u\n",
                    VAR_6[VAR_13], (HPDF_UINT)VAR_26.check_sum,
                    (HPDF_UINT)VAR_26.offset));

        VAR_15 += FUNC_14 (VAR_8, (HPDF_BYTE *)VAR_6[VAR_13], 4);
        VAR_15 += FUNC_21 (VAR_8, VAR_26.check_sum);
        VAR_26.offset += VAR_16;
        VAR_15 += FUNC_21 (VAR_8, VAR_26.offset);
        VAR_15 += FUNC_21 (VAR_8, VAR_26.length);

        if (VAR_15 != VAR_0)
            break;
    }

    if (VAR_15 != VAR_0)
        goto Exit;


    VAR_15 = FUNC_13 (VAR_11, 0, VAR_2);
    if (VAR_15 != VAR_0)
        goto Exit;

    for (;;) {
        HPDF_UINT32 VAR_30;
        HPDF_UINT VAR_31 = sizeof(VAR_30);

        VAR_15 = FUNC_12 (VAR_11, (HPDF_BYTE *)&VAR_30, &VAR_31);
        if (VAR_15 != VAR_0 || VAR_31 <= 0) {
            if (VAR_15 == VAR_4)
                VAR_15 = VAR_0;
            break;
        }

        FUNC_18 (&VAR_30);
        VAR_17 -= VAR_30;
    }

    if (VAR_15 != VAR_0)
        goto Exit;

    FUNC_9((" SaveFontData new checkSumAdjustment=%u\n",
                (HPDF_UINT)VAR_17));

    FUNC_18 (&VAR_17);

    VAR_15 = FUNC_13 (VAR_11, VAR_14, VAR_2);
    if (VAR_15 == VAR_0) {
        VAR_15 = FUNC_8 (VAR_11, (HPDF_BYTE *)&VAR_17,
            4);
    }

    if (VAR_15 != VAR_0)
        goto Exit;

    VAR_9->length1 = VAR_11->size + VAR_16;
    VAR_15 = FUNC_15 (VAR_11, VAR_8, 0, ((void*)0));

    goto Exit;

Exit:
    FUNC_2 (VAR_7->mmgr, VAR_12);
    FUNC_11 (VAR_11);
    return VAR_15;
}
