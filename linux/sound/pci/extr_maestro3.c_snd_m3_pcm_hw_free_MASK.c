
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct m3_dma {scalar_t__ buffer_addr; } ;
struct TYPE_2__ {struct m3_dma* private_data; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct m3_dma *VAR_1;

 if (VAR_0->runtime->private_data == ((void*)0))
  return 0;
 VAR_1 = VAR_0->runtime->private_data;
 FUNC_0(VAR_0);
 VAR_1->buffer_addr = 0;
 return 0;
}
