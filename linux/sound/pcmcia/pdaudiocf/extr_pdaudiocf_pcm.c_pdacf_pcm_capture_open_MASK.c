
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pdacf {int chip_status; struct snd_pcm_substream* pcm_substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_pdacf* private_data; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_pdacf* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 struct snd_pdacf *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->chip_status & VAR_1)
  return -VAR_0;

 VAR_4->hw = VAR_2;
 VAR_4->private_data = VAR_5;
 VAR_5->pcm_substream = VAR_3;

 return 0;
}
