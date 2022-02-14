
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track {scalar_t__ d_sub; TYPE_1__* stream; int demuxer; } ;
struct mp_codec_params {int fps; } ;
struct MPContext {struct track*** current_track; int global; } ;
struct TYPE_2__ {struct mp_codec_params* codec; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (scalar_t__,int ,double*) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static bool FUNC_4(struct MPContext *VAR_2, struct track *VAR_3)
{
    FUNC_0(!VAR_3->d_sub);

    if (!VAR_3->demuxer || !VAR_3->stream)
        return 0;

    VAR_3->d_sub = FUNC_3(VAR_2->global, VAR_3->stream,
                              FUNC_1(VAR_2));
    if (!VAR_3->d_sub)
        return 0;

    struct track *VAR_4 = VAR_2->current_track[0][VAR_1];
    struct mp_codec_params *VAR_5 =
        VAR_4 && VAR_4->stream ? VAR_4->stream->codec : ((void*)0);
    double VAR_6 = VAR_5 ? VAR_5->fps : 25;
    FUNC_2(VAR_3->d_sub, VAR_0, &VAR_6);

    return 1;
}
