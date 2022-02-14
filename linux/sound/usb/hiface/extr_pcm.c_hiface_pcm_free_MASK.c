
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {struct pcm_runtime* private_data; } ;
struct pcm_runtime {int chip; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm *VAR_0)
{
 struct pcm_runtime *VAR_1 = VAR_0->private_data;

 if (VAR_1)
  FUNC_0(VAR_1->chip);
}
