
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_10__ ;


struct TYPE_34__ {scalar_t__ type; scalar_t__ attr; } ;
struct TYPE_28__ {int obj_class; } ;
struct TYPE_33__ {TYPE_2__* attr; int free_fn; int write_fn; TYPE_1__ header; } ;
struct TYPE_32__ {scalar_t__ type; char* base_font; int missing_width; scalar_t__ attr; } ;
struct TYPE_31__ {int error; } ;
struct TYPE_30__ {int is_base14font; } ;
struct TYPE_29__ {struct TYPE_29__* widths; int xref; TYPE_8__* encoder; TYPE_5__* fontdef; int measure_text_fn; int text_width_fn; int writing_mode; int type; } ;
struct TYPE_27__ {size_t first_char; size_t last_char; int * unicode_map; } ;
typedef int HPDF_Xref ;
typedef int HPDF_UNICODE ;
typedef TYPE_2__ HPDF_UINT16 ;
typedef size_t HPDF_UINT ;
typedef TYPE_3__* HPDF_Type1FontDefAttr ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_4__* HPDF_MMgr ;
typedef int HPDF_INT16 ;
typedef TYPE_5__* HPDF_FontDef ;
typedef int HPDF_FontAttr_Rec ;
typedef TYPE_2__* HPDF_FontAttr ;
typedef TYPE_7__* HPDF_Font ;
typedef TYPE_8__* HPDF_Encoder ;
typedef TYPE_7__* HPDF_Dict ;
typedef TYPE_10__* HPDF_BasicEncoderAttr ;


 scalar_t__ FUNC_0 (TYPE_7__*,char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_7__*,char*,int ) ;
 int FUNC_2 (TYPE_7__*) ;
 TYPE_7__* FUNC_3 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_4 (TYPE_4__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int ) ;
 TYPE_2__ FUNC_8 (TYPE_5__*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int ,TYPE_7__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*,TYPE_7__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

HPDF_Font
FUNC_11 (HPDF_MMgr VAR_12,
                     HPDF_FontDef VAR_13,
                     HPDF_Encoder VAR_14,
                     HPDF_Xref VAR_15)
{
    HPDF_Dict VAR_16;
    HPDF_FontAttr VAR_17;
    HPDF_Type1FontDefAttr VAR_18;
    HPDF_BasicEncoderAttr VAR_19;
    HPDF_STATUS VAR_20 = 0;
    HPDF_UINT VAR_21;

    FUNC_6 ((" HPDF_Type1Font_New\n"));


    if (VAR_14->type != VAR_0) {
        FUNC_7(VAR_12->error, VAR_3, 0);
        return ((void*)0);
    }

    if (VAR_13->type != VAR_1) {
        FUNC_7(VAR_12->error, VAR_4, 0);
        return ((void*)0);
    }

    VAR_16 = FUNC_3 (VAR_12);
    if (!VAR_16)
        return ((void*)0);

    VAR_16->header.obj_class |= VAR_6;

    VAR_17 = FUNC_4 (VAR_12, sizeof(HPDF_FontAttr_Rec));
    if (!VAR_17) {
        FUNC_2 (VAR_16);
        return ((void*)0);
    }

    VAR_16->header.obj_class |= VAR_6;
    VAR_16->write_fn = VAR_10;
    VAR_16->free_fn = VAR_9;

    FUNC_5 (VAR_17, 0, sizeof(HPDF_FontAttr_Rec));

    VAR_16->attr = VAR_17;
    VAR_17->type = VAR_2;
    VAR_17->writing_mode = VAR_7;
    VAR_17->text_width_fn = VAR_11;
    VAR_17->measure_text_fn = VAR_8;
    VAR_17->fontdef = VAR_13;
    VAR_17->encoder = VAR_14;
    VAR_17->xref = VAR_15;




    VAR_17->widths = FUNC_4 (VAR_12, sizeof(HPDF_INT16) * 256);
    if (!VAR_17->widths) {
        FUNC_2 (VAR_16);
        return ((void*)0);
    }

    VAR_19 = (HPDF_BasicEncoderAttr)VAR_14->attr;

    FUNC_5 (VAR_17->widths, 0, sizeof(HPDF_INT16) * 256);
    for (VAR_21 = VAR_19->first_char; VAR_21 <= VAR_19->last_char; VAR_21++) {
        HPDF_UNICODE VAR_22 = VAR_19->unicode_map[VAR_21];

        HPDF_UINT16 VAR_23 = FUNC_8 (VAR_13, VAR_22);
        VAR_17->widths[VAR_21] = VAR_23;
    }

    VAR_18 = (HPDF_Type1FontDefAttr)VAR_13->attr;

    VAR_20 += FUNC_0 (VAR_16, "Type", "Font");
    VAR_20 += FUNC_0 (VAR_16, "BaseFont", VAR_13->base_font);
    VAR_20 += FUNC_0 (VAR_16, "Subtype", "Type1");

    if (!VAR_18->is_base14font) {
        if (VAR_13->missing_width != 0)
            VAR_20 += FUNC_1 (VAR_16, "MissingWidth",
                    VAR_13->missing_width);

        VAR_20 += FUNC_10 (VAR_12, VAR_16, VAR_15);
    }

    if (VAR_20 != VAR_5) {
        FUNC_2 (VAR_16);
        return ((void*)0);
    }

    if (FUNC_9 (VAR_15, VAR_16) != VAR_5)
        return ((void*)0);

    return VAR_16;
}
