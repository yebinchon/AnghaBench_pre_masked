
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int paused; scalar_t__ prepause_frames; int alsa; scalar_t__ can_pause; } ;
struct ao {scalar_t__ stream_silence; struct priv* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ao*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct ao*,scalar_t__) ;
 int FUNC_3 (struct ao*) ;
 int FUNC_4 (struct ao*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    int VAR_3;

    if (!VAR_2->paused)
        return;

    FUNC_4(VAR_1);

    if (VAR_1->stream_silence) {
        VAR_2->paused = 0;
        FUNC_3(VAR_1);
    } else if (VAR_2->can_pause) {
        if (FUNC_7(VAR_2->alsa) == VAR_0) {
            VAR_3 = FUNC_5(VAR_2->alsa, 0);
            FUNC_0("pcm resume error");
        }
    } else {
        FUNC_1(VAR_1, "resume not supported by hardware\n");
        VAR_3 = FUNC_6(VAR_2->alsa);
        FUNC_0("pcm prepare error");
    }

    if (VAR_2->prepause_frames)
        FUNC_2(VAR_1, VAR_2->prepause_frames);

alsa_error: ;
    VAR_2->paused = 0;
}
