
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai_driver {int dummy; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_component {TYPE_1__* driver; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int non_legacy_dai_naming; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,size_t) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_dai* FUNC_3 (struct snd_soc_component*,struct snd_soc_dai_driver*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1,
     struct snd_soc_dai_driver *VAR_2,
     size_t VAR_3)
{
 struct device *VAR_4 = VAR_1->dev;
 struct snd_soc_dai *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_0(VAR_4, "ASoC: dai register %s #%zu\n", FUNC_1(VAR_4), VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {

  VAR_5 = FUNC_3(VAR_1, VAR_2 + VAR_6, VAR_3 == 1 &&
      !VAR_1->driver->non_legacy_dai_naming);
  if (VAR_5 == ((void*)0)) {
   VAR_7 = -VAR_0;
   goto err;
  }
 }

 return 0;

err:
 FUNC_2(VAR_1);

 return VAR_7;
}
