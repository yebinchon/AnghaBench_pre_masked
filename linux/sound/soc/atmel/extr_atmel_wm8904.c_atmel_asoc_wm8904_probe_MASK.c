
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai_link {TYPE_1__* cpus; } ;
struct snd_soc_card {int * dev; } ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;


 struct snd_soc_card VAR_0 ;
 struct snd_soc_dai_link VAR_1 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct snd_soc_card *VAR_3 = &VAR_0;
 struct snd_soc_dai_link *VAR_4 = &VAR_1;
 int VAR_5, VAR_6;

 VAR_3->dev = &VAR_2->dev;
 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6) {
  FUNC_3(&VAR_2->dev, "failed to init dt info\n");
  return VAR_6;
 }

 VAR_5 = FUNC_4((struct device_node *)VAR_4->cpus->of_node, "ssc");
 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 != 0) {
  FUNC_3(&VAR_2->dev, "failed to set SSC %d for audio\n", VAR_5);
  return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6) {
  FUNC_3(&VAR_2->dev, "snd_soc_register_card failed\n");
  goto err_set_audio;
 }

 return 0;

err_set_audio:
 FUNC_1(VAR_5);
 return VAR_6;
}
