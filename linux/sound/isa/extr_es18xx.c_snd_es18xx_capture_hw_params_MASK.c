
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_es18xx {int caps; int dma1_shift; scalar_t__ playback_a_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct snd_es18xx* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
     struct snd_pcm_hw_params *VAR_4)
{
 struct snd_es18xx *VAR_5 = FUNC_6(VAR_3);
 int VAR_6, VAR_7;

 VAR_6 = 0;
 if ((VAR_5->caps & VAR_1) &&
     VAR_5->playback_a_substream &&
     FUNC_2(VAR_4) != 1) {
  FUNC_0(VAR_4, VAR_2);
  return -VAR_0;
 }
 if (FUNC_2(VAR_4) == 2)
  VAR_6++;
 if (FUNC_4(FUNC_3(VAR_4)) == 16)
  VAR_6++;
 VAR_5->dma1_shift = VAR_6;
 if ((VAR_7 = FUNC_5(VAR_3, FUNC_1(VAR_4))) < 0)
  return VAR_7;
 return 0;
}
