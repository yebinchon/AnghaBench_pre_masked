
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int unicode; void* width; void* char_cd; } ;
struct TYPE_7__ {void* top; void* right; void* bottom; void* left; } ;
struct TYPE_9__ {int base_font; scalar_t__ italic_angle; int error; int mmgr; void* stemv; void* stemh; void* descent; void* ascent; void* cap_height; TYPE_1__ font_bbox; int flags; int attr; } ;
struct TYPE_8__ {int char_set; int encoding_scheme; int widths_count; TYPE_4__* widths; } ;
typedef void* HPDF_UINT16 ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_2__* HPDF_Type1FontDefAttr ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef void* HPDF_REAL ;
typedef void* HPDF_INT16 ;
typedef TYPE_3__* HPDF_FontDef ;
typedef TYPE_4__ HPDF_CharData ;


 char* FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int VAR_10 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int FUNC_9 (int,char const*,int) ;
 scalar_t__ FUNC_10 (char const*,int ) ;
 char* FUNC_11 (char const*,char*,int ) ;
 int FUNC_12 (int ,char*,scalar_t__*) ;
 int VAR_11 ;

__attribute__((used)) static HPDF_STATUS
FUNC_13 (HPDF_FontDef VAR_12,
         HPDF_Stream VAR_13)
{
    HPDF_Type1FontDefAttr VAR_14 = (HPDF_Type1FontDefAttr)VAR_12->attr;
    char VAR_15[VAR_11];
    HPDF_CharData* VAR_16;
    HPDF_STATUS VAR_17;
    HPDF_UINT VAR_18;
    char VAR_19[VAR_8 + 1];
    HPDF_UINT VAR_20;

    FUNC_6 ((" LoadAfm\n"));

    VAR_18 = VAR_11;


    if ((VAR_17 = FUNC_12 (VAR_13, VAR_15, &VAR_18)) != VAR_10)
         return VAR_17;

    FUNC_0 (VAR_15, VAR_19, VAR_8 + 1);

    if (FUNC_8 (VAR_19, "StartFontMetrics") != 0)
        return VAR_4;



    for (;;) {
        const char *VAR_21;

        VAR_18 = VAR_11;
        if ((VAR_17 = FUNC_12 (VAR_13, VAR_15, &VAR_18)) != VAR_10)
            return VAR_17;

        VAR_21 = FUNC_0 (VAR_15, VAR_19, VAR_8 + 1);

        if (FUNC_8 (VAR_19, "FontName") == 0) {
            FUNC_9 (VAR_12->base_font, VAR_21,
                    VAR_12->base_font + VAR_8);
        } else

        if (FUNC_8 (VAR_19, "Weight") == 0) {
            if (FUNC_8 (VAR_21, "Bold") == 0)
                VAR_12->flags |= VAR_1;
        } else

        if (FUNC_8 (VAR_19, "IsFixedPitch") == 0) {
            if (FUNC_8 (VAR_21, "true") == 0)
               VAR_12->flags |= VAR_0;
        } else

        if (FUNC_8 (VAR_19, "ItalicAngle") == 0) {
            VAR_12->italic_angle = (HPDF_INT16)FUNC_1 (VAR_21);
            if (VAR_12->italic_angle != 0)
                VAR_12->flags |= VAR_2;
        } else

        if (FUNC_8 (VAR_19, "CharacterSet") == 0) {
            HPDF_UINT VAR_22 = FUNC_10 (VAR_21, VAR_9);

            if (VAR_22 > 0) {
                VAR_14->char_set = FUNC_3 (VAR_12->mmgr, VAR_22 + 1);
                if (!VAR_14->char_set)
                    return FUNC_2 (VAR_12->error);

                FUNC_9 (VAR_14->char_set, VAR_21, VAR_14->char_set + VAR_22);
            }
        } else
        if (FUNC_8 (VAR_19, "FontBBox") == 0) {
            char VAR_23[VAR_3 + 1];

            VAR_21 = FUNC_0 (VAR_21, VAR_23, VAR_3 + 1);
            VAR_12->font_bbox.left = (HPDF_REAL)FUNC_1 (VAR_23);

            VAR_21 = FUNC_0 (VAR_21, VAR_23, VAR_3 + 1);
            VAR_12->font_bbox.bottom = (HPDF_REAL)FUNC_1 (VAR_23);

            VAR_21 = FUNC_0 (VAR_21, VAR_23, VAR_3 + 1);
            VAR_12->font_bbox.right = (HPDF_REAL)FUNC_1 (VAR_23);

            FUNC_0 (VAR_21, VAR_23, VAR_3 + 1);
            VAR_12->font_bbox.top = (HPDF_REAL)FUNC_1 (VAR_23);
        } else
        if (FUNC_8 (VAR_19, "EncodingScheme") == 0) {
            FUNC_9 (VAR_14->encoding_scheme, VAR_21,
                    VAR_14->encoding_scheme + VAR_8);
        } else
        if (FUNC_8 (VAR_19, "CapHeight") == 0) {
            VAR_12->cap_height = (HPDF_UINT16)FUNC_1 (VAR_21);
        } else
        if (FUNC_8 (VAR_19, "Ascender") == 0) {
            VAR_12->ascent = (HPDF_INT16)FUNC_1 (VAR_21);
        } else
        if (FUNC_8 (VAR_19, "Descender") == 0) {
            VAR_12->descent = (HPDF_INT16)FUNC_1 (VAR_21);
        } else
        if (FUNC_8 (VAR_19, "STDHW") == 0) {
            VAR_12->stemh = (HPDF_UINT16)FUNC_1 (VAR_21);
        } else
        if (FUNC_8 (VAR_19, "STDHV") == 0) {
            VAR_12->stemv = (HPDF_UINT16)FUNC_1 (VAR_21);
        } else
        if (FUNC_8 (VAR_19, "StartCharMetrics") == 0) {
            VAR_14->widths_count = FUNC_1 (VAR_21);
            break;
        }
    }

    VAR_16 = (HPDF_CharData*)FUNC_3 (VAR_12->mmgr,
            sizeof(HPDF_CharData) * VAR_14->widths_count);
    if (VAR_16 == ((void*)0))
        return FUNC_2 (VAR_12->error);

    FUNC_5 (VAR_16, 0, sizeof(HPDF_CharData) * VAR_14->widths_count);
    VAR_14->widths = VAR_16;


    for (VAR_20 = 0; VAR_20 < VAR_14->widths_count; VAR_20++, VAR_16++) {
        const char *VAR_24;
        char VAR_25[VAR_8 + 1];

        VAR_18 = VAR_11;
        if ((VAR_17 = FUNC_12 (VAR_13, VAR_15, &VAR_18)) != VAR_10)
            return VAR_17;


        VAR_24 = FUNC_0 (VAR_15, VAR_25, VAR_8 + 1);
        if (FUNC_8 (VAR_25, "CX") == 0) {

            return FUNC_7 (VAR_12->error,
                    VAR_5, 0);
        } else
        if (FUNC_8 (VAR_25, "C") == 0) {
            VAR_24 += 2;

            VAR_24 = FUNC_0 (VAR_24, VAR_25, VAR_8 + 1);
              FUNC_1 (VAR_25);

            VAR_16->char_cd = (HPDF_INT16)FUNC_1 (VAR_25);

        } else
            return FUNC_7 (VAR_12->error,
                    VAR_5, 0);


        VAR_24 = FUNC_11 (VAR_24, "WX ", 0);
        if (!VAR_24)
            return FUNC_7 (VAR_12->error, VAR_7, 0);

        VAR_24 += 3;

        VAR_24 = FUNC_0 (VAR_24, VAR_25, VAR_8 + 1);
        if (VAR_25[0] == 0)
            return FUNC_7 (VAR_12->error, VAR_7, 0);

        VAR_16->width = (HPDF_INT16)FUNC_1 (VAR_25);


        VAR_24 = FUNC_11 (VAR_24, "N ", 0);
        if (!VAR_24)
            return FUNC_7 (VAR_12->error, VAR_6, 0);

        VAR_24 += 2;

        FUNC_0 (VAR_24, VAR_25, VAR_8 + 1);

        VAR_16->unicode = FUNC_4 (VAR_25);

    }

    return VAR_10;
}
