
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct omap_mcbsp {int * dma_data; int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 struct omap_mcbsp* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2)
{
 struct omap_mcbsp *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->dev);

 FUNC_2(VAR_2,
      &VAR_3->dma_data[VAR_1],
      &VAR_3->dma_data[VAR_0]);

 return 0;
}
