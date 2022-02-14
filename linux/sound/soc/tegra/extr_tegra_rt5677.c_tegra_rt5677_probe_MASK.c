
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tegra_rt5677 {int gpio_hp_det; int gpio_mic_present; int gpio_hp_en; int gpio_dmic_clk_en; int util_data; } ;
struct snd_soc_card {TYPE_5__* dev; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {TYPE_3__* codecs; TYPE_2__* platforms; TYPE_1__* cpus; } ;
struct TYPE_11__ {int * of_node; } ;
struct TYPE_10__ {int * of_node; } ;
struct TYPE_9__ {int * of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,char*,...) ;
 int FUNC_1 (TYPE_5__*,int,int ,char*) ;
 struct tegra_rt5677* FUNC_2 (TYPE_5__*,int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 void* FUNC_4 (struct device_node*,char*,int ) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (struct device_node*,char*,int ) ;
 int FUNC_7 (struct snd_soc_card*,struct tegra_rt5677*) ;
 int FUNC_8 (struct snd_soc_card*,char*) ;
 int FUNC_9 (struct snd_soc_card*,char*) ;
 int FUNC_10 (struct snd_soc_card*) ;
 struct snd_soc_card VAR_6 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_5__*) ;
 TYPE_4__ VAR_7 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev.of_node;
 struct snd_soc_card *VAR_10 = &VAR_6;
 struct tegra_rt5677 *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(&VAR_8->dev,
   sizeof(struct tegra_rt5677), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_10->dev = &VAR_8->dev;
 FUNC_7(VAR_10, VAR_11);

 VAR_11->gpio_hp_det = FUNC_4(VAR_9, "nvidia,hp-det-gpios", 0);
 if (VAR_11->gpio_hp_det == -VAR_2)
  return -VAR_2;

 VAR_11->gpio_mic_present = FUNC_4(VAR_9,
   "nvidia,mic-present-gpios", 0);
 if (VAR_11->gpio_mic_present == -VAR_2)
  return -VAR_2;

 VAR_11->gpio_hp_en = FUNC_4(VAR_9, "nvidia,hp-en-gpios", 0);
 if (VAR_11->gpio_hp_en == -VAR_2)
  return -VAR_2;
 if (FUNC_3(VAR_11->gpio_hp_en)) {
  VAR_12 = FUNC_1(&VAR_8->dev, VAR_11->gpio_hp_en,
    VAR_5, "hp_en");
  if (VAR_12) {
   FUNC_0(VAR_10->dev, "cannot get hp_en gpio\n");
   return VAR_12;
  }
 }

 VAR_11->gpio_dmic_clk_en = FUNC_4(VAR_9,
  "nvidia,dmic-clk-en-gpios", 0);
 if (VAR_11->gpio_dmic_clk_en == -VAR_2)
  return -VAR_2;
 if (FUNC_3(VAR_11->gpio_dmic_clk_en)) {
  VAR_12 = FUNC_1(&VAR_8->dev,
    VAR_11->gpio_dmic_clk_en,
    VAR_4, "dmic_clk_en");
  if (VAR_12) {
   FUNC_0(VAR_10->dev, "cannot get dmic_clk_en gpio\n");
   return VAR_12;
  }
 }

 VAR_12 = FUNC_9(VAR_10, "nvidia,model");
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_8(VAR_10, "nvidia,audio-routing");
 if (VAR_12)
  goto err;

 VAR_7.codecs->of_node = FUNC_6(VAR_9,
   "nvidia,audio-codec", 0);
 if (!VAR_7.codecs->of_node) {
  FUNC_0(&VAR_8->dev,
   "Property 'nvidia,audio-codec' missing or invalid\n");
  VAR_12 = -VAR_0;
  goto err;
 }

 VAR_7.cpus->of_node = FUNC_6(VAR_9,
   "nvidia,i2s-controller", 0);
 if (!VAR_7.cpus->of_node) {
  FUNC_0(&VAR_8->dev,
   "Property 'nvidia,i2s-controller' missing or invalid\n");
  VAR_12 = -VAR_0;
  goto err_put_codec_of_node;
 }
 VAR_7.platforms->of_node = VAR_7.cpus->of_node;

 VAR_12 = FUNC_12(&VAR_11->util_data, &VAR_8->dev);
 if (VAR_12)
  goto err_put_cpu_of_node;

 VAR_12 = FUNC_10(VAR_10);
 if (VAR_12) {
  FUNC_0(&VAR_8->dev, "snd_soc_register_card failed (%d)\n",
   VAR_12);
  goto err_fini_utils;
 }

 return 0;

err_fini_utils:
 FUNC_11(&VAR_11->util_data);
err_put_cpu_of_node:
 FUNC_5(VAR_7.cpus->of_node);
 VAR_7.cpus->of_node = ((void*)0);
 VAR_7.platforms->of_node = ((void*)0);
err_put_codec_of_node:
 FUNC_5(VAR_7.codecs->of_node);
 VAR_7.codecs->of_node = ((void*)0);
err:
 return VAR_12;
}
