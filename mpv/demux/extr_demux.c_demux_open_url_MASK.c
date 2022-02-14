
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream {int dummy; } ;
struct mpv_global {int dummy; } ;
struct mp_cancel {int dummy; } ;
struct TYPE_2__ {scalar_t__ len; } ;
struct demuxer_params {int stream_flags; int demuxer_failed; struct stream* external_stream; TYPE_1__ init_fragment; int member_0; } ;
struct demuxer {int cancel; int in; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct stream* FUNC_1 (struct mpv_global*,struct mp_cancel*,TYPE_1__,struct stream*) ;
 struct demuxer* FUNC_2 (struct stream*,struct mp_cancel*,struct demuxer_params*,struct mpv_global*) ;
 int FUNC_3 (struct stream*) ;
 struct mp_cancel* FUNC_4 (int *) ;
 int FUNC_5 (struct mp_cancel*,struct mp_cancel*) ;
 struct stream* FUNC_6 (char const*,int,struct mp_cancel*,struct mpv_global*) ;
 int FUNC_7 (struct mp_cancel*) ;
 int FUNC_8 (int ,struct mp_cancel*) ;

struct demuxer *FUNC_9(const char *VAR_1,
                               struct demuxer_params *VAR_2,
                               struct mp_cancel *VAR_3,
                               struct mpv_global *VAR_4)
{
    struct demuxer_params VAR_5 = {0};
    if (!VAR_2)
        VAR_2 = &VAR_5;
    struct mp_cancel *VAR_6 = FUNC_4(((void*)0));
    if (VAR_3)
        FUNC_5(VAR_6, VAR_3);
    struct stream *VAR_7 = VAR_2->external_stream;
    if (!VAR_7) {
        VAR_7 = FUNC_6(VAR_1, VAR_0 | VAR_2->stream_flags,
                          VAR_6, VAR_4);
        if (VAR_7 && VAR_2->init_fragment.len) {
            VAR_7 = FUNC_1(VAR_4, VAR_6,
                                             VAR_2->init_fragment, VAR_7);
        }
    }
    if (!VAR_7) {
        FUNC_7(VAR_6);
        return ((void*)0);
    }
    struct demuxer *VAR_8 = FUNC_2(VAR_7, VAR_6, VAR_2, VAR_4);
    if (VAR_8) {
        FUNC_8(VAR_8->in, VAR_6);
        FUNC_0(VAR_8->cancel);
    } else {
        VAR_2->demuxer_failed = 1;
        if (!VAR_2->external_stream)
            FUNC_3(VAR_7);
        FUNC_7(VAR_6);
    }
    return VAR_8;
}
