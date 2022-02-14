
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track {struct sh_stream* stream; scalar_t__ dec; scalar_t__ d_sub; scalar_t__ selected; } ;
struct sh_stream {int dummy; } ;
struct mp_recorder_sink {int dummy; } ;
struct MPContext {int num_tracks; int recorder; struct track** tracks; TYPE_1__* opts; int global; int playback_initialized; } ;
struct TYPE_2__ {char* record_file; } ;


 int FUNC_0 (int *,struct sh_stream**,int,struct sh_stream*) ;
 int FUNC_1 (struct mp_recorder_sink*) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (struct MPContext*) ;
 int FUNC_4 (int ,char*,struct sh_stream**,int) ;
 struct mp_recorder_sink* FUNC_5 (int ,struct sh_stream*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct track*,struct mp_recorder_sink*) ;
 int FUNC_8 (struct sh_stream**) ;

void FUNC_9(struct MPContext *VAR_0, bool VAR_1)
{
    if (!VAR_0->playback_initialized)
        return;

    FUNC_2(VAR_0);

    char *VAR_2 = VAR_0->opts->record_file;
    if (!VAR_2 || !VAR_2[0])
        return;

    struct sh_stream **VAR_3 = ((void*)0);
    int VAR_4 = 0;

    for (int VAR_5 = 0; VAR_5 < VAR_0->num_tracks; VAR_5++) {
        struct track *VAR_6 = VAR_0->tracks[VAR_5];
        if (VAR_6->stream && VAR_6->selected && (VAR_6->d_sub || VAR_6->dec))
            FUNC_0(((void*)0), VAR_3, VAR_4, VAR_6->stream);
    }

    VAR_0->recorder = FUNC_4(VAR_0->global, VAR_0->opts->record_file,
                                         VAR_3, VAR_4);

    if (!VAR_0->recorder) {
        FUNC_8(VAR_3);
        FUNC_3(VAR_0);
        return;
    }

    if (!VAR_1)
        FUNC_6(VAR_0->recorder);

    int VAR_7 = 0;
    for (int VAR_8 = 0; VAR_8 < VAR_0->num_tracks; VAR_8++) {
        struct track *VAR_9 = VAR_0->tracks[VAR_8];
        if (VAR_7 >= VAR_4)
            break;

        if (VAR_9->stream == VAR_3[VAR_7]) {
            struct mp_recorder_sink * VAR_10 =
                FUNC_5(VAR_0->recorder, VAR_3[VAR_7]);
            FUNC_1(VAR_10);
            FUNC_7(VAR_9, VAR_10);
            VAR_7++;
        }
    }

    FUNC_8(VAR_3);
}
