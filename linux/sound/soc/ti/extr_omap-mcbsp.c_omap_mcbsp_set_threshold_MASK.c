
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct omap_mcbsp {TYPE_1__* pdata; } ;
struct TYPE_2__ {scalar_t__ buffer_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct omap_mcbsp*,int) ;
 int FUNC_1 (struct omap_mcbsp*,int) ;
 struct omap_mcbsp* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_1,
  unsigned int VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->cpu_dai;
 struct omap_mcbsp *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;


 if (VAR_5->pdata->buffer_size == 0)
  return;







 if (VAR_2)
  VAR_6 = VAR_2;
 else
  VAR_6 = 1;


 if (VAR_1->stream == VAR_0)
  FUNC_1(VAR_5, VAR_6);
 else
  FUNC_0(VAR_5, VAR_6);
}
