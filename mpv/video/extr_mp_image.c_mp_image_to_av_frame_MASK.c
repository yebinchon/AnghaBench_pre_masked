
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sig_peak; int gamma; int primaries; int levels; int space; } ;
struct mp_image_params {TYPE_2__ color; int chroma_location; int p_h; int p_w; } ;
struct mp_image {int fields; int num_ff_side_data; struct mp_ff_side_data* ff_side_data; struct mp_image_params params; int * icc_profile; int pict_type; int * stride; int * planes; int h; int w; int imgfmt; int * hwctx; int ** bufs; } ;
struct mp_ff_side_data {int * buf; int type; } ;
struct TYPE_6__ {int den; int num; } ;
struct AVFrame {scalar_t__ format; int interlaced_frame; int top_field_first; int repeat_pict; TYPE_5__* opaque_ref; int chroma_location; int color_trc; int color_primaries; int color_range; int colorspace; int pict_type; int * data; int * extended_data; int * linesize; TYPE_1__ sample_aspect_ratio; int height; int width; int * hw_frames_ctx; int ** buf; } ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {int MaxCLL; } ;
typedef int AVFrameSideData ;
typedef struct AVFrame AVFrame ;
typedef TYPE_3__ AVContentLightMetadata ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 TYPE_5__* FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (struct AVFrame*) ;
 struct AVFrame* FUNC_3 () ;
 int FUNC_4 (struct AVFrame**) ;
 int FUNC_5 (struct AVFrame*,int ) ;
 int * FUNC_6 (struct AVFrame*,int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct mp_image* FUNC_13 (struct mp_image*) ;
 int FUNC_14 (struct mp_image*) ;

struct AVFrame *FUNC_15(struct mp_image *VAR_7)
{
    struct mp_image *VAR_8 = FUNC_13(VAR_7);
    AVFrame *VAR_9 = FUNC_3();
    if (!VAR_9 || !VAR_8) {
        FUNC_14(VAR_8);
        FUNC_4(&VAR_9);
        return ((void*)0);
    }

    for (int VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
        VAR_9->buf[VAR_10] = VAR_8->bufs[VAR_10];
        VAR_8->bufs[VAR_10] = ((void*)0);
    }

    VAR_9->hw_frames_ctx = VAR_8->hwctx;
    VAR_8->hwctx = ((void*)0);

    VAR_9->format = FUNC_7(VAR_7->imgfmt);
    VAR_9->width = VAR_7->w;
    VAR_9->height = VAR_7->h;

    VAR_9->sample_aspect_ratio.num = VAR_7->params.p_w;
    VAR_9->sample_aspect_ratio.den = VAR_7->params.p_h;

    for (int VAR_11 = 0; VAR_11 < 4; VAR_11++) {
        VAR_9->data[VAR_11] = VAR_7->planes[VAR_11];
        VAR_9->linesize[VAR_11] = VAR_7->stride[VAR_11];
    }
    VAR_9->extended_data = VAR_9->data;

    VAR_9->pict_type = VAR_7->pict_type;
    if (VAR_7->fields & VAR_2)
        VAR_9->interlaced_frame = 1;
    if (VAR_7->fields & VAR_4)
        VAR_9->top_field_first = 1;
    if (VAR_7->fields & VAR_3)
        VAR_9->repeat_pict = 1;

    VAR_9->colorspace = FUNC_11(VAR_7->params.color.space);
    VAR_9->color_range = FUNC_9(VAR_7->params.color.levels);
    VAR_9->color_primaries =
        FUNC_10(VAR_7->params.color.primaries);
    VAR_9->color_trc = FUNC_12(VAR_7->params.color.gamma);

    VAR_9->chroma_location = FUNC_8(VAR_7->params.chroma_location);

    VAR_9->opaque_ref = FUNC_1(sizeof(struct mp_image_params));
    if (!VAR_9->opaque_ref)
        FUNC_0();
    *(struct mp_image_params *)VAR_9->opaque_ref->data = VAR_7->params;
    FUNC_14(VAR_8);

    if (VAR_9->format == VAR_1)
        FUNC_4(&VAR_9);
    return VAR_9;
}
