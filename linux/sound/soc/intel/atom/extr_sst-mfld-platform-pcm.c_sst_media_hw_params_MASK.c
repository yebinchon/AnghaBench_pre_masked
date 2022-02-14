
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int dma_area; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
    struct snd_pcm_hw_params *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 int VAR_3;

 VAR_3 =
  FUNC_2(VAR_0,
    FUNC_1(VAR_1));
 if (VAR_3)
  return VAR_3;
 FUNC_0(VAR_0->runtime->dma_area, 0, FUNC_1(VAR_1));
 return 0;
}
