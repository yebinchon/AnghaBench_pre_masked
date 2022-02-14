
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_stream {scalar_t__ type; TYPE_1__* codec; } ;
struct mp_decoder_wrapper {int play_dir; scalar_t__ fps; struct mp_filter* f; } ;
struct priv {int demux; struct sh_stream* header; void* log; struct mp_decoder_wrapper public; TYPE_2__* opt_cache; TYPE_1__* codec; struct mp_filter* f; } ;
struct mp_filter {int * pins; void* log; int global; struct priv* priv; } ;
struct MPOpts {scalar_t__ force_fps; } ;
struct TYPE_4__ {struct MPOpts* opts; } ;
struct TYPE_3__ {scalar_t__ fps; } ;


 int VAR_0 ;
 int FUNC_0 (struct priv*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct priv*,char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (struct priv*,int ,int ) ;
 struct mp_filter* FUNC_3 (struct mp_filter*,struct sh_stream*) ;
 int FUNC_4 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_5 (struct mp_filter*,int *) ;
 void* FUNC_6 (struct mp_filter*,void*,char*) ;
 int FUNC_7 (struct mp_filter*) ;
 int FUNC_8 (struct mp_filter*) ;

struct mp_decoder_wrapper *FUNC_9(struct mp_filter *VAR_5,
                                                     struct sh_stream *VAR_6)
{
    struct mp_filter *VAR_7 = FUNC_5(VAR_5, &VAR_4);
    if (!VAR_7)
        return ((void*)0);

    struct priv *VAR_8 = VAR_7->priv;
    struct mp_decoder_wrapper *VAR_9 = &VAR_8->public;
    VAR_8->opt_cache = FUNC_2(VAR_8, VAR_7->global, VAR_0);
    VAR_8->log = VAR_7->log;
    VAR_8->f = VAR_7;
    VAR_8->header = VAR_6;
    VAR_8->codec = VAR_8->header->codec;
    VAR_9->f = VAR_7;

    VAR_9->play_dir = 1;

    struct MPOpts *VAR_10 = VAR_8->opt_cache->opts;

    FUNC_4(VAR_7, VAR_1, "out");

    if (VAR_8->header->type == VAR_3) {
        VAR_8->log = VAR_7->log = FUNC_6(VAR_7, VAR_5->log, "!vd");

        VAR_8->public.fps = VAR_6->codec->fps;

        FUNC_1(VAR_8, "Container reported FPS: %f\n", VAR_8->public.fps);

        if (VAR_10->force_fps) {
            VAR_8->public.fps = VAR_10->force_fps;
            FUNC_0(VAR_8, "FPS forced to %5.3f.\n", VAR_8->public.fps);
            FUNC_0(VAR_8, "Use --no-correct-pts to force FPS based timing.\n");
        }
    } else if (VAR_8->header->type == VAR_2) {
        VAR_8->log = VAR_7->log = FUNC_6(VAR_7, VAR_5->log, "!ad");
    }

    struct mp_filter *VAR_11 = FUNC_3(VAR_7, VAR_8->header);
    if (!VAR_11)
        goto error;
    VAR_8->demux = VAR_11->pins[0];

    FUNC_7(VAR_7);

    return VAR_9;
error:
    FUNC_8(VAR_7);
    return ((void*)0);
}
