
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci_pcm {int output_rear; scalar_t__ swap_rear; scalar_t__ output_front; } ;
struct snd_ymfpci {int reg_lock; int rear_opened; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ymfpci_pcm* private_data; } ;


 struct snd_ymfpci* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_ymfpci*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct snd_ymfpci *VAR_1 = FUNC_0(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_ymfpci_pcm *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_1(VAR_0)) < 0)
  return VAR_4;
 VAR_3 = VAR_2->private_data;
 VAR_3->output_front = 0;
 VAR_3->output_rear = 1;
 VAR_3->swap_rear = 0;
 FUNC_2(&VAR_1->reg_lock);
 FUNC_4(VAR_1);
 VAR_1->rear_opened++;
 FUNC_3(&VAR_1->reg_lock);
 return 0;
}
