
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sd_ass_priv {int * ass_renderer; } ;
struct sd {struct sd_ass_priv* priv; struct mp_subtitle_opts* opts; } ;
struct mp_subtitle_opts {int ass_style_override; int sub_scale_with_window; int sub_use_margins; int sub_scale_by_window; int ass_scale_with_window; int ass_use_margins; int sub_pos; float ass_line_spacing; int ass_hinting; float sub_scale; int sub_style; scalar_t__ ass_justify; int ass_shaper; } ;
struct mp_osd_res {float h; int mt; int mb; int mr; int ml; int w; } ;
struct TYPE_7__ {int FontName; int member_0; } ;
struct TYPE_6__ {scalar_t__ default_style; scalar_t__ n_styles; int PlayResY; TYPE_2__* styles; } ;
typedef TYPE_1__ ASS_Track ;
typedef TYPE_2__ ASS_Style ;
typedef int ASS_Renderer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,float) ;
 int FUNC_2 (int *,int ,float) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,float) ;
 int FUNC_6 (int *,int,int,int ,int ) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int,int ) ;

__attribute__((used)) static void FUNC_13(struct sd *VAR_4, struct mp_osd_res *VAR_5,
                          bool VAR_6, ASS_Track *VAR_7)
{
    struct mp_subtitle_opts *VAR_8 = VAR_4->opts;
    struct sd_ass_priv *VAR_9 = VAR_4->priv;
    ASS_Renderer *VAR_10 = VAR_9->ass_renderer;

    FUNC_2(VAR_10, VAR_5->w, VAR_5->h);
    FUNC_6(VAR_10, VAR_5->mt, VAR_5->mb, VAR_5->ml, VAR_5->mr);

    bool VAR_11 = 0;
    int VAR_12 = 0;
    float VAR_13 = 0;
    float VAR_14 = 1;
    int VAR_15 = 0;
    bool VAR_16 = 0;
    bool VAR_17 = 1;
    bool VAR_18 = 0;

    if (VAR_6 || VAR_8->ass_style_override == 3) {
        VAR_16 = VAR_8->sub_scale_with_window;
        VAR_11 = VAR_8->sub_use_margins;
        VAR_17 = VAR_8->sub_scale_by_window;
        VAR_18 = 1;
    } else {
        VAR_16 = VAR_8->ass_scale_with_window;
        VAR_11 = VAR_8->ass_use_margins;
    }
    if (VAR_6 || VAR_8->ass_style_override) {
        VAR_12 = 100 - VAR_8->sub_pos;
        VAR_13 = VAR_8->ass_line_spacing;
        VAR_15 = VAR_8->ass_hinting;
        VAR_14 = VAR_8->sub_scale;
    }
    if (VAR_16) {
        int VAR_19 = VAR_5->h - (VAR_5->mt + VAR_5->mb);
        VAR_14 *= VAR_5->h / (float)FUNC_0(VAR_19, 1);
    }
    if (!VAR_17) {
        double VAR_20 = VAR_5->h / 720.0;
        if (VAR_20 != 0.0)
            VAR_14 /= VAR_20;
    }
    FUNC_10(VAR_10, VAR_11);
    FUNC_4(VAR_10, VAR_12);
    FUNC_9(VAR_10, VAR_8->ass_shaper);
    int VAR_21 = 0;
    if (VAR_18)
        VAR_21 |= VAR_3 | VAR_1;
    if (VAR_8->ass_style_override == 4)
        VAR_21 |= VAR_1;
    FUNC_8(VAR_10, VAR_21);
    ASS_Style VAR_22 = {0};
    FUNC_12(&VAR_22, 288, VAR_8->sub_style);
    FUNC_7(VAR_10, &VAR_22);
    FUNC_11(VAR_22.FontName);
    if (VAR_6 && VAR_7->default_style < VAR_7->n_styles) {
        FUNC_12(VAR_7->styles + VAR_7->default_style,
                         VAR_7->PlayResY, VAR_8->sub_style);
    }
    FUNC_1(VAR_10, VAR_14);
    FUNC_3(VAR_10, VAR_15);
    FUNC_5(VAR_10, VAR_13);
}
