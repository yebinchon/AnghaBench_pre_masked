
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vo_frame {int num_frames; struct mp_image** frames; scalar_t__ repeat; scalar_t__ redraw; } ;
struct vo {int osd; int params; struct priv* priv; } ;
struct priv {scalar_t__ shutdown; struct encoder_context* enc; } ;
struct mp_osd_res {int dummy; } ;
struct mp_image {double pts; } ;
struct encoder_context {TYPE_1__* options; TYPE_3__* encoder; struct encode_lavc_context* encode_lavc_ctx; } ;
struct encode_lavc_context {double discontinuity_pts_offset; double next_in_pts; int lock; } ;
struct TYPE_9__ {int global_quality; int time_base; } ;
struct TYPE_8__ {int quality; scalar_t__ pict_type; int pts; } ;
struct TYPE_7__ {int rawts; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 double VAR_0 ;
 int FUNC_0 (struct vo*,char*,double) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (int ) ;
 double FUNC_4 (int ) ;
 int FUNC_5 (struct encoder_context*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct encoder_context*) ;
 int FUNC_7 (double) ;
 TYPE_2__* FUNC_8 (struct mp_image*) ;
 int FUNC_9 (int ,struct mp_osd_res,double,int ,struct mp_image*) ;
 struct mp_osd_res FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (double) ;

__attribute__((used)) static void FUNC_14(struct vo *VAR_2, struct vo_frame *VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;
    struct encoder_context *VAR_5 = VAR_4->enc;
    struct encode_lavc_context *VAR_6 = VAR_5->encode_lavc_ctx;
    AVCodecContext *VAR_7 = VAR_5->encoder;

    if (VAR_3->redraw || VAR_3->repeat || VAR_3->num_frames < 1)
        return;

    struct mp_image *VAR_8 = VAR_3->frames[0];

    struct mp_osd_res VAR_9 = FUNC_10(VAR_2->params);
    FUNC_9(VAR_2->osd, VAR_9, VAR_8->pts, VAR_1, VAR_8);

    if (VAR_4->shutdown)
        return;


    FUNC_11(&VAR_6->lock);

    double VAR_10 = VAR_8->pts;
    double VAR_11 = VAR_10;
    if (!VAR_5->options->rawts) {

        if (VAR_6->discontinuity_pts_offset == VAR_0) {
            VAR_6->discontinuity_pts_offset = VAR_6->next_in_pts - VAR_10;
        } else if (FUNC_7(VAR_10 + VAR_6->discontinuity_pts_offset -
                        VAR_6->next_in_pts) > 30)
        {
            FUNC_0(VAR_2, "detected an unexpected discontinuity (pts jumped by "
                    "%f seconds)\n",
                    VAR_10 + VAR_6->discontinuity_pts_offset - VAR_6->next_in_pts);
            VAR_6->discontinuity_pts_offset = VAR_6->next_in_pts - VAR_10;
        }

        VAR_11 = VAR_10 + VAR_6->discontinuity_pts_offset;
    }

    VAR_11 += FUNC_6(VAR_5);

    if (!VAR_5->options->rawts) {

        double VAR_12 = FUNC_4(VAR_7->time_base);
        double VAR_13 = VAR_10 + VAR_12;

        double VAR_14 = VAR_13 + VAR_6->discontinuity_pts_offset;
        if (VAR_14 > VAR_6->next_in_pts)
            VAR_6->next_in_pts = VAR_14;
    }

    FUNC_12(&VAR_6->lock);

    AVFrame *VAR_15 = FUNC_8(VAR_8);
    if (!VAR_15)
        FUNC_1();

    VAR_15->pts = FUNC_13(VAR_11 * FUNC_4(FUNC_3(VAR_7->time_base)));
    VAR_15->pict_type = 0;
    VAR_15->quality = VAR_7->global_quality;
    FUNC_5(VAR_5, VAR_15);
    FUNC_2(&VAR_15);
}
