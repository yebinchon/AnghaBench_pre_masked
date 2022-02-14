
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int paused; int final_chunk_written; int alsa; scalar_t__ delay_before_pause; scalar_t__ prepause_frames; } ;
struct ao {scalar_t__ stream_silence; struct priv* priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ao*) ;

__attribute__((used)) static void FUNC_4(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    int VAR_2;

    VAR_1->paused = 0;
    VAR_1->prepause_frames = 0;
    VAR_1->delay_before_pause = 0;
    VAR_1->final_chunk_written = 0;

    if (VAR_0->stream_silence) {
        FUNC_3(VAR_0);
    } else {
        VAR_2 = FUNC_1(VAR_1->alsa);
        FUNC_0("pcm prepare error");
        VAR_2 = FUNC_2(VAR_1->alsa);
        FUNC_0("pcm prepare error");
    }

alsa_error: ;
}
