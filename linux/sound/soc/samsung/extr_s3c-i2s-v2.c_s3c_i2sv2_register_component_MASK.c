
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_ops {scalar_t__ delay; int set_sysclk; int set_clkdiv; int set_fmt; scalar_t__ hw_params; int trigger; } ;
struct snd_soc_dai_driver {int resume; int suspend; scalar_t__ ops; } ;
struct snd_soc_component_driver {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct snd_soc_component_driver const*,struct snd_soc_dai_driver*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

int FUNC_1(struct device *VAR_8, int VAR_9,
      const struct snd_soc_component_driver *VAR_10,
      struct snd_soc_dai_driver *VAR_11)
{
 struct snd_soc_dai_ops *VAR_12 = (struct snd_soc_dai_ops *)VAR_11->ops;

 VAR_12->trigger = VAR_5;
 if (!VAR_12->hw_params)
  VAR_12->hw_params = VAR_6;
 VAR_12->set_fmt = VAR_3;
 VAR_12->set_clkdiv = VAR_2;
 VAR_12->set_sysclk = VAR_7;


 if (!VAR_12->delay)
  VAR_12->delay = VAR_0;

 VAR_11->suspend = VAR_4;
 VAR_11->resume = VAR_1;

 return FUNC_0(VAR_8, VAR_10, VAR_11, 1);
}
