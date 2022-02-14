
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct sirf_usp {int capture_dma_data; int playback_dma_data; } ;


 struct sirf_usp* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0)
{
 struct sirf_usp *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, &VAR_1->playback_dma_data,
   &VAR_1->capture_dma_data);
 return 0;
}
