
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97_reset_cfg {int dummy; } ;
struct snd_ac97_bus_ops {int reset; int warm_reset; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 struct snd_ac97_reset_cfg VAR_0 ;
 int FUNC_0 (struct device*,struct snd_ac97_reset_cfg*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct snd_ac97_bus_ops*) ;

int FUNC_2(struct snd_ac97_bus_ops *VAR_3,
  struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct snd_ac97_reset_cfg VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_3->warm_reset = VAR_2;
 VAR_3->reset = VAR_1;

 VAR_0 = VAR_6;
 return 0;
}
