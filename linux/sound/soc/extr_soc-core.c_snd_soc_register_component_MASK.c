
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_driver {int dummy; } ;
struct snd_soc_component_driver {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_component* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device*,struct snd_soc_component*,struct snd_soc_component_driver const*,struct snd_soc_dai_driver*,int) ;

int FUNC_2(struct device *VAR_2,
   const struct snd_soc_component_driver *VAR_3,
   struct snd_soc_dai_driver *VAR_4,
   int VAR_5)
{
 struct snd_soc_component *VAR_6;

 VAR_6 = FUNC_0(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_6, VAR_3,
         VAR_4, VAR_5);
}
