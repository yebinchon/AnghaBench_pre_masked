
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tegra_wm9712 {int codec; int util_data; } ;
struct snd_soc_card {TYPE_4__* dev; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {TYPE_2__* cpus; TYPE_1__* platforms; } ;
struct TYPE_8__ {scalar_t__ of_node; } ;
struct TYPE_7__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,char*,...) ;
 struct tegra_wm9712* FUNC_1 (TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct snd_soc_card*,struct tegra_wm9712*) ;
 int FUNC_8 (struct snd_soc_card*,char*) ;
 int FUNC_9 (struct snd_soc_card*,char*) ;
 int FUNC_10 (struct snd_soc_card*) ;
 struct snd_soc_card VAR_3 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_4__*) ;
 int FUNC_13 (int *) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 struct snd_soc_card *VAR_7 = &VAR_3;
 struct tegra_wm9712 *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(&VAR_5->dev, sizeof(struct tegra_wm9712),
          VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_7->dev = &VAR_5->dev;
 FUNC_7(VAR_7, VAR_8);

 VAR_8->codec = FUNC_4("wm9712-codec", -1);
 if (!VAR_8->codec) {
  FUNC_0(&VAR_5->dev, "Can't allocate wm9712 platform device\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_3(VAR_8->codec);
 if (VAR_9)
  goto codec_put;

 VAR_9 = FUNC_9(VAR_7, "nvidia,model");
 if (VAR_9)
  goto codec_unregister;

 VAR_9 = FUNC_8(VAR_7, "nvidia,audio-routing");
 if (VAR_9)
  goto codec_unregister;

 VAR_4.cpus->of_node = FUNC_2(VAR_6,
           "nvidia,ac97-controller", 0);
 if (!VAR_4.cpus->of_node) {
  FUNC_0(&VAR_5->dev,
   "Property 'nvidia,ac97-controller' missing or invalid\n");
  VAR_9 = -VAR_0;
  goto codec_unregister;
 }

 VAR_4.platforms->of_node = VAR_4.cpus->of_node;

 VAR_9 = FUNC_12(&VAR_8->util_data, &VAR_5->dev);
 if (VAR_9)
  goto codec_unregister;

 VAR_9 = FUNC_13(&VAR_8->util_data);
 if (VAR_9)
  goto asoc_utils_fini;

 VAR_9 = FUNC_10(VAR_7);
 if (VAR_9) {
  FUNC_0(&VAR_5->dev, "snd_soc_register_card failed (%d)\n",
   VAR_9);
  goto asoc_utils_fini;
 }

 return 0;

asoc_utils_fini:
 FUNC_11(&VAR_8->util_data);
codec_unregister:
 FUNC_5(VAR_8->codec);
codec_put:
 FUNC_6(VAR_8->codec);
 return VAR_9;
}
