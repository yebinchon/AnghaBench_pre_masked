
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct snd_soc_card {TYPE_5__* dev; } ;
struct rk_drvdata {int gpio_hp_det; int gpio_hp_en; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct of_phandle_args {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {TYPE_3__* cpus; TYPE_2__* platforms; TYPE_1__* codecs; } ;
struct TYPE_11__ {void* of_node; } ;
struct TYPE_10__ {void* of_node; } ;
struct TYPE_9__ {int dai_name; void* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,char*,...) ;
 int FUNC_1 (TYPE_5__*,int,int ,char*) ;
 struct rk_drvdata* FUNC_2 (TYPE_5__*,int,int ) ;
 int FUNC_3 (TYPE_5__*,struct snd_soc_card*) ;
 scalar_t__ FUNC_4 (int) ;
 void* FUNC_5 (struct device_node*,char*,int ) ;
 void* FUNC_6 (struct device_node*,char*,int ) ;
 int FUNC_7 (struct device_node*,char*,int ,int ,struct of_phandle_args*) ;
 TYPE_4__ VAR_6 ;
 struct snd_soc_card VAR_7 ;
 int FUNC_8 (struct snd_soc_card*,struct rk_drvdata*) ;
 int FUNC_9 (struct of_phandle_args*,int *) ;
 int FUNC_10 (struct snd_soc_card*,char*) ;
 int FUNC_11 (struct snd_soc_card*,char*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 int VAR_9 = 0;
 struct snd_soc_card *VAR_10 = &VAR_7;
 struct device_node *VAR_11 = VAR_8->dev.of_node;
 struct rk_drvdata *VAR_12;
 struct of_phandle_args VAR_13;

 VAR_12 = FUNC_2(&VAR_8->dev, sizeof(struct rk_drvdata),
          VAR_4);
 if (!VAR_12)
  return -VAR_2;

 VAR_10->dev = &VAR_8->dev;

 VAR_12->gpio_hp_det = FUNC_5(VAR_11,
  "rockchip,hp-det-gpios", 0);
 if (!FUNC_4(VAR_12->gpio_hp_det) && VAR_12->gpio_hp_det != -VAR_1)
  return VAR_12->gpio_hp_det;

 VAR_12->gpio_hp_en = FUNC_5(VAR_11,
  "rockchip,hp-en-gpios", 0);
 if (!FUNC_4(VAR_12->gpio_hp_en) && VAR_12->gpio_hp_en != -VAR_1)
  return VAR_12->gpio_hp_en;

 if (FUNC_4(VAR_12->gpio_hp_en)) {
  VAR_9 = FUNC_1(&VAR_8->dev, VAR_12->gpio_hp_en,
         VAR_5, "hp_en");
  if (VAR_9) {
   FUNC_0(VAR_10->dev, "cannot get hp_en gpio\n");
   return VAR_9;
  }
 }

 VAR_9 = FUNC_11(VAR_10, "rockchip,model");
 if (VAR_9) {
  FUNC_0(VAR_10->dev, "SoC parse card name failed %d\n", VAR_9);
  return VAR_9;
 }

 VAR_6.codecs[0].of_node = FUNC_6(VAR_11,
       "rockchip,audio-codec",
       0);
 if (!VAR_6.codecs[0].of_node) {
  FUNC_0(&VAR_8->dev,
   "Property 'rockchip,audio-codec' missing or invalid\n");
  return -VAR_0;
 }
 VAR_9 = FUNC_7(VAR_11, "rockchip,audio-codec",
            0, 0, &VAR_13);
 if (VAR_9) {
  FUNC_0(&VAR_8->dev,
   "Unable to parse property 'rockchip,audio-codec'\n");
  return VAR_9;
 }

 VAR_9 = FUNC_9(&VAR_13, &VAR_6.codecs[0].dai_name);
 if (VAR_9) {
  FUNC_0(&VAR_8->dev, "Unable to get codec_dai_name\n");
  return VAR_9;
 }

 VAR_6.cpus->of_node = FUNC_6(VAR_11, "rockchip,i2s-controller",
        0);
 if (!VAR_6.cpus->of_node) {
  FUNC_0(&VAR_8->dev,
   "Property 'rockchip,i2s-controller' missing or invalid\n");
  return -VAR_0;
 }

 VAR_6.platforms->of_node = VAR_6.cpus->of_node;

 VAR_9 = FUNC_10(VAR_10, "rockchip,routing");
 if (VAR_9) {
  FUNC_0(&VAR_8->dev,
   "Unable to parse 'rockchip,routing' property\n");
  return VAR_9;
 }

 FUNC_8(VAR_10, VAR_12);

 VAR_9 = FUNC_3(&VAR_8->dev, VAR_10);
 if (VAR_9 == -VAR_3)
  return -VAR_3;
 if (VAR_9) {
  FUNC_0(&VAR_8->dev,
   "Soc register card failed %d\n", VAR_9);
  return VAR_9;
 }

 return VAR_9;
}
