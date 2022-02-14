
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tegra_max98090 {int gpio_hp_det; int gpio_mic_det; int util_data; } ;
struct snd_soc_card {TYPE_5__* dev; } ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_11__ {TYPE_3__* cpus; TYPE_2__* platforms; TYPE_1__* codecs; } ;
struct TYPE_10__ {void* of_node; } ;
struct TYPE_9__ {void* of_node; } ;
struct TYPE_8__ {void* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,char*,...) ;
 struct tegra_max98090* FUNC_1 (TYPE_5__*,int,int ) ;
 void* FUNC_2 (struct device_node*,char*,int ) ;
 void* FUNC_3 (struct device_node*,char*,int ) ;
 int FUNC_4 (struct snd_soc_card*,struct tegra_max98090*) ;
 int FUNC_5 (struct snd_soc_card*,char*) ;
 int FUNC_6 (struct snd_soc_card*,char*) ;
 int FUNC_7 (struct snd_soc_card*) ;
 struct snd_soc_card VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_5__*) ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct snd_soc_card *VAR_8 = &VAR_4;
 struct tegra_max98090 *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(&VAR_6->dev,
   sizeof(struct tegra_max98090), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_8->dev = &VAR_6->dev;
 FUNC_4(VAR_8, VAR_9);

 VAR_9->gpio_hp_det = FUNC_2(VAR_7, "nvidia,hp-det-gpios", 0);
 if (VAR_9->gpio_hp_det == -VAR_2)
  return -VAR_2;

 VAR_9->gpio_mic_det =
   FUNC_2(VAR_7, "nvidia,mic-det-gpios", 0);
 if (VAR_9->gpio_mic_det == -VAR_2)
  return -VAR_2;

 VAR_10 = FUNC_6(VAR_8, "nvidia,model");
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_8, "nvidia,audio-routing");
 if (VAR_10)
  goto err;

 VAR_5.codecs->of_node = FUNC_3(VAR_7,
   "nvidia,audio-codec", 0);
 if (!VAR_5.codecs->of_node) {
  FUNC_0(&VAR_6->dev,
   "Property 'nvidia,audio-codec' missing or invalid\n");
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_5.cpus->of_node = FUNC_3(VAR_7,
   "nvidia,i2s-controller", 0);
 if (!VAR_5.cpus->of_node) {
  FUNC_0(&VAR_6->dev,
   "Property 'nvidia,i2s-controller' missing or invalid\n");
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_5.platforms->of_node = VAR_5.cpus->of_node;

 VAR_10 = FUNC_9(&VAR_9->util_data, &VAR_6->dev);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10) {
  FUNC_0(&VAR_6->dev, "snd_soc_register_card failed (%d)\n",
   VAR_10);
  goto err_fini_utils;
 }

 return 0;

err_fini_utils:
 FUNC_8(&VAR_9->util_data);
err:
 return VAR_10;
}
