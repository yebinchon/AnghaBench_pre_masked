
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_korg1212 {size_t cardState; int channels; int playback_pid; int lock; scalar_t__ periodsize; int * playback_substream; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_korg1212*) ;
 int FUNC_2 (struct snd_korg1212*,int ,int ,int ,int) ;
 struct snd_korg1212* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2)
{
        unsigned long VAR_3;
        struct snd_korg1212 *VAR_4 = FUNC_3(VAR_2);

 FUNC_0("K1212_DEBUG: snd_korg1212_playback_close [%s]\n",
      VAR_1[VAR_4->cardState]);

 FUNC_2(VAR_4, 0, VAR_0, 0, VAR_4->channels * 2);

        FUNC_4(&VAR_4->lock, VAR_3);

 VAR_4->playback_pid = -1;
        VAR_4->playback_substream = ((void*)0);
        VAR_4->periodsize = 0;

        FUNC_5(&VAR_4->lock, VAR_3);

 FUNC_1(VAR_4);
        return 0;
}
