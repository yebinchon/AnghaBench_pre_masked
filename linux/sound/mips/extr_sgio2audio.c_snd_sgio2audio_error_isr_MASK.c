
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sgio2audio_chan {struct snd_pcm_substream* substream; } ;
struct snd_pcm_substream {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct snd_sgio2audio_chan *VAR_3 = VAR_2;
 struct snd_pcm_substream *VAR_4;

 VAR_4 = VAR_3->substream;
 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 return VAR_0;
}
