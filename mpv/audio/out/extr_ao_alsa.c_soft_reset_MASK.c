
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int alsa; } ;
struct ao {struct priv* priv; } ;
typedef int snd_pcm_sframes_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ao *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    snd_pcm_sframes_t VAR_3 = FUNC_2(VAR_2->alsa);
    if (VAR_3 > 0 && FUNC_3(VAR_2->alsa) == VAR_0) {
        VAR_3 = FUNC_1(VAR_2->alsa, VAR_3);
        if (VAR_3 < 0) {
            int VAR_4 = VAR_3;
            FUNC_0("pcm rewind error");
        }
    }
}
