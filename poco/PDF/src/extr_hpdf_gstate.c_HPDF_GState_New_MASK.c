
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_15__ {int member_2; int member_1; TYPE_1__ member_0; } ;
struct TYPE_12__ {int member_0; int member_3; int member_5; int member_4; int member_2; int member_1; } ;
struct TYPE_14__ {scalar_t__ depth; struct TYPE_14__* prev; int writing_mode; scalar_t__ font_size; int * font; scalar_t__ gray_stroke; scalar_t__ gray_fill; void* cmyk_stroke; void* cmyk_fill; void* rgb_stroke; void* rgb_fill; void* cs_fill; void* cs_stroke; int text_rise; int rendering_mode; int text_leading; int h_scalling; int word_space; int char_space; int flatness; TYPE_5__ dash_mode; int miter_limit; int line_join; int line_cap; int line_width; TYPE_2__ trans_matrix; } ;
struct TYPE_13__ {int error; } ;
typedef TYPE_2__ HPDF_TransMatrix ;
typedef void* HPDF_RGBColor ;
typedef TYPE_3__* HPDF_MMgr ;
typedef int HPDF_GState_Rec ;
typedef TYPE_4__* HPDF_GState ;
typedef TYPE_5__ HPDF_DashMode ;
typedef void* HPDF_CMYKColor ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_4__* FUNC_0 (TYPE_3__*,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_14 ;

HPDF_GState
FUNC_2 (HPDF_MMgr VAR_15,
                  HPDF_GState VAR_16)
{
    HPDF_GState VAR_17;

    if (VAR_16 && VAR_16->depth >= VAR_13) {
        FUNC_1 (VAR_15->error, VAR_12, 0);

        return ((void*)0);
    }

    VAR_17 = FUNC_0 (VAR_15, sizeof(HPDF_GState_Rec));
    if (!VAR_17)
        return ((void*)0);

    if (VAR_16) {
        VAR_17->trans_matrix = VAR_16->trans_matrix;
        VAR_17->line_width = VAR_16->line_width;
        VAR_17->line_cap = VAR_16->line_cap;
        VAR_17->line_join = VAR_16->line_join;
        VAR_17->miter_limit = VAR_16->miter_limit;
        VAR_17->dash_mode = VAR_16->dash_mode;
        VAR_17->flatness = VAR_16->flatness;

        VAR_17->char_space = VAR_16->char_space;
        VAR_17->word_space = VAR_16->word_space;
        VAR_17->h_scalling = VAR_16->h_scalling;
        VAR_17->text_leading = VAR_16->text_leading;
        VAR_17->rendering_mode = VAR_16->rendering_mode;
        VAR_17->text_rise = VAR_16->text_rise;

        VAR_17->cs_stroke = VAR_16->cs_stroke;
        VAR_17->cs_fill = VAR_16->cs_fill;
        VAR_17->rgb_fill = VAR_16->rgb_fill;
        VAR_17->rgb_stroke = VAR_16->rgb_stroke;
        VAR_17->cmyk_fill = VAR_16->cmyk_fill;
        VAR_17->cmyk_stroke = VAR_16->cmyk_stroke;
        VAR_17->gray_fill = VAR_16->gray_fill;
        VAR_17->gray_stroke = VAR_16->gray_stroke;

        VAR_17->font = VAR_16->font;
        VAR_17->font_size = VAR_16->font_size;
        VAR_17->writing_mode = VAR_16->writing_mode;

        VAR_17->prev = VAR_16;
        VAR_17->depth = VAR_16->depth + 1;
    } else {
        HPDF_TransMatrix VAR_18 = {1, 0, 0, 1, 0, 0};
        HPDF_RGBColor VAR_19 = {0, 0, 0};
        HPDF_CMYKColor VAR_20 = {0, 0, 0, 0};
        HPDF_DashMode VAR_21 = {{0, 0, 0, 0, 0, 0, 0, 0}, 0, 0};

        VAR_17->trans_matrix = VAR_18;
        VAR_17->line_width = VAR_7;
        VAR_17->line_cap = VAR_5;
        VAR_17->line_join = VAR_6;
        VAR_17->miter_limit = VAR_8;
        VAR_17->dash_mode = VAR_21;
        VAR_17->flatness = VAR_2;

        VAR_17->char_space = VAR_1;
        VAR_17->word_space = VAR_11;
        VAR_17->h_scalling = VAR_3;
        VAR_17->text_leading = VAR_4;
        VAR_17->rendering_mode = VAR_9;
        VAR_17->text_rise = VAR_10;

        VAR_17->cs_stroke = VAR_0;
        VAR_17->cs_fill = VAR_0;
        VAR_17->rgb_fill = VAR_19;
        VAR_17->rgb_stroke = VAR_19;
        VAR_17->cmyk_fill = VAR_20;
        VAR_17->cmyk_stroke = VAR_20;
        VAR_17->gray_fill = 0;
        VAR_17->gray_stroke = 0;

        VAR_17->font = ((void*)0);
        VAR_17->font_size = 0;
        VAR_17->writing_mode = VAR_14;

        VAR_17->prev = ((void*)0);
        VAR_17->depth = 1;
    }

    return VAR_17;
}
