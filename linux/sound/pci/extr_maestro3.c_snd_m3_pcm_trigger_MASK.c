
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_m3 {int reg_lock; } ;
struct m3_dma {int running; } ;
struct TYPE_2__ {struct m3_dma* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_m3*,struct m3_dma*,struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_m3*,struct m3_dma*,struct snd_pcm_substream*) ;
 struct snd_m3* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct snd_pcm_substream *VAR_3, int VAR_4)
{
 struct snd_m3 *VAR_5 = FUNC_3(VAR_3);
 struct m3_dma *VAR_6 = VAR_3->runtime->private_data;
 int VAR_7 = -VAR_1;

 if (FUNC_0(!VAR_6))
  return -VAR_2;

 FUNC_4(&VAR_5->reg_lock);
 switch (VAR_4) {
 case 130:
 case 131:
  if (VAR_6->running)
   VAR_7 = -VAR_0;
  else {
   VAR_6->running = 1;
   VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_3);
  }
  break;
 case 129:
 case 128:
  if (! VAR_6->running)
   VAR_7 = 0;
  else {
   VAR_6->running = 0;
   VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_3);
  }
  break;
 }
 FUNC_5(&VAR_5->reg_lock);
 return VAR_7;
}
