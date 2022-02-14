
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_21__ {scalar_t__* DW2; } ;
struct TYPE_20__ {scalar_t__ (* byte_type_fn ) (TYPE_5__*,int *) ;int (* to_unicode_fn ) (TYPE_5__*,int) ;} ;
struct TYPE_19__ {int attr; } ;
struct TYPE_18__ {scalar_t__ writing_mode; TYPE_11__* fontdef; TYPE_5__* encoder; } ;
struct TYPE_17__ {int numwords; scalar_t__ width; int numspace; int numchars; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_16__ {scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_1__ font_bbox; int attr; } ;
typedef int HPDF_UNICODE ;
typedef int HPDF_UINT16 ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_2__ HPDF_TextWidth ;
typedef int HPDF_ParseText_Rec ;
typedef scalar_t__ HPDF_INT ;
typedef TYPE_3__* HPDF_FontAttr ;
typedef TYPE_4__* HPDF_Font ;
typedef TYPE_5__* HPDF_Encoder ;
typedef TYPE_6__* HPDF_CIDFontDefAttr ;
typedef scalar_t__ HPDF_ByteType ;
typedef int HPDF_BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_11__*,int) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int *,int const*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (TYPE_11__*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (TYPE_5__*,int) ;

__attribute__((used)) static HPDF_TextWidth
FUNC_8 (HPDF_Font VAR_4,
            const HPDF_BYTE *VAR_5,
            HPDF_UINT VAR_6)
{
    HPDF_TextWidth VAR_7 = {0, 0, 0, 0};
    HPDF_FontAttr VAR_8 = (HPDF_FontAttr)VAR_4->attr;
    HPDF_ParseText_Rec VAR_9;
    HPDF_Encoder VAR_10 = VAR_8->encoder;
    HPDF_UINT VAR_11 = 0;
    HPDF_INT VAR_12;
    HPDF_BYTE VAR_13 = 0;

    FUNC_4 ((" HPDF_Type0Font_TextWidth\n"));

    if (VAR_8->fontdef->type == VAR_2) {
        HPDF_CIDFontDefAttr VAR_14 =
                    (HPDF_CIDFontDefAttr)VAR_8->fontdef->attr;
        VAR_12 = VAR_14->DW2[1];
    } else {
        VAR_12 = (HPDF_INT)(VAR_8->fontdef->font_bbox.bottom -
                    VAR_8->fontdef->font_bbox.top);
    }

    FUNC_2 (VAR_10, &VAR_9, VAR_5, VAR_6);

    while (VAR_11 < VAR_6) {
        HPDF_ByteType VAR_15 = (VAR_10->byte_type_fn)(VAR_10, &VAR_9);
        HPDF_UINT16 VAR_16;
        HPDF_UNICODE VAR_17;
        HPDF_UINT16 VAR_18;
        HPDF_UINT VAR_19 = 0;

        VAR_13 = *VAR_5++;
        VAR_18 = VAR_13;

        if (VAR_15 == VAR_0) {
            VAR_18 <<= 8;
            VAR_18 = (HPDF_UINT16)(VAR_18 + *VAR_5);
        }

        if (VAR_15 != VAR_1) {
            if (VAR_8->writing_mode == VAR_3) {
                if (VAR_8->fontdef->type == VAR_2) {

                    VAR_16 = FUNC_1 (VAR_10, VAR_18);
                    VAR_19 = FUNC_0 (VAR_8->fontdef, VAR_16);
                } else {

                    VAR_17 = (VAR_10->to_unicode_fn)(VAR_10, VAR_18);
                    VAR_19 = FUNC_5 (VAR_8->fontdef, VAR_17);
                }
            } else {
                VAR_19 = -VAR_12;
            }

            VAR_7.numchars++;
        }

        if (FUNC_3(VAR_18)) {
            VAR_7.numwords++;
            VAR_7.numspace++;
        }

        VAR_7.width += VAR_19;
        VAR_11++;
    }


    if (FUNC_3(VAR_13))
        ;
    else
        VAR_7.numwords++;

    return VAR_7;
}
