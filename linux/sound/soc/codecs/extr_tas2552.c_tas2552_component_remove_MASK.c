
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas2552_data {int enable_gpio; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct tas2552_data* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_0)
{
 struct tas2552_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_0->dev);

 FUNC_0(VAR_1->enable_gpio, 0);
}
