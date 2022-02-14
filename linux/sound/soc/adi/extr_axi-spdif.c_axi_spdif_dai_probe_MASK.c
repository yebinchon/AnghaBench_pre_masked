
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct axi_spdif {int dma_data; } ;


 struct axi_spdif* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0)
{
 struct axi_spdif *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, &VAR_1->dma_data, ((void*)0));

 return 0;
}
