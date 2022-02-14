
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {scalar_t__ regmap; } ;


 int FUNC_0 (scalar_t__,unsigned int,unsigned int,unsigned int,int*) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,unsigned int,unsigned int,int*) ;

int FUNC_2(struct snd_soc_component *VAR_0,
 unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 bool VAR_4;
 int VAR_5;

 if (VAR_0->regmap)
  VAR_5 = FUNC_0(VAR_0->regmap, VAR_1,
   VAR_2, VAR_3, &VAR_4);
 else
  VAR_5 = FUNC_1(VAR_0, VAR_1,
   VAR_2, VAR_3, &VAR_4);

 if (VAR_5 < 0)
  return VAR_5;
 return VAR_4;
}
