
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {double delay_before_pause; int alsa; scalar_t__ paused; } ;
struct ao {scalar_t__ samplerate; struct priv* priv; } ;
typedef double snd_pcm_sframes_t ;


 int VAR_0 ;
 int FUNC_0 (struct ao*) ;
 int FUNC_1 (int ,double*) ;
 int FUNC_2 (int ,double) ;

__attribute__((used)) static double FUNC_3(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    snd_pcm_sframes_t VAR_3;

    if (VAR_2->paused)
        return VAR_2->delay_before_pause;

    int VAR_4 = FUNC_1(VAR_2->alsa, &VAR_3);
    if (VAR_4 < 0) {
        if (VAR_4 == -VAR_0)
            FUNC_0(VAR_1);
        return 0;
    }

    if (VAR_3 < 0) {

        FUNC_2(VAR_2->alsa, -VAR_3);
        VAR_3 = 0;
    }
    return VAR_3 / (double)VAR_1->samplerate;
}
