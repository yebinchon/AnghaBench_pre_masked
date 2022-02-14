
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct axg_fifo {int dummy; } ;


 struct snd_soc_dai* FUNC_0 (struct snd_pcm_substream*) ;
 struct axg_fifo* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static struct axg_fifo *FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_soc_dai *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1);
}
