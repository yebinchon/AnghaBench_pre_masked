
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_24__ {int last_char; int first_char; } ;
struct TYPE_23__ {scalar_t__ type; scalar_t__ attr; } ;
struct TYPE_18__ {int obj_class; } ;
struct TYPE_22__ {TYPE_4__* attr; int free_fn; int before_write_fn; int write_fn; TYPE_1__ header; int error; } ;
struct TYPE_21__ {struct TYPE_21__* used; struct TYPE_21__* widths; int xref; TYPE_6__* encoder; TYPE_3__* fontdef; int measure_text_fn; int text_width_fn; int writing_mode; int type; } ;
struct TYPE_20__ {scalar_t__ type; int missing_width; scalar_t__ attr; } ;
struct TYPE_19__ {char* base_font; } ;
typedef int HPDF_Xref ;
typedef TYPE_2__* HPDF_TTFontDefAttr ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MMgr ;
typedef int HPDF_INT16 ;
typedef TYPE_3__* HPDF_FontDef ;
typedef int HPDF_FontAttr_Rec ;
typedef TYPE_4__* HPDF_FontAttr ;
typedef TYPE_5__* HPDF_Font ;
typedef TYPE_6__* HPDF_Encoder ;
typedef TYPE_5__* HPDF_Dict ;
typedef TYPE_8__* HPDF_BasicEncoderAttr ;
typedef int HPDF_BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*,char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_5__*,char*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_5__* FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_4 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int ,TYPE_5__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

HPDF_Font
FUNC_9 (HPDF_MMgr VAR_13,
                  HPDF_FontDef VAR_14,
                  HPDF_Encoder VAR_15,
                  HPDF_Xref VAR_16)
{
    HPDF_Dict VAR_17;
    HPDF_FontAttr VAR_18;
    HPDF_TTFontDefAttr VAR_19;
    HPDF_BasicEncoderAttr VAR_20;
    HPDF_STATUS VAR_21 = 0;

    FUNC_6 ((" HPDF_TTFont_New\n"));

    VAR_17 = FUNC_3 (VAR_13);
    if (!VAR_17)
        return ((void*)0);

    VAR_17->header.obj_class |= VAR_7;


    if (VAR_15->type != VAR_1) {
        FUNC_7(VAR_17->error, VAR_4, 0);
        return ((void*)0);
    }

    if (VAR_14->type != VAR_2) {
        FUNC_7(VAR_17->error, VAR_5, 0);
        return ((void*)0);
    }

    VAR_18 = FUNC_4 (VAR_13, sizeof(HPDF_FontAttr_Rec));
    if (!VAR_18) {
        FUNC_2 (VAR_17);
        return ((void*)0);
    }

    FUNC_5 (VAR_18, 0, sizeof(HPDF_FontAttr_Rec));

    VAR_17->header.obj_class |= VAR_7;
    VAR_17->write_fn = VAR_11;
    VAR_17->before_write_fn = VAR_0;
    VAR_17->free_fn = VAR_10;
    VAR_17->attr = VAR_18;

    VAR_18->type = VAR_3;
    VAR_18->writing_mode = VAR_8;
    VAR_18->text_width_fn = VAR_12;
    VAR_18->measure_text_fn = VAR_9;
    VAR_18->fontdef = VAR_14;
    VAR_18->encoder = VAR_15;
    VAR_18->xref = VAR_16;
    VAR_18->widths = FUNC_4 (VAR_13, sizeof(HPDF_INT16) * 256);
    if (!VAR_18->widths) {
        FUNC_2 (VAR_17);
        return ((void*)0);
    }

    FUNC_5 (VAR_18->widths, 0, sizeof(HPDF_INT16) * 256);

    VAR_18->used = FUNC_4 (VAR_13, sizeof(HPDF_BYTE) * 256);
    if (!VAR_18->used) {
        FUNC_2 (VAR_17);
        return ((void*)0);
    }

    FUNC_5 (VAR_18->used, 0, sizeof(HPDF_BYTE) * 256);

    VAR_19 = (HPDF_TTFontDefAttr)VAR_14->attr;

    VAR_21 += FUNC_0 (VAR_17, "Type", "Font");
    VAR_21 += FUNC_0 (VAR_17, "BaseFont", VAR_19->base_font);
    VAR_21 += FUNC_0 (VAR_17, "Subtype", "TrueType");

    VAR_20 = (HPDF_BasicEncoderAttr)VAR_15->attr;

    VAR_21 += FUNC_1 (VAR_17, "FirstChar", VAR_20->first_char);
    VAR_21 += FUNC_1 (VAR_17, "LastChar", VAR_20->last_char);
    if (VAR_14->missing_width != 0)
        VAR_21 += FUNC_1 (VAR_17, "MissingWidth",
                VAR_14->missing_width);

    if (VAR_21 != VAR_6) {
        FUNC_2 (VAR_17);
        return ((void*)0);
    }

    if (FUNC_8 (VAR_16, VAR_17) != VAR_6)
        return ((void*)0);

    return VAR_17;
}
