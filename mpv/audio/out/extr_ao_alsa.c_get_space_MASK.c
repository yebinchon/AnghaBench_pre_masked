
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int buffersize; int outburst; int alsa; scalar_t__ paused; } ;
struct ao {struct priv* priv; } ;
typedef int snd_pcm_sframes_t ;


 int VAR_0 ;
 int FUNC_0 (struct ao*,char*,int,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ao*,int) ;
 int FUNC_2 (struct ao*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ao *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;



    if (VAR_3->paused || FUNC_4(VAR_3->alsa) == VAR_1)
        return VAR_3->buffersize;

    snd_pcm_sframes_t VAR_4 = FUNC_3(VAR_3->alsa);
    if (VAR_4 < 0 && VAR_4 != -VAR_0) {
        FUNC_0(VAR_2, "Error received from snd_pcm_avail "
                   "(%ld, %s with ALSA state %s)!\n",
               VAR_4, FUNC_6(VAR_4),
               FUNC_5(FUNC_4(VAR_3->alsa)));



        FUNC_1(VAR_2, VAR_4);
        goto alsa_error;
    }
    if (VAR_4 == -VAR_0)
        FUNC_2(VAR_2);

    if (VAR_4 > VAR_3->buffersize || VAR_4 < 0)
        VAR_4 = VAR_3->buffersize;
    return VAR_4 / VAR_3->outburst * VAR_3->outburst;

alsa_error:
    return 0;
}
