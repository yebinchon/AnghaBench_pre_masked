
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct idma_ctrl {int state; } ;
struct TYPE_2__ {struct idma_ctrl* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, int VAR_2)
{
 struct snd_pcm_substream *VAR_3 = VAR_1;
 struct idma_ctrl *VAR_4 = VAR_3->runtime->private_data;

 if (VAR_4 && (VAR_4->state & VAR_0))
  FUNC_0(VAR_3);
}
