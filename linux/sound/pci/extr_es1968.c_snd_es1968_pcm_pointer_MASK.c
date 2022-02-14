
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct esschan {unsigned int wav_shift; unsigned int dma_size; } ;
struct es1968 {int dummy; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {struct esschan* private_data; } ;


 int FUNC_0 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_1 (struct es1968*,struct esschan*) ;
 struct es1968* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct es1968 *VAR_1 = FUNC_2(VAR_0);
 struct esschan *VAR_2 = VAR_0->runtime->private_data;
 unsigned int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2) << VAR_2->wav_shift;

 return FUNC_0(VAR_0->runtime, VAR_3 % VAR_2->dma_size);
}
