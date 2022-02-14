
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct adau {int regmap; int (* switch_mode ) (int ) ;} ;


 int FUNC_0 (int ) ;
 struct adau* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct snd_soc_component *VAR_0)
{
 struct adau *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->switch_mode)
  VAR_1->switch_mode(VAR_0->dev);

 FUNC_0(VAR_1->regmap);

 return 0;
}
