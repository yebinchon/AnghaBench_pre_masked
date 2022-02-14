
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct snd_soc_card {int fully_routed; int num_links; TYPE_1__* dai_link; void* num_dapm_routes; void* dapm_routes; void* num_dapm_widgets; void* dapm_widgets; int owner; TYPE_6__* dev; } ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct platform_device {TYPE_6__ dev; } ;
struct device_node {int dummy; } ;
struct abe_twl6040 {TYPE_1__* dai_links; int mclk_freq; int jack_detection; struct snd_soc_card card; } ;
struct TYPE_11__ {struct device_node* of_node; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct TYPE_9__ {char* name; char* stream_name; int num_cpus; int num_platforms; int num_codecs; int * ops; int init; int codecs; TYPE_2__* platforms; TYPE_3__* cpus; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (TYPE_6__*,char*,...) ;
 struct abe_twl6040* FUNC_2 (TYPE_6__*,int,int ) ;
 int FUNC_3 (TYPE_6__*,struct snd_soc_card*) ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 TYPE_3__* VAR_10 ;
 TYPE_2__* VAR_11 ;
 struct device_node* FUNC_4 (struct device_node*,char*,int ) ;
 int FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (struct snd_soc_card*,struct abe_twl6040*) ;
 int FUNC_8 (struct snd_soc_card*,char*) ;
 scalar_t__ FUNC_9 (struct snd_soc_card*,char*) ;
 void* VAR_16 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_17)
{
 struct device_node *VAR_18 = VAR_17->dev.of_node;
 struct snd_soc_card *VAR_19;
 struct device_node *VAR_20;
 struct abe_twl6040 *VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;

 if (!VAR_18) {
  FUNC_1(&VAR_17->dev, "of node is missing.\n");
  return -VAR_1;
 }

 VAR_21 = FUNC_2(&VAR_17->dev, sizeof(struct abe_twl6040), VAR_3);
 if (VAR_21 == ((void*)0))
  return -VAR_2;

 VAR_19 = &VAR_21->card;
 VAR_19->dev = &VAR_17->dev;
 VAR_19->owner = VAR_4;
 VAR_19->dapm_widgets = VAR_16;
 VAR_19->num_dapm_widgets = FUNC_0(VAR_16);
 VAR_19->dapm_routes = VAR_5;
 VAR_19->num_dapm_routes = FUNC_0(VAR_5);

 if (FUNC_9(VAR_19, "ti,model")) {
  FUNC_1(&VAR_17->dev, "Card name is not provided\n");
  return -VAR_1;
 }

 VAR_23 = FUNC_8(VAR_19, "ti,audio-routing");
 if (VAR_23) {
  FUNC_1(&VAR_17->dev, "Error while parsing DAPM routing\n");
  return VAR_23;
 }

 VAR_20 = FUNC_4(VAR_18, "ti,mcpdm", 0);
 if (!VAR_20) {
  FUNC_1(&VAR_17->dev, "McPDM node is not provided\n");
  return -VAR_0;
 }

 VAR_21->dai_links[0].name = "DMIC";
 VAR_21->dai_links[0].stream_name = "TWL6040";
 VAR_21->dai_links[0].cpus = VAR_7;
 VAR_21->dai_links[0].num_cpus = 1;
 VAR_21->dai_links[0].cpus->of_node = VAR_20;
 VAR_21->dai_links[0].platforms = VAR_8;
 VAR_21->dai_links[0].num_platforms = 1;
 VAR_21->dai_links[0].platforms->of_node = VAR_20;
 VAR_21->dai_links[0].codecs = VAR_6;
 VAR_21->dai_links[0].num_codecs = 1;
 VAR_21->dai_links[0].init = VAR_15;
 VAR_21->dai_links[0].ops = &VAR_14;

 VAR_20 = FUNC_4(VAR_18, "ti,dmic", 0);
 if (VAR_20) {
  VAR_22 = 2;
  VAR_21->dai_links[1].name = "TWL6040";
  VAR_21->dai_links[1].stream_name = "DMIC Capture";
  VAR_21->dai_links[1].cpus = VAR_10;
  VAR_21->dai_links[1].num_cpus = 1;
  VAR_21->dai_links[1].cpus->of_node = VAR_20;
  VAR_21->dai_links[1].platforms = VAR_11;
  VAR_21->dai_links[1].num_platforms = 1;
  VAR_21->dai_links[1].platforms->of_node = VAR_20;
  VAR_21->dai_links[1].codecs = VAR_9;
  VAR_21->dai_links[1].num_codecs = 1;
  VAR_21->dai_links[1].init = VAR_12;
  VAR_21->dai_links[1].ops = &VAR_13;
 } else {
  VAR_22 = 1;
 }

 VAR_21->jack_detection = FUNC_5(VAR_18, "ti,jack-detection");
 FUNC_6(VAR_18, "ti,mclk-freq", &VAR_21->mclk_freq);
 if (!VAR_21->mclk_freq) {
  FUNC_1(&VAR_17->dev, "MCLK frequency not provided\n");
  return -VAR_0;
 }

 VAR_19->fully_routed = 1;

 if (!VAR_21->mclk_freq) {
  FUNC_1(&VAR_17->dev, "MCLK frequency missing\n");
  return -VAR_1;
 }

 VAR_19->dai_link = VAR_21->dai_links;
 VAR_19->num_links = VAR_22;

 FUNC_7(VAR_19, VAR_21);

 VAR_23 = FUNC_3(&VAR_17->dev, VAR_19);
 if (VAR_23)
  FUNC_1(&VAR_17->dev, "devm_snd_soc_register_card() failed: %d\n",
   VAR_23);

 return VAR_23;
}
