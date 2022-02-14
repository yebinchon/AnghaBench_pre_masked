
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; struct cs4281_dma* private_data; } ;
struct cs4281_dma {int regDCC; } ;
struct cs4281 {int dummy; } ;
typedef scalar_t__ snd_pcm_uframes_t ;


 scalar_t__ FUNC_0 (struct cs4281*,int ) ;
 struct cs4281* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct cs4281_dma *VAR_2 = VAR_1->private_data;
 struct cs4281 *VAR_3 = FUNC_1(VAR_0);







 return VAR_1->buffer_size -
        FUNC_0(VAR_3, VAR_2->regDCC) - 1;
}
