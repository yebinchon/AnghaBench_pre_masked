
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tegra_alc5632 {int gpio_hp_det; int util_data; } ;
struct snd_soc_card {TYPE_4__* dev; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {TYPE_3__* codecs; TYPE_2__* platforms; TYPE_1__* cpus; } ;
struct TYPE_10__ {int * of_node; } ;
struct TYPE_9__ {int * of_node; } ;
struct TYPE_8__ {int * of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,char*,...) ;
 struct tegra_alc5632* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (struct device_node*,char*,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (struct device_node*,char*,int ) ;
 int FUNC_5 (struct snd_soc_card*,struct tegra_alc5632*) ;
 int FUNC_6 (struct snd_soc_card*,char*) ;
 int FUNC_7 (struct snd_soc_card*,char*) ;
 int FUNC_8 (struct snd_soc_card*) ;
 struct snd_soc_card VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_4__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct snd_soc_card *VAR_8 = &VAR_4;
 struct tegra_alc5632 *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(&VAR_6->dev,
   sizeof(struct tegra_alc5632), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_8->dev = &VAR_6->dev;
 FUNC_5(VAR_8, VAR_9);

 VAR_9->gpio_hp_det = FUNC_2(VAR_7, "nvidia,hp-det-gpios", 0);
 if (VAR_9->gpio_hp_det == -VAR_2)
  return -VAR_2;

 VAR_10 = FUNC_7(VAR_8, "nvidia,model");
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_6(VAR_8, "nvidia,audio-routing");
 if (VAR_10)
  goto err;

 VAR_5.codecs->of_node = FUNC_4(
   VAR_6->dev.of_node, "nvidia,audio-codec", 0);

 if (!VAR_5.codecs->of_node) {
  FUNC_0(&VAR_6->dev,
   "Property 'nvidia,audio-codec' missing or invalid\n");
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_5.cpus->of_node = FUNC_4(VAR_7,
   "nvidia,i2s-controller", 0);
 if (!VAR_5.cpus->of_node) {
  FUNC_0(&VAR_6->dev,
   "Property 'nvidia,i2s-controller' missing or invalid\n");
  VAR_10 = -VAR_0;
  goto err_put_codec_of_node;
 }

 VAR_5.platforms->of_node = VAR_5.cpus->of_node;

 VAR_10 = FUNC_10(&VAR_9->util_data, &VAR_6->dev);
 if (VAR_10)
  goto err_put_cpu_of_node;

 VAR_10 = FUNC_8(VAR_8);
 if (VAR_10) {
  FUNC_0(&VAR_6->dev, "snd_soc_register_card failed (%d)\n",
   VAR_10);
  goto err_fini_utils;
 }

 return 0;

err_fini_utils:
 FUNC_9(&VAR_9->util_data);
err_put_cpu_of_node:
 FUNC_3(VAR_5.cpus->of_node);
 VAR_5.cpus->of_node = ((void*)0);
 VAR_5.platforms->of_node = ((void*)0);
err_put_codec_of_node:
 FUNC_3(VAR_5.codecs->of_node);
 VAR_5.codecs->of_node = ((void*)0);
err:
 return VAR_10;
}
