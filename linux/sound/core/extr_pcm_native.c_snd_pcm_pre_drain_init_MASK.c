
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_pcm_substream* trigger_master; TYPE_1__* status; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;




__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 switch (VAR_3->status->state) {
 case 129:
 case 130:
 case 128:
  return -VAR_0;
 }
 VAR_3->trigger_master = VAR_1;
 return 0;
}
