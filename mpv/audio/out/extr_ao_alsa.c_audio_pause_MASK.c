
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int paused; int delay_before_pause; int prepause_frames; int alsa; scalar_t__ can_pause; } ;
struct ao {int samplerate; scalar_t__ stream_silence; struct priv* priv; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ao*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ao*) ;

__attribute__((used)) static void FUNC_6(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    int VAR_3;

    if (VAR_2->paused)
        return;

    VAR_2->delay_before_pause = FUNC_1(VAR_1);
    VAR_2->prepause_frames = VAR_2->delay_before_pause * VAR_1->samplerate;

    if (VAR_1->stream_silence) {
        FUNC_5(VAR_1);
    } else if (VAR_2->can_pause) {
        if (FUNC_4(VAR_2->alsa) == VAR_0) {
            VAR_3 = FUNC_3(VAR_2->alsa, 1);
            FUNC_0("pcm pause error");
            VAR_2->prepause_frames = 0;
        }
    } else {
        VAR_3 = FUNC_2(VAR_2->alsa);
        FUNC_0("pcm drop error");
    }

    VAR_2->paused = 1;

alsa_error: ;
}
