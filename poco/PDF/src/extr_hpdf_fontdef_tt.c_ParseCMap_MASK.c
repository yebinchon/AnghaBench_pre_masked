
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int error; int attr; } ;
struct TYPE_10__ {scalar_t__ offset; } ;
struct TYPE_9__ {int stream; } ;
typedef scalar_t__ HPDF_UINT32 ;
typedef scalar_t__ HPDF_UINT16 ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_TTFontDefAttr ;
typedef TYPE_2__ HPDF_TTFTable ;
typedef scalar_t__ HPDF_STATUS ;
typedef scalar_t__ HPDF_INT32 ;
typedef TYPE_3__* HPDF_FontDef ;


 TYPE_2__* FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static HPDF_STATUS
FUNC_10 (HPDF_FontDef VAR_4)
{
    HPDF_TTFontDefAttr VAR_5 = (HPDF_TTFontDefAttr)VAR_4->attr;
    HPDF_TTFTable *VAR_6 = FUNC_0 (VAR_4, "cmap");
    HPDF_STATUS VAR_7;
    HPDF_UINT16 VAR_8;
    HPDF_UINT16 VAR_9;
    HPDF_UINT VAR_10;
    HPDF_UINT32 VAR_11 = 0;
    HPDF_UINT32 VAR_12 = 0;

    FUNC_4 ((" HPDF_TTFontDef_ParseCMap\n"));

    if (!VAR_6)
        return FUNC_5 (VAR_4->error, VAR_3, 1);

    VAR_7 = FUNC_6 (VAR_5->stream, VAR_6->offset, VAR_1);
    if (VAR_7 != VAR_0)
        return VAR_7;

    VAR_7 += FUNC_1 (VAR_5->stream, &VAR_8);
    if (VAR_7 != VAR_0)
        return FUNC_3 (VAR_4->error);

    if (VAR_8 != 0)
        return FUNC_5 (VAR_4->error, VAR_2, 0);

    VAR_7 += FUNC_1 (VAR_5->stream, &VAR_9);
    if (VAR_7 != VAR_0)
        return FUNC_3 (VAR_4->error);

    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        HPDF_UINT16 VAR_13;
        HPDF_UINT16 VAR_14;
        HPDF_UINT16 VAR_15;
        HPDF_UINT32 VAR_16;
        HPDF_INT32 VAR_17;

        VAR_7 += FUNC_1 (VAR_5->stream, &VAR_13);
        VAR_7 += FUNC_1 (VAR_5->stream, &VAR_14);
        VAR_7 += FUNC_2 (VAR_5->stream, &VAR_16);
        if (VAR_7 != VAR_0)
            return FUNC_3 (VAR_4->error);

        VAR_17 = FUNC_7 (VAR_5->stream);
        if (VAR_17 < 0)
           return FUNC_3 (VAR_4->error);

        VAR_7 = FUNC_6 (VAR_5->stream, VAR_6->offset + VAR_16,
                VAR_1);
        if (VAR_7 != VAR_0)
           return VAR_7;

        VAR_7 = FUNC_1 (VAR_5->stream, &VAR_15);
        if (VAR_7 != VAR_0)
           return VAR_7;

        FUNC_4((" HPDF_TTFontDef_ParseCMap tables[%d] platformID=%u "
                        "encodingID=%u format=%u offset=%u\n", VAR_10, VAR_13,
                        VAR_14, VAR_15, (HPDF_UINT)VAR_16));


        if (VAR_13 == 3 && VAR_14 == 1 && VAR_15 == 4) {
            VAR_11 = VAR_16;
            break;
        }


        if (VAR_13 == 1 && VAR_14 ==0 && VAR_15 == 1)
            VAR_12 = VAR_16;

        VAR_7 = FUNC_6 (VAR_5->stream, VAR_17, VAR_1);
        if (VAR_7 != VAR_0)
           return VAR_7;
    }

    if (VAR_11 != 0) {
        FUNC_4((" found microsoft unicode cmap.\n"));
        VAR_7 = FUNC_9(VAR_4, VAR_11 +
                VAR_6->offset);
    } else if (VAR_12 != 0) {
        FUNC_4((" found byte encoding cmap.\n"));
        VAR_7 = FUNC_8(VAR_4, VAR_12 + VAR_6->offset);
    } else {
        FUNC_4((" cannot found target cmap.\n"));
        return FUNC_5 (VAR_4->error, VAR_2, 0);
    }

    return VAR_7;
}
