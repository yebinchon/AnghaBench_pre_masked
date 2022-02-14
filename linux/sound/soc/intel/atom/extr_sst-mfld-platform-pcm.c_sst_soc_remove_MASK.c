
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_data {int * soc_card; } ;
struct snd_soc_component {int dev; } ;


 struct sst_data* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct snd_soc_component *VAR_0)
{
 struct sst_data *VAR_1 = FUNC_0(VAR_0->dev);

 VAR_1->soc_card = ((void*)0);
}
