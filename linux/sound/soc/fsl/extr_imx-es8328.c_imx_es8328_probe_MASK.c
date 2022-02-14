
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snd_soc_dai_link_component {char* dai_name; struct device_node* of_node; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int num_links; TYPE_1__* dai_link; int owner; int num_dapm_widgets; int dapm_widgets; struct device* dev; } ;
struct TYPE_5__ {int num_cpus; int num_codecs; int num_platforms; char* name; char* stream_name; int dai_fmt; int * init; struct snd_soc_dai_link_component* platforms; struct snd_soc_dai_link_component* cpus; struct snd_soc_dai_link_component* codecs; } ;
struct imx_es8328_data {TYPE_2__ card; TYPE_1__ dai; int jack_gpio; struct device* dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct device*,char*,...) ;
 void* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (scalar_t__,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 struct platform_device* FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*,char*,int ) ;
 int FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (struct device_node*,char*,int ) ;
 int FUNC_11 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_12 (struct platform_device*,struct imx_es8328_data*) ;
 int FUNC_13 (TYPE_2__*,char*) ;
 int FUNC_14 (TYPE_2__*,char*) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_13)
{
 struct device_node *VAR_14 = VAR_13->dev.of_node;
 struct device_node *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 struct platform_device *VAR_17;
 struct imx_es8328_data *VAR_18;
 struct snd_soc_dai_link_component *VAR_19;
 u32 VAR_20, VAR_21;
 int VAR_22;
 struct device *VAR_23 = &VAR_13->dev;

 VAR_22 = FUNC_11(VAR_14, "mux-int-port", &VAR_20);
 if (VAR_22) {
  FUNC_4(VAR_23, "mux-int-port missing or invalid\n");
  goto fail;
 }
 if (VAR_20 > VAR_6 || VAR_20 == 0) {
  FUNC_4(VAR_23, "mux-int-port: hardware only has %d mux ports\n",
   VAR_6);
  goto fail;
 }

 VAR_22 = FUNC_11(VAR_14, "mux-ext-port", &VAR_21);
 if (VAR_22) {
  FUNC_4(VAR_23, "mux-ext-port missing or invalid\n");
  goto fail;
 }
 if (VAR_21 > VAR_6 || VAR_21 == 0) {
  FUNC_4(VAR_23, "mux-ext-port: hardware only has %d mux ports\n",
   VAR_6);
  VAR_22 = -VAR_0;
  goto fail;
 }





 VAR_20--;
 VAR_21--;
 VAR_22 = FUNC_6(VAR_20,
   VAR_3 |
   FUNC_3(VAR_21) |
   FUNC_2(VAR_21) |
   VAR_5 |
   VAR_4,
   FUNC_1(VAR_21));
 if (VAR_22) {
  FUNC_4(VAR_23, "audmux internal port setup failed\n");
  return VAR_22;
 }
 VAR_22 = FUNC_6(VAR_21,
   VAR_3,
   FUNC_1(VAR_20));
 if (VAR_22) {
  FUNC_4(VAR_23, "audmux external port setup failed\n");
  return VAR_22;
 }

 VAR_15 = FUNC_10(VAR_13->dev.of_node, "ssi-controller", 0);
 VAR_16 = FUNC_10(VAR_13->dev.of_node, "audio-codec", 0);
 if (!VAR_15 || !VAR_16) {
  FUNC_4(VAR_23, "phandle missing or invalid\n");
  VAR_22 = -VAR_0;
  goto fail;
 }

 VAR_17 = FUNC_7(VAR_15);
 if (!VAR_17) {
  FUNC_4(VAR_23, "failed to find SSI platform device\n");
  VAR_22 = -VAR_0;
  goto fail;
 }

 VAR_18 = FUNC_5(VAR_23, sizeof(*VAR_18), VAR_2);
 if (!VAR_18) {
  VAR_22 = -VAR_1;
  goto fail;
 }

 VAR_19 = FUNC_5(VAR_23, 3 * sizeof(*VAR_19), VAR_2);
 if (!VAR_19) {
  VAR_22 = -VAR_1;
  goto fail;
 }

 VAR_18->dev = VAR_23;

 VAR_18->jack_gpio = FUNC_8(VAR_13->dev.of_node, "jack-gpio", 0);

 VAR_18->dai.cpus = &VAR_19[0];
 VAR_18->dai.codecs = &VAR_19[1];
 VAR_18->dai.platforms = &VAR_19[2];

 VAR_18->dai.num_cpus = 1;
 VAR_18->dai.num_codecs = 1;
 VAR_18->dai.num_platforms = 1;

 VAR_18->dai.name = "hifi";
 VAR_18->dai.stream_name = "hifi";
 VAR_18->dai.codecs->dai_name = "es8328-hifi-analog";
 VAR_18->dai.codecs->of_node = VAR_16;
 VAR_18->dai.cpus->of_node = VAR_15;
 VAR_18->dai.platforms->of_node = VAR_15;
 VAR_18->dai.init = &VAR_11;
 VAR_18->dai.dai_fmt = VAR_8 | VAR_9 |
       VAR_7;

 VAR_18->card.dev = VAR_23;
 VAR_18->card.dapm_widgets = VAR_12;
 VAR_18->card.num_dapm_widgets = FUNC_0(VAR_12);
 VAR_22 = FUNC_14(&VAR_18->card, "model");
 if (VAR_22) {
  FUNC_4(VAR_23, "Unable to parse card name\n");
  goto fail;
 }
 VAR_22 = FUNC_13(&VAR_18->card, "audio-routing");
 if (VAR_22) {
  FUNC_4(VAR_23, "Unable to parse routing: %d\n", VAR_22);
  goto fail;
 }
 VAR_18->card.num_links = 1;
 VAR_18->card.owner = VAR_10;
 VAR_18->card.dai_link = &VAR_18->dai;

 VAR_22 = FUNC_15(&VAR_18->card);
 if (VAR_22) {
  FUNC_4(VAR_23, "Unable to register: %d\n", VAR_22);
  goto fail;
 }

 FUNC_12(VAR_13, VAR_18);
fail:
 FUNC_9(VAR_15);
 FUNC_9(VAR_16);

 return VAR_22;
}
