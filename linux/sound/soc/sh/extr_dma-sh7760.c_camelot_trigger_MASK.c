
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct camelot_pcm {int dummy; } ;
struct TYPE_2__ {size_t id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 struct camelot_pcm* VAR_2 ;
 int FUNC_0 (struct camelot_pcm*) ;
 int FUNC_1 (struct camelot_pcm*) ;
 int FUNC_2 (struct camelot_pcm*) ;
 int FUNC_3 (struct camelot_pcm*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3, int VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 struct camelot_pcm *VAR_6 = &VAR_2[VAR_5->cpu_dai->id];
 int VAR_7 = VAR_3->stream == VAR_1 ? 0:1;

 switch (VAR_4) {
 case 129:
  if (VAR_7)
   FUNC_2(VAR_6);
  else
   FUNC_0(VAR_6);
  break;
 case 128:
  if (VAR_7)
   FUNC_3(VAR_6);
  else
   FUNC_1(VAR_6);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
