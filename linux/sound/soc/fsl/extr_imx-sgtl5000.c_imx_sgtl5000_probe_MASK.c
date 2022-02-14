
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct snd_soc_dai_link_component {char* dai_name; struct device_node* of_node; } ;
struct TYPE_14__ {struct device_node* of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_13__ {int num_links; int num_dapm_widgets; int dapm_widgets; TYPE_1__* dai_link; int owner; TYPE_5__* dev; } ;
struct TYPE_12__ {int num_cpus; int num_codecs; int num_platforms; char* name; char* stream_name; int dai_fmt; int * init; struct snd_soc_dai_link_component* platforms; struct snd_soc_dai_link_component* cpus; struct snd_soc_dai_link_component* codecs; } ;
struct imx_sgtl5000_data {int codec_clk; TYPE_2__ card; TYPE_1__ dai; int clk_frequency; } ;
struct i2c_client {int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_5__*,char*) ;
 int FUNC_10 (TYPE_5__*,char*,...) ;
 void* FUNC_11 (TYPE_5__*,int,int ) ;
 int FUNC_12 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_13 (int,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 struct platform_device* FUNC_14 (struct device_node*) ;
 struct i2c_client* FUNC_15 (struct device_node*) ;
 int FUNC_16 (struct device_node*) ;
 struct device_node* FUNC_17 (struct device_node*,char*,int ) ;
 int FUNC_18 (struct device_node*,char*,int*) ;
 int FUNC_19 (struct platform_device*,TYPE_2__*) ;
 int FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_2__*,struct imx_sgtl5000_data*) ;
 int FUNC_22 (TYPE_2__*,char*) ;
 int FUNC_23 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_13)
{
 struct device_node *VAR_14 = VAR_13->dev.of_node;
 struct device_node *VAR_15, *VAR_16;
 struct platform_device *VAR_17;
 struct i2c_client *VAR_18;
 struct imx_sgtl5000_data *VAR_19 = ((void*)0);
 struct snd_soc_dai_link_component *VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;

 VAR_23 = FUNC_18(VAR_14, "mux-int-port", &VAR_21);
 if (VAR_23) {
  FUNC_10(&VAR_13->dev, "mux-int-port missing or invalid\n");
  return VAR_23;
 }
 VAR_23 = FUNC_18(VAR_14, "mux-ext-port", &VAR_22);
 if (VAR_23) {
  FUNC_10(&VAR_13->dev, "mux-ext-port missing or invalid\n");
  return VAR_23;
 }





 VAR_21--;
 VAR_22--;
 VAR_23 = FUNC_13(VAR_21,
   VAR_4 |
   FUNC_3(VAR_22) |
   FUNC_2(VAR_22) |
   VAR_6 |
   VAR_5,
   FUNC_1(VAR_22));
 if (VAR_23) {
  FUNC_10(&VAR_13->dev, "audmux internal port setup failed\n");
  return VAR_23;
 }
 VAR_23 = FUNC_13(VAR_22,
   VAR_4,
   FUNC_1(VAR_21));
 if (VAR_23) {
  FUNC_10(&VAR_13->dev, "audmux external port setup failed\n");
  return VAR_23;
 }

 VAR_15 = FUNC_17(VAR_13->dev.of_node, "ssi-controller", 0);
 VAR_16 = FUNC_17(VAR_13->dev.of_node, "audio-codec", 0);
 if (!VAR_15 || !VAR_16) {
  FUNC_10(&VAR_13->dev, "phandle missing or invalid\n");
  VAR_23 = -VAR_0;
  goto fail;
 }

 VAR_17 = FUNC_14(VAR_15);
 if (!VAR_17) {
  FUNC_9(&VAR_13->dev, "failed to find SSI platform device\n");
  VAR_23 = -VAR_2;
  goto fail;
 }
 FUNC_20(&VAR_17->dev);
 VAR_18 = FUNC_15(VAR_16);
 if (!VAR_18) {
  FUNC_9(&VAR_13->dev, "failed to find codec platform device\n");
  VAR_23 = -VAR_2;
  goto fail;
 }

 VAR_19 = FUNC_11(&VAR_13->dev, sizeof(*VAR_19), VAR_3);
 if (!VAR_19) {
  VAR_23 = -VAR_1;
  goto fail;
 }

 VAR_20 = FUNC_11(&VAR_13->dev, 3 * sizeof(*VAR_20), VAR_3);
 if (!VAR_20) {
  VAR_23 = -VAR_1;
  goto fail;
 }

 VAR_19->codec_clk = FUNC_6(&VAR_18->dev, ((void*)0));
 if (FUNC_4(VAR_19->codec_clk)) {
  VAR_23 = FUNC_5(VAR_19->codec_clk);
  goto fail;
 }

 VAR_19->clk_frequency = FUNC_7(VAR_19->codec_clk);

 VAR_19->dai.cpus = &VAR_20[0];
 VAR_19->dai.codecs = &VAR_20[1];
 VAR_19->dai.platforms = &VAR_20[2];

 VAR_19->dai.num_cpus = 1;
 VAR_19->dai.num_codecs = 1;
 VAR_19->dai.num_platforms = 1;

 VAR_19->dai.name = "HiFi";
 VAR_19->dai.stream_name = "HiFi";
 VAR_19->dai.codecs->dai_name = "sgtl5000";
 VAR_19->dai.codecs->of_node = VAR_16;
 VAR_19->dai.cpus->of_node = VAR_15;
 VAR_19->dai.platforms->of_node = VAR_15;
 VAR_19->dai.init = &VAR_11;
 VAR_19->dai.dai_fmt = VAR_8 | VAR_9 |
       VAR_7;

 VAR_19->card.dev = &VAR_13->dev;
 VAR_23 = FUNC_23(&VAR_19->card, "model");
 if (VAR_23)
  goto fail;
 VAR_23 = FUNC_22(&VAR_19->card, "audio-routing");
 if (VAR_23)
  goto fail;
 VAR_19->card.num_links = 1;
 VAR_19->card.owner = VAR_10;
 VAR_19->card.dai_link = &VAR_19->dai;
 VAR_19->card.dapm_widgets = VAR_12;
 VAR_19->card.num_dapm_widgets = FUNC_0(VAR_12);

 FUNC_19(VAR_13, &VAR_19->card);
 FUNC_21(&VAR_19->card, VAR_19);

 VAR_23 = FUNC_12(&VAR_13->dev, &VAR_19->card);
 if (VAR_23) {
  if (VAR_23 != -VAR_2)
   FUNC_10(&VAR_13->dev, "snd_soc_register_card failed (%d)\n",
    VAR_23);
  goto fail;
 }

 FUNC_16(VAR_15);
 FUNC_16(VAR_16);

 return 0;

fail:
 if (VAR_19 && !FUNC_4(VAR_19->codec_clk))
  FUNC_8(VAR_19->codec_clk);
 FUNC_16(VAR_15);
 FUNC_16(VAR_16);

 return VAR_23;
}
