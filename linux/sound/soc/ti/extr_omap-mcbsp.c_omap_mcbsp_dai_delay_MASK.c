
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct omap_mcbsp {TYPE_2__* pdata; } ;
typedef int snd_pcm_sframes_t ;
struct TYPE_4__ {scalar_t__ buffer_size; } ;
struct TYPE_3__ {int channels; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct omap_mcbsp*) ;
 int FUNC_1 (struct omap_mcbsp*) ;
 struct omap_mcbsp* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_3(
   struct snd_pcm_substream *VAR_1,
   struct snd_soc_dai *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_soc_dai *VAR_4 = VAR_3->cpu_dai;
 struct omap_mcbsp *VAR_5 = FUNC_2(VAR_4);
 u16 VAR_6;
 snd_pcm_sframes_t VAR_7;


 if (VAR_5->pdata->buffer_size == 0)
  return 0;

 if (VAR_1->stream == VAR_0)
  VAR_6 = FUNC_1(VAR_5);
 else
  VAR_6 = FUNC_0(VAR_5);






 VAR_7 = VAR_6 / VAR_1->runtime->channels;

 return VAR_7;
}
