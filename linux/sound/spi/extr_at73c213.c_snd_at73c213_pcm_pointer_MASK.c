
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; scalar_t__ dma_addr; } ;
struct snd_at73c213 {TYPE_1__* ssc; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_2__ {int regs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_pcm_runtime*,unsigned long) ;
 struct snd_at73c213* FUNC_1 (struct snd_pcm_substream*) ;
 unsigned long FUNC_2 (int ,int ) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_at73c213 *VAR_2 = FUNC_1(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 snd_pcm_uframes_t VAR_4;
 unsigned long VAR_5;

 VAR_5 = FUNC_2(VAR_2->ssc->regs, VAR_0)
  - (unsigned long)VAR_3->dma_addr;

 VAR_4 = FUNC_0(VAR_3, VAR_5);
 if (VAR_4 >= VAR_3->buffer_size)
  VAR_4 -= VAR_3->buffer_size;

 return VAR_4;
}
