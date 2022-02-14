
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mux_stream {void (* on_ready ) (void*) ;void* on_ready_ctx; TYPE_1__* st; int encoder_timebase; } ;
struct encoder_stream_info {TYPE_2__* codecpar; int timebase; } ;
struct encode_priv {int failed; int muxer; } ;
struct encode_lavc_context {int lock; struct encode_priv* priv; } ;
struct TYPE_5__ {int sample_aspect_ratio; int codec_type; } ;
struct TYPE_4__ {int codecpar; int sample_aspect_ratio; int time_base; } ;


 int VAR_0 ;
 int FUNC_0 (struct encode_priv*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 struct mux_stream* FUNC_4 (struct encode_lavc_context*,int ) ;
 int FUNC_5 (struct encode_lavc_context*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct mux_stream *FUNC_8(struct encode_lavc_context *VAR_1,
                                                 struct encoder_stream_info *VAR_2,
                                                 void (*VAR_3)(void *VAR_4),
                                                 void *VAR_5)
{
    struct encode_priv *VAR_6 = VAR_1->priv;

    FUNC_6(&VAR_1->lock);

    struct mux_stream *VAR_7 = FUNC_4(VAR_1, VAR_2->codecpar->codec_type);
    if (!VAR_7) {
        FUNC_0(VAR_6, "Cannot add a stream at runtime.\n");
        VAR_6->failed = 1;
        goto done;
    }
    if (VAR_7->st) {

        FUNC_0(VAR_6, "Encoder was reinitialized; this is not allowed.\n");
        VAR_6->failed = 1;
        VAR_7 = ((void*)0);
        goto done;
    }

    VAR_7->st = FUNC_3(VAR_6->muxer, ((void*)0));
    FUNC_1(VAR_7->st);

    VAR_7->encoder_timebase = VAR_2->timebase;
    VAR_7->st->time_base = VAR_2->timebase;


    if (VAR_2->codecpar->codec_type == VAR_0)
        VAR_7->st->sample_aspect_ratio = VAR_2->codecpar->sample_aspect_ratio;

    if (FUNC_2(VAR_7->st->codecpar, VAR_2->codecpar) < 0)
        FUNC_1(0);

    VAR_7->on_ready = VAR_3;
    VAR_7->on_ready_ctx = VAR_5;

    FUNC_5(VAR_1);

done:
    FUNC_7(&VAR_1->lock);

    return VAR_7;
}
