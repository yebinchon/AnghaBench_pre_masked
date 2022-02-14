
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mp_decoder {int control; struct mp_filter* f; } ;
struct TYPE_6__ {struct mp_decoder public; int avctx; int vo; int hwdec_devs; int dr_lock; void* dr_pool; void* hwdec_swpool; int decoder; struct mp_codec_params* codec; TYPE_4__* opts_cache; int opts; int log; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct mp_stream_info {int dr_vo; int hwdec_devs; } ;
struct mp_filter {int global; int log; TYPE_1__* priv; } ;
struct mp_codec_params {int dummy; } ;
struct TYPE_7__ {int opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_1__*,int ,int *) ;
 int FUNC_1 (struct mp_filter*,int ,char*) ;
 struct mp_filter* FUNC_2 (struct mp_filter*,int *) ;
 struct mp_stream_info* FUNC_3 (struct mp_filter*) ;
 void* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct mp_filter*,int ,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct mp_filter*) ;
 int FUNC_8 (struct mp_filter*) ;
 int FUNC_9 (TYPE_1__*,char const*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct mp_decoder *FUNC_10(struct mp_filter *VAR_5,
                                 struct mp_codec_params *VAR_6,
                                 const char *VAR_7)
{
    struct mp_filter *VAR_8 = FUNC_2(VAR_5, &VAR_4);
    if (!VAR_8)
        return ((void*)0);

    FUNC_1(VAR_8, VAR_0, "in");
    FUNC_1(VAR_8, VAR_1, "out");

    VAR_8->log = FUNC_5(VAR_8, VAR_5->log, ((void*)0));

    vd_ffmpeg_ctx *VAR_9 = VAR_8->priv;
    VAR_9->log = VAR_8->log;
    VAR_9->opts_cache = FUNC_0(VAR_9, VAR_8->global, &VAR_3);
    VAR_9->opts = VAR_9->opts_cache->opts;
    VAR_9->codec = VAR_6;
    VAR_9->decoder = FUNC_9(VAR_9, VAR_7);
    VAR_9->hwdec_swpool = FUNC_4(VAR_9);
    VAR_9->dr_pool = FUNC_4(VAR_9);

    VAR_9->public.f = VAR_8;
    VAR_9->public.control = VAR_2;

    FUNC_6(&VAR_9->dr_lock, ((void*)0));


    struct mp_stream_info *VAR_10 = FUNC_3(VAR_8);
    if (VAR_10) {
        VAR_9->hwdec_devs = VAR_10->hwdec_devs;
        VAR_9->vo = VAR_10->dr_vo;
    }

    FUNC_7(VAR_8);

    if (!VAR_9->avctx) {
        FUNC_8(VAR_8);
        return ((void*)0);
    }
    return &VAR_9->public;
}
