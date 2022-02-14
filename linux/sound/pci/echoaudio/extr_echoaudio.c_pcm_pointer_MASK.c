
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {size_t buffer_size; struct audiopipe* private_data; } ;
struct audiopipe {size_t last_counter; int position; int * dma_counter; } ;
typedef size_t snd_pcm_uframes_t ;


 size_t FUNC_0 (struct snd_pcm_runtime*,int ) ;
 scalar_t__ FUNC_1 (struct snd_pcm_runtime*,size_t) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct audiopipe *VAR_2 = VAR_1->private_data;
 size_t VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_2(*VAR_2->dma_counter);
 VAR_2->position += VAR_3 - VAR_2->last_counter;
 VAR_2->last_counter = VAR_3;
 VAR_4 = VAR_0->runtime->buffer_size;
 VAR_5 = FUNC_0(VAR_0->runtime, VAR_2->position);

 while (VAR_5 >= VAR_4) {
  VAR_2->position -= FUNC_1(VAR_0->runtime, VAR_4);
  VAR_5 -= VAR_4;
 }
 return VAR_5;
}
