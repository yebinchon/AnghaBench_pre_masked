
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_1__* status; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 int VAR_3;

 FUNC_1(VAR_1);
 switch (VAR_2->status->state) {
 case 128:
  VAR_3 = 0;
  break;
 case 129:
  FUNC_0(VAR_1);
  VAR_3 = 0;
  break;
 default:
  VAR_3 = -VAR_0;
 }
 FUNC_2(VAR_1);
 return VAR_3;
}
