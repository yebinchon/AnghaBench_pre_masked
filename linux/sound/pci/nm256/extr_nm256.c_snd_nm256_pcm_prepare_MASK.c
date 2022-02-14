
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int periods; int period_size; int buffer_size; struct nm256_stream* private_data; } ;
struct nm256_stream {scalar_t__ running; scalar_t__ cur_period; int periods; void* period_size; void* dma_size; } ;
struct nm256 {int reg_lock; } ;


 int VAR_0 ;
 void* FUNC_0 (struct snd_pcm_runtime*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct nm256*,struct nm256_stream*,struct snd_pcm_substream*) ;
 struct nm256* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct nm256 *VAR_2 = FUNC_3(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct nm256_stream *VAR_4 = VAR_3->private_data;

 if (FUNC_1(!VAR_4))
  return -VAR_0;
 VAR_4->dma_size = FUNC_0(VAR_3, VAR_1->runtime->buffer_size);
 VAR_4->period_size = FUNC_0(VAR_3, VAR_1->runtime->period_size);
 VAR_4->periods = VAR_1->runtime->periods;
 VAR_4->cur_period = 0;

 FUNC_4(&VAR_2->reg_lock);
 VAR_4->running = 0;
 FUNC_2(VAR_2, VAR_4, VAR_1);
 FUNC_5(&VAR_2->reg_lock);

 return 0;
}
