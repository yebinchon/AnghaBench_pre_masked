
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct priv {double aframecount; int aframesize; scalar_t__ lastpts; TYPE_4__* enc; int worst_time_base; } ;
struct encode_lavc_context {double audio_pts_offset; int lock; } ;
struct TYPE_8__ {int num; } ;
struct ao {double samplerate; int sstride; TYPE_1__ channels; int format; struct encode_lavc_context* encode_lavc_ctx; struct priv* priv; } ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {TYPE_3__* encoder; } ;
struct TYPE_10__ {int global_quality; int time_base; } ;
struct TYPE_9__ {int nb_samples; int* linesize; scalar_t__ pts; int quality; void** extended_data; int format; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ao*,char*,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__**) ;
 int FUNC_6 (int ) ;
 double FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (double) ;

__attribute__((used)) static void FUNC_13(struct ao *VAR_2, double VAR_3, void **VAR_4)
{
    struct priv *VAR_5 = VAR_2->priv;
    struct encode_lavc_context *VAR_6 = VAR_2->encode_lavc_ctx;
    AVCodecContext *VAR_7 = VAR_5->enc->encoder;
    double VAR_8 = VAR_5->aframecount * (double) VAR_5->aframesize /
                      VAR_2->samplerate;

    VAR_5->aframecount++;

    FUNC_10(&VAR_6->lock);
    if (VAR_4)
        VAR_6->audio_pts_offset = VAR_8 - VAR_3;
    FUNC_11(&VAR_6->lock);

    if(VAR_4) {
        AVFrame *VAR_9 = FUNC_4();
        VAR_9->format = FUNC_2(VAR_2->format);
        VAR_9->nb_samples = VAR_5->aframesize;

        size_t VAR_10 = FUNC_1(VAR_2->format) ? VAR_2->channels.num : 1;
        FUNC_3(VAR_10 <= VAR_1);
        for (int VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
            VAR_9->extended_data[VAR_11] = VAR_4[VAR_11];

        VAR_9->linesize[0] = VAR_9->nb_samples * VAR_2->sstride;

        VAR_9->pts = FUNC_12(VAR_3 * FUNC_7(FUNC_6(VAR_7->time_base)));

        int64_t VAR_12 = FUNC_8(VAR_9->pts, VAR_7->time_base,
                                         VAR_5->worst_time_base);
        if (VAR_5->lastpts != VAR_0 && VAR_12 <= VAR_5->lastpts) {


            FUNC_0(VAR_2, "audio frame pts went backwards (%d <- %d), autofixed\n",
                    (int)VAR_9->pts, (int)VAR_5->lastpts);
            VAR_12 = VAR_5->lastpts + 1;
            VAR_9->pts = FUNC_8(VAR_12, VAR_5->worst_time_base,
                                      VAR_7->time_base);
        }
        VAR_5->lastpts = VAR_12;

        VAR_9->quality = VAR_7->global_quality;
        FUNC_9(VAR_5->enc, VAR_9);
        FUNC_5(&VAR_9);
    } else {
        FUNC_9(VAR_5->enc, ((void*)0));
    }
}
