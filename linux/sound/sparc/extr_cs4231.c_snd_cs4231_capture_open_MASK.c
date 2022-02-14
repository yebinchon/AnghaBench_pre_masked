
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_cs4231 {scalar_t__ c_periods_sent; struct snd_pcm_substream* capture_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_cs4231*,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_cs4231* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct snd_cs4231 *VAR_3 = FUNC_3(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 int VAR_5;

 VAR_4->hw = VAR_1;

 VAR_5 = FUNC_0(VAR_3, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_3->capture_substream = VAR_2;
 VAR_3->c_periods_sent = 0;
 FUNC_2(VAR_2);
 FUNC_1(VAR_4);

 return 0;
}
