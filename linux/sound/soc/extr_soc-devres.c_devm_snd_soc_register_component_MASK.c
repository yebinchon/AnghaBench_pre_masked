
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_driver {int dummy; } ;
struct snd_soc_component_driver {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct device**) ;
 struct device** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct device**) ;
 int FUNC_3 (struct device*,struct snd_soc_component_driver const*,struct snd_soc_dai_driver*,int) ;

int FUNC_4(struct device *VAR_3,
    const struct snd_soc_component_driver *VAR_4,
    struct snd_soc_dai_driver *VAR_5, int VAR_6)
{
 struct device **VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_2, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 == 0) {
  *VAR_7 = VAR_3;
  FUNC_0(VAR_3, VAR_7);
 } else {
  FUNC_2(VAR_7);
 }

 return VAR_8;
}
