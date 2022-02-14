
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_1__ font_bbox; int attr; } ;
struct TYPE_17__ {scalar_t__* DW2; } ;
struct TYPE_16__ {int (* to_unicode_fn ) (TYPE_4__*,int) ;} ;
struct TYPE_15__ {int attr; } ;
struct TYPE_14__ {scalar_t__ writing_mode; TYPE_8__* fontdef; TYPE_4__* encoder; } ;
typedef int HPDF_UNICODE ;
typedef int HPDF_UINT16 ;
typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_REAL ;
typedef int HPDF_ParseText_Rec ;
typedef scalar_t__ HPDF_INT ;
typedef TYPE_2__* HPDF_FontAttr ;
typedef TYPE_3__* HPDF_Font ;
typedef TYPE_4__* HPDF_Encoder ;
typedef int HPDF_DOUBLE ;
typedef TYPE_5__* HPDF_CIDFontDefAttr ;
typedef scalar_t__ HPDF_ByteType ;
typedef int HPDF_BYTE ;
typedef int HPDF_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_8__*,int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*,int *,int const*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_8__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (TYPE_4__*,int) ;

__attribute__((used)) static HPDF_UINT
FUNC_8 (HPDF_Font VAR_5,
              const HPDF_BYTE *VAR_6,
              HPDF_UINT VAR_7,
              HPDF_REAL VAR_8,
              HPDF_REAL VAR_9,
              HPDF_REAL VAR_10,
              HPDF_REAL VAR_11,
              HPDF_BOOL VAR_12,
              HPDF_REAL *VAR_13)
{
    HPDF_REAL VAR_14 = 0;
    HPDF_UINT VAR_15 = 0;
    HPDF_UINT VAR_16;
    HPDF_FontAttr VAR_17 = (HPDF_FontAttr)VAR_5->attr;
    HPDF_ByteType VAR_18 = VAR_2;
    HPDF_Encoder VAR_19 = VAR_17->encoder;
    HPDF_ParseText_Rec VAR_20;
    HPDF_INT VAR_21;

    FUNC_5 ((" HPDF_Type0Font_MeasureText\n"));

    if (VAR_17->fontdef->type == VAR_3) {
        HPDF_CIDFontDefAttr VAR_22 =
                (HPDF_CIDFontDefAttr)VAR_17->fontdef->attr;
        VAR_21 = VAR_22->DW2[1];
    } else {
        VAR_21 = (HPDF_INT)(VAR_17->fontdef->font_bbox.bottom -
                    VAR_17->fontdef->font_bbox.top);
    }

    FUNC_3 (VAR_19, &VAR_20, VAR_6, VAR_7);

    for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
        HPDF_BYTE VAR_23 = *VAR_6++;
        HPDF_BYTE VAR_24 = *VAR_6;
        HPDF_ByteType VAR_25 = FUNC_2 (VAR_19, &VAR_20);
        HPDF_UNICODE VAR_26;
        HPDF_UINT16 VAR_27 = VAR_23;
        HPDF_UINT16 VAR_28 = 0;

        if (VAR_25 == VAR_0) {
            VAR_27 <<= 8;
            VAR_27 = (HPDF_UINT16)(VAR_27 + VAR_24);
        }

        if (!VAR_12) {
            if (FUNC_4(VAR_23)) {
                VAR_15 = VAR_16 + 1;
                if (VAR_13)
                    *VAR_13 = VAR_14;
            } else if (VAR_25 == VAR_1 ||
                        VAR_25 == VAR_0) {
                VAR_15 = VAR_16;
                if (VAR_13)
                    *VAR_13 = VAR_14;
            }
        } else {
            if (FUNC_4(VAR_23)) {
                VAR_15 = VAR_16 + 1;
                if (VAR_13)
                    *VAR_13 = VAR_14;
            }
        }

        if (FUNC_4(VAR_23)) {
            VAR_14 += VAR_11;
        }

        if (VAR_25 != VAR_2) {
            if (VAR_17->writing_mode == VAR_4) {
                if (VAR_17->fontdef->type == VAR_3) {

                    HPDF_UINT16 VAR_29 = FUNC_1 (VAR_19, VAR_27);
                    VAR_28 = FUNC_0 (VAR_17->fontdef, VAR_29);
                } else {

                    VAR_26 = (VAR_19->to_unicode_fn)(VAR_19, VAR_27);
                    VAR_28 = FUNC_6 (VAR_17->fontdef,
                            VAR_26);
                }
            } else {
                VAR_28 = (HPDF_UINT16)(-VAR_21);
            }

            if (VAR_16 > 0)
                VAR_14 += VAR_10;
        }

        VAR_14 += (HPDF_REAL)((HPDF_DOUBLE)VAR_28 * VAR_9 / 1000);


        if (VAR_14 > VAR_8 || VAR_23 == 0x0A)
            return VAR_15;

        if (FUNC_4(VAR_23))
            VAR_18 = VAR_2;
        else
            VAR_18 = VAR_25;
    }


    if (VAR_13)
        *VAR_13 = VAR_14;

    return VAR_7;
}
