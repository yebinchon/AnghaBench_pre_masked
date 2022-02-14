
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct cs4281_dma* private_data; } ;
struct cs4281_dma {int dummy; } ;
struct cs4281 {int reg_lock; } ;


 int FUNC_0 (struct cs4281*,struct cs4281_dma*,struct snd_pcm_runtime*,int,int) ;
 struct cs4281* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct cs4281_dma *VAR_2 = VAR_1->private_data;
 struct cs4281 *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(&VAR_3->reg_lock);
 FUNC_0(VAR_3, VAR_2, VAR_1, 1, 1);
 FUNC_3(&VAR_3->reg_lock);
 return 0;
}
