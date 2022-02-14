
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1,
      unsigned int VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 int VAR_4;

 if (VAR_3->cpu_dai->id != VAR_0)
  VAR_4 = FUNC_0(VAR_2);
 else
  VAR_4 = (VAR_2 == 16000 ? 1 : 0);

 return VAR_4;
}
