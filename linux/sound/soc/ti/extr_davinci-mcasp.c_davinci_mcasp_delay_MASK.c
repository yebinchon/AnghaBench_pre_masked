
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct davinci_mcasp {int dummy; } ;
typedef int snd_pcm_sframes_t ;
struct TYPE_2__ {int channels; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct davinci_mcasp*) ;
 int FUNC_1 (struct davinci_mcasp*) ;
 struct davinci_mcasp* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_3(
   struct snd_pcm_substream *VAR_1,
   struct snd_soc_dai *VAR_2)
{
 struct davinci_mcasp *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4;

 if (VAR_1->stream == VAR_0)
  VAR_4 = FUNC_1(VAR_3);
 else
  VAR_4 = FUNC_0(VAR_3);






 return VAR_4 / VAR_1->runtime->channels;
}
