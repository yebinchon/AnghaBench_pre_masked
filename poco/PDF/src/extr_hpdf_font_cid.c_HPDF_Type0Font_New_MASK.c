
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_26__ {int ordering; int writing_mode; } ;
struct TYPE_25__ {scalar_t__ type; char* name; scalar_t__ attr; } ;
struct TYPE_21__ {int obj_class; } ;
struct TYPE_24__ {TYPE_3__* attr; int free_fn; int * write_fn; TYPE_1__ header; int error; } ;
struct TYPE_23__ {int descendant_font; int type; void* cmap_stream; int xref; TYPE_5__* encoder; TYPE_2__* fontdef; int measure_text_fn; int text_width_fn; int writing_mode; } ;
struct TYPE_22__ {scalar_t__ type; char* base_font; } ;
typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MMgr ;
typedef TYPE_2__* HPDF_FontDef ;
typedef int HPDF_FontAttr_Rec ;
typedef TYPE_3__* HPDF_FontAttr ;
typedef TYPE_4__* HPDF_Font ;
typedef TYPE_5__* HPDF_Encoder ;
typedef TYPE_4__* HPDF_Dict ;
typedef TYPE_7__* HPDF_CMapEncoderAttr ;
typedef void* HPDF_Array ;


 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 void* FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_3 (void*,int ) ;
 void* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,char*,void*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,char*,char*) ;
 int FUNC_7 (TYPE_4__*) ;
 TYPE_4__* FUNC_8 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_9 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (TYPE_3__*,int ,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 scalar_t__ FUNC_14 (int ,TYPE_4__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

HPDF_Font
FUNC_15 (HPDF_MMgr VAR_12,
                     HPDF_FontDef VAR_13,
                     HPDF_Encoder VAR_14,
                     HPDF_Xref VAR_15)
{
    HPDF_Dict VAR_16;
    HPDF_FontAttr VAR_17;
    HPDF_CMapEncoderAttr VAR_18;
    HPDF_STATUS VAR_19 = 0;
    HPDF_Array VAR_20;

    FUNC_11 ((" HPDF_Type0Font_New\n"));

    VAR_16 = FUNC_8 (VAR_12);
    if (!VAR_16)
        return ((void*)0);

    VAR_16->header.obj_class |= VAR_8;


    if (VAR_14->type != VAR_0) {
        FUNC_12(VAR_16->error, VAR_5, 0);
        return ((void*)0);
    }

    if (VAR_13->type != VAR_1 &&
        VAR_13->type != VAR_2) {
        FUNC_12(VAR_16->error, VAR_6, 0);
        return ((void*)0);
    }

    VAR_17 = FUNC_9 (VAR_12, sizeof(HPDF_FontAttr_Rec));
    if (!VAR_17) {
        FUNC_7 (VAR_16);
        return ((void*)0);
    }

    VAR_16->header.obj_class |= VAR_8;
    VAR_16->write_fn = ((void*)0);
    VAR_16->free_fn = VAR_10;
    VAR_16->attr = VAR_17;

    VAR_18 = (HPDF_CMapEncoderAttr)VAR_14->attr;

    FUNC_10 (VAR_17, 0, sizeof(HPDF_FontAttr_Rec));

    VAR_17->writing_mode = VAR_18->writing_mode;
    VAR_17->text_width_fn = VAR_11;
    VAR_17->measure_text_fn = VAR_9;
    VAR_17->fontdef = VAR_13;
    VAR_17->encoder = VAR_14;
    VAR_17->xref = VAR_15;

    if (FUNC_14 (VAR_15, VAR_16) != VAR_7)
        return ((void*)0);

    VAR_19 += FUNC_6 (VAR_16, "Type", "Font");
    VAR_19 += FUNC_6 (VAR_16, "BaseFont", VAR_13->base_font);
    VAR_19 += FUNC_6 (VAR_16, "Subtype", "Type0");

    if (VAR_13->type == VAR_1) {
        VAR_19 += FUNC_6 (VAR_16, "Encoding", VAR_14->name);
    } else {
        if (FUNC_13(VAR_18->ordering, "Identity-H") == 0) {
     VAR_19 += FUNC_6 (VAR_16, "Encoding", "Identity-H");
     VAR_17->cmap_stream = FUNC_2 (VAR_14, VAR_15);

     if (VAR_17->cmap_stream) {
         VAR_19 += FUNC_5 (VAR_16, "ToUnicode", VAR_17->cmap_stream);
     } else
         return ((void*)0);
 } else {
            VAR_17->cmap_stream = FUNC_2 (VAR_14, VAR_15);

     if (VAR_17->cmap_stream) {
         VAR_19 += FUNC_5 (VAR_16, "Encoding", VAR_17->cmap_stream);
     } else
       return ((void*)0);
 }
    }

    if (VAR_19 != VAR_7)
        return ((void*)0);

    VAR_20 = FUNC_4 (VAR_12);
    if (!VAR_20)
        return ((void*)0);

    if (FUNC_5 (VAR_16, "DescendantFonts", VAR_20) != VAR_7)
        return ((void*)0);

    if (VAR_13->type == VAR_1) {
        VAR_17->descendant_font = FUNC_0 (VAR_16, VAR_15);
        VAR_17->type = VAR_3;
    } else {
        VAR_17->descendant_font = FUNC_1 (VAR_16, VAR_15);
        VAR_17->type = VAR_4;
    }

    if (!VAR_17->descendant_font)
        return ((void*)0);
    else
        if (FUNC_3 (VAR_20, VAR_17->descendant_font) !=
                VAR_7)
            return ((void*)0);

    return VAR_16;
}
