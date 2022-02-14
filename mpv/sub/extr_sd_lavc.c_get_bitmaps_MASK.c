
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sub_bitmaps {int num_parts; struct sub_bitmap* parts; int format; int packed_h; int packed_w; int packed; int change_id; } ;
struct sub_bitmap {int y; float x; float dw; float dh; } ;
struct sub {int count; scalar_t__ id; int src_w; int src_h; int bound_h; int bound_w; int data; struct sub_bitmap* inbitmaps; } ;
struct TYPE_4__ {double p_w; int w; int h; scalar_t__ p_h; } ;
struct sd_lavc_priv {double current_pts; scalar_t__ displayed_id; TYPE_2__ video_params; TYPE_1__* avctx; struct sub_bitmap* outbitmaps; } ;
struct sd {struct mp_subtitle_opts* opts; struct sd_lavc_priv* priv; } ;
struct mp_subtitle_opts {int sub_pos; double sub_scale; scalar_t__ ass_style_override; scalar_t__ image_subs_video_res; scalar_t__ stretch_image_subs; scalar_t__ stretch_dvd_subs; } ;
struct mp_osd_res {scalar_t__ mb; scalar_t__ mt; scalar_t__ mr; scalar_t__ ml; } ;
struct TYPE_3__ {scalar_t__ codec_id; int width; int height; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct sd_lavc_priv*,struct sub_bitmap*,int) ;
 int VAR_2 ;
 struct sub* FUNC_2 (struct sd_lavc_priv*,double) ;
 scalar_t__ FUNC_3 (double) ;
 int FUNC_4 (struct sub_bitmaps*,int,int,struct mp_osd_res,double) ;

__attribute__((used)) static void FUNC_5(struct sd *VAR_3, struct mp_osd_res VAR_4, int VAR_5,
                        double VAR_6, struct sub_bitmaps *VAR_7)
{
    struct sd_lavc_priv *VAR_8 = VAR_3->priv;
    struct mp_subtitle_opts *VAR_9 = VAR_3->opts;

    VAR_8->current_pts = VAR_6;

    struct sub *VAR_10 = FUNC_2(VAR_8, VAR_6);

    if (!VAR_10)
        return;

    FUNC_1(VAR_8, VAR_8->outbitmaps, VAR_10->count);
    for (int VAR_11 = 0; VAR_11 < VAR_10->count; VAR_11++)
        VAR_8->outbitmaps[VAR_11] = VAR_10->inbitmaps[VAR_11];

    VAR_7->parts = VAR_8->outbitmaps;
    VAR_7->num_parts = VAR_10->count;
    if (VAR_8->displayed_id != VAR_10->id)
        VAR_7->change_id++;
    VAR_8->displayed_id = VAR_10->id;
    VAR_7->packed = VAR_10->data;
    VAR_7->packed_w = VAR_10->bound_w;
    VAR_7->packed_h = VAR_10->bound_h;
    VAR_7->format = VAR_2;

    double VAR_12 = 0;
    if (VAR_8->avctx->codec_id == VAR_0 &&
        VAR_9->stretch_dvd_subs)
    {

        double VAR_13 = VAR_8->video_params.p_w / (double)VAR_8->video_params.p_h;
        if (FUNC_3(VAR_13))
            VAR_12 = VAR_13;
    }
    if (VAR_8->avctx->codec_id == VAR_1)
        VAR_12 = -1;
    if (VAR_9->stretch_image_subs)
        VAR_4.ml = VAR_4.mr = VAR_4.mt = VAR_4.mb = 0;
    int VAR_14 = VAR_8->avctx->width;
    int VAR_15 = VAR_8->avctx->height;
    if (VAR_14 <= 0 || VAR_15 <= 0 || VAR_9->image_subs_video_res) {
        VAR_14 = VAR_8->video_params.w;
        VAR_15 = VAR_8->video_params.h;
    }
    if (VAR_10->src_w > VAR_14 || VAR_10->src_h > VAR_15) {
        VAR_14 = VAR_8->video_params.w;
        VAR_15 = VAR_8->video_params.h;
    }

    if (VAR_9->sub_pos != 100 && VAR_9->ass_style_override) {
        int VAR_16 = (100 - VAR_9->sub_pos) / 100.0 * VAR_15;

        for (int VAR_17 = 0; VAR_17 < VAR_7->num_parts; VAR_17++) {
            struct sub_bitmap *VAR_18 = &VAR_7->parts[VAR_17];



            if (VAR_18->y < VAR_15 / 2)
                continue;


            VAR_18->y = FUNC_0(VAR_18->y - VAR_16, 0);
        }
    }

    FUNC_4(VAR_7, VAR_14, VAR_15, VAR_4, VAR_12);

    if (VAR_9->sub_scale != 1.0 && VAR_9->ass_style_override) {
        for (int VAR_19 = 0; VAR_19 < VAR_7->num_parts; VAR_19++) {
            struct sub_bitmap *VAR_20 = &VAR_7->parts[VAR_19];

            float VAR_21 = (VAR_9->sub_scale - 1.0f) / 2;



            VAR_20->x -= VAR_20->dw * VAR_21;
            VAR_20->y -= VAR_20->dh * VAR_21;
            VAR_20->dw += VAR_20->dw * VAR_21 * 2;
            VAR_20->dh += VAR_20->dh * VAR_21 * 2;
        }
    }

}
