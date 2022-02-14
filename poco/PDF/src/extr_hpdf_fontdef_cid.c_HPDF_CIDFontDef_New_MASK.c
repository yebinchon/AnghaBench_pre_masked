
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int missing_width; int DW; int* DW2; TYPE_1__* mmgr; int widths; struct TYPE_14__* attr; int valid; int init_fn; int free_fn; int type; int error; scalar_t__ base_font; int sig_bytes; } ;
struct TYPE_13__ {int error; } ;
typedef TYPE_1__* HPDF_MMgr ;
typedef int HPDF_FontDef_Rec ;
typedef int HPDF_FontDef_InitFunc ;
typedef TYPE_2__* HPDF_FontDef ;
typedef int HPDF_CIDFontDefAttr_Rec ;
typedef TYPE_2__* HPDF_CIDFontDefAttr ;
typedef TYPE_2__ HPDF_BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,char*,scalar_t__) ;

HPDF_FontDef
FUNC_6 (HPDF_MMgr VAR_6,
                      char *VAR_7,
                      HPDF_FontDef_InitFunc VAR_8)
{
    HPDF_FontDef VAR_9;
    HPDF_CIDFontDefAttr VAR_10;

    FUNC_4 ((" HPDF_CIDFontDef_New\n"));

    if (!VAR_6)
        return ((void*)0);

    VAR_9 = FUNC_1 (VAR_6, sizeof(HPDF_FontDef_Rec));
    if (!VAR_9)
        return ((void*)0);

    FUNC_3 (VAR_9, 0, sizeof(HPDF_FontDef_Rec));
    VAR_9->sig_bytes = VAR_3;
    FUNC_5 (VAR_9->base_font, VAR_7, VAR_9->base_font +
                    VAR_5);
    VAR_9->mmgr = VAR_6;
    VAR_9->error = VAR_6->error;
    VAR_9->type = VAR_4;
    VAR_9->free_fn = VAR_0;
    VAR_9->init_fn = VAR_8;
    VAR_9->valid = VAR_2;
    VAR_10 = FUNC_1 (VAR_6, sizeof(HPDF_CIDFontDefAttr_Rec));
    if (!VAR_10) {
        FUNC_0 (VAR_9->mmgr, VAR_9);
        return ((void*)0);
    }

    VAR_9->attr = VAR_10;
    FUNC_3 ((HPDF_BYTE *)VAR_10, 0,
                sizeof(HPDF_CIDFontDefAttr_Rec));

    VAR_10->widths = FUNC_2 (VAR_6, VAR_1);
    if (!VAR_10->widths) {
        FUNC_0 (VAR_9->mmgr, VAR_9);
        FUNC_0 (VAR_9->mmgr, VAR_10);
        return ((void*)0);
    }

    VAR_9->missing_width = 500;
    VAR_10->DW = 1000;
    VAR_10->DW2[0] = 880;
    VAR_10->DW2[1] = -1000;

    return VAR_9;
}
