
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dai_link {int dai_fmt; char* name; char* stream_name; TYPE_3__* cpus; TYPE_2__* platforms; TYPE_1__* codecs; int * ops; void* num_platforms; void* num_codecs; void* num_cpus; } ;
struct snow_priv {int clk_i2s_bus; struct snd_soc_dai_link dai_link; } ;
struct snd_soc_card {int num_links; struct device* dev; struct snd_soc_dai_link* dai_link; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct TYPE_4__ {char* dai_name; void* of_node; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct device*,char*,...) ;
 struct snow_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,struct snd_soc_card*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_6 (struct device_node*,char*) ;
 struct device_node* FUNC_7 (struct device_node*,char*) ;
 int FUNC_8 (struct device_node*) ;
 void* FUNC_9 (struct device_node*,char*,int ) ;
 int FUNC_10 (struct snd_soc_card*,struct snow_priv*) ;
 int FUNC_11 (struct device*,struct device_node*,struct snd_soc_dai_link*) ;
 int FUNC_12 (struct snd_soc_card*,char*) ;
 int FUNC_13 (struct snd_soc_dai_link*) ;
 int VAR_9 ;
 struct snd_soc_card VAR_10 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct snd_soc_card *VAR_13 = &VAR_10;
 struct device_node *VAR_14, *VAR_15;
 struct snd_soc_dai_link *VAR_16;
 struct snow_priv *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_4(VAR_12, sizeof(*VAR_17), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 VAR_16 = &VAR_17->dai_link;

 VAR_16->dai_fmt = VAR_4 | VAR_5 |
   VAR_3;

 VAR_16->name = "Primary";
 VAR_16->stream_name = VAR_16->name;

 VAR_16->cpus = VAR_7;
 VAR_16->num_cpus = FUNC_0(VAR_7);
 VAR_16->codecs = VAR_6;
 VAR_16->num_codecs = FUNC_0(VAR_6);
 VAR_16->platforms = VAR_8;
 VAR_16->num_platforms = FUNC_0(VAR_8);

 VAR_13->dai_link = VAR_16;
 VAR_13->num_links = 1;
 VAR_13->dev = VAR_12;


 VAR_14 = FUNC_7(VAR_12->of_node, "cpu");

 if (VAR_14) {
  VAR_16->ops = &VAR_9;

  VAR_16->cpus->of_node = FUNC_9(VAR_14, "sound-dai", 0);
  FUNC_8(VAR_14);

  if (!VAR_16->cpus->of_node) {
   FUNC_3(VAR_12, "Failed parsing cpu/sound-dai property\n");
   return -VAR_0;
  }

  VAR_15 = FUNC_7(VAR_12->of_node, "codec");
  VAR_18 = FUNC_11(VAR_12, VAR_15, VAR_16);
  FUNC_8(VAR_15);

  if (VAR_18 < 0) {
   FUNC_8(VAR_16->cpus->of_node);
   FUNC_3(VAR_12, "Failed parsing codec node\n");
   return VAR_18;
  }

  VAR_17->clk_i2s_bus = FUNC_6(VAR_16->cpus->of_node,
             "i2s_opclk0");
  if (FUNC_1(VAR_17->clk_i2s_bus)) {
   FUNC_13(VAR_16);
   FUNC_8(VAR_16->cpus->of_node);
   return FUNC_2(VAR_17->clk_i2s_bus);
  }
 } else {
  VAR_16->codecs->dai_name = "HiFi",

  VAR_16->cpus->of_node = FUNC_9(VAR_12->of_node,
      "samsung,i2s-controller", 0);
  if (!VAR_16->cpus->of_node) {
   FUNC_3(VAR_12, "i2s-controller property parse error\n");
   return -VAR_0;
  }

  VAR_16->codecs->of_node = FUNC_9(VAR_12->of_node,
      "samsung,audio-codec", 0);
  if (!VAR_16->codecs->of_node) {
   FUNC_8(VAR_16->cpus->of_node);
   FUNC_3(VAR_12, "audio-codec property parse error\n");
   return -VAR_0;
  }
 }

 VAR_16->platforms->of_node = VAR_16->cpus->of_node;


 FUNC_12(VAR_13, "samsung,model");

 FUNC_10(VAR_13, VAR_17);

 VAR_18 = FUNC_5(VAR_12, VAR_13);
 if (VAR_18) {
  FUNC_3(&VAR_11->dev, "snd_soc_register_card failed (%d)\n", VAR_18);
  return VAR_18;
 }

 return VAR_18;
}
