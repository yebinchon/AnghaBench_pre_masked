
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct bcm2835_i2s_dev {int * dma_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct bcm2835_i2s_dev* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2)
{
 struct bcm2835_i2s_dev *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_2,
   &VAR_3->dma_data[VAR_1],
   &VAR_3->dma_data[VAR_0]);

 return 0;
}
