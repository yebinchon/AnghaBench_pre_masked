
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int dma_bytes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
          struct snd_pcm_hw_params *VAR_2)
{
 if (VAR_0) {

  VAR_1->runtime->dma_bytes = FUNC_0(VAR_2);
  return 0;
 }
 return FUNC_1(VAR_1,
     FUNC_0(VAR_2));
}
