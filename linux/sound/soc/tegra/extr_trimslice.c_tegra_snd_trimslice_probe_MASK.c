
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tegra_trimslice {int util_data; } ;
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
 int FUNC_0 (TYPE_5__*,char*,...) ;
 struct tegra_trimslice* FUNC_1 (TYPE_5__*,int,int ) ;
 void* FUNC_2 (struct device_node*,char*,int ) ;
 int FUNC_3 (struct snd_soc_card*,struct tegra_trimslice*) ;
 int FUNC_4 (struct snd_soc_card*) ;
 struct snd_soc_card VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_5__*) ;
 TYPE_4__ VAR_4 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 struct snd_soc_card *VAR_7 = &VAR_3;
 struct tegra_trimslice *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(&VAR_5->dev, sizeof(struct tegra_trimslice),
     VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_7->dev = &VAR_5->dev;
 FUNC_3(VAR_7, VAR_8);

 VAR_4.codecs->of_node = FUNC_2(VAR_6,
   "nvidia,audio-codec", 0);
 if (!VAR_4.codecs->of_node) {
  FUNC_0(&VAR_5->dev,
   "Property 'nvidia,audio-codec' missing or invalid\n");
  VAR_9 = -VAR_0;
  goto err;
 }

 VAR_4.cpus->of_node = FUNC_2(VAR_6,
   "nvidia,i2s-controller", 0);
 if (!VAR_4.cpus->of_node) {
  FUNC_0(&VAR_5->dev,
   "Property 'nvidia,i2s-controller' missing or invalid\n");
  VAR_9 = -VAR_0;
  goto err;
 }

 VAR_4.platforms->of_node =
   VAR_4.cpus->of_node;

 VAR_9 = FUNC_6(&VAR_8->util_data, &VAR_5->dev);
 if (VAR_9)
  goto err;

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9) {
  FUNC_0(&VAR_5->dev, "snd_soc_register_card failed (%d)\n",
   VAR_9);
  goto err_fini_utils;
 }

 return 0;

err_fini_utils:
 FUNC_5(&VAR_8->util_data);
err:
 return VAR_9;
}
