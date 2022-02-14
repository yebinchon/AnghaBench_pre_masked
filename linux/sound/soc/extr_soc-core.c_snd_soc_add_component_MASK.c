
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_driver {int capture; int playback; } ;
struct snd_soc_component_driver {scalar_t__ endianness; } ;
struct snd_soc_component {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,struct snd_soc_component_driver const*,struct device*) ;
 int FUNC_5 (struct snd_soc_component*,struct snd_soc_dai_driver*,int) ;
 int FUNC_6 () ;

int FUNC_7(struct device *VAR_0,
   struct snd_soc_component *VAR_1,
   const struct snd_soc_component_driver *VAR_2,
   struct snd_soc_dai_driver *VAR_3,
   int VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_0);
 if (VAR_5)
  goto err_free;

 if (VAR_2->endianness) {
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   FUNC_0(&VAR_3[VAR_6].playback);
   FUNC_0(&VAR_3[VAR_6].capture);
  }
 }

 VAR_5 = FUNC_5(VAR_1, VAR_3, VAR_4);
 if (VAR_5 < 0) {
  FUNC_1(VAR_0, "ASoC: Failed to register DAIs: %d\n", VAR_5);
  goto err_cleanup;
 }

 FUNC_2(VAR_1);
 FUNC_6();

 return 0;

err_cleanup:
 FUNC_3(VAR_1);
err_free:
 return VAR_5;
}
