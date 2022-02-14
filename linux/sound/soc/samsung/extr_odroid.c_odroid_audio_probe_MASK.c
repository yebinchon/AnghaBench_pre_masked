
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai_link {int num_codecs; int dpcm_capture; TYPE_1__* cpus; } ;
struct snd_soc_card {int fully_routed; struct snd_soc_dai_link* dai_link; void* num_links; void* num_dapm_routes; void* dapm_routes; int owner; struct device* dev; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_phandle_args {struct device_node* np; } ;
struct odroid_priv {void* sclk_i2s; void* clk_i2s_bus; int lock; struct snd_soc_card card; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int dai_name; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct odroid_priv* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,struct snd_soc_card*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* FUNC_7 (struct device_node*,char*) ;
 int FUNC_8 (struct device_node*,char*,char*) ;
 struct device_node* FUNC_9 (int ,char*) ;
 int FUNC_10 (struct device_node*) ;
 struct device_node* FUNC_11 (struct device_node*,char*,int ) ;
 int FUNC_12 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 int FUNC_14 (struct snd_soc_card*,struct odroid_priv*) ;
 int FUNC_15 (struct of_phandle_args*,int *) ;
 int FUNC_16 (struct device*,struct device_node*,struct snd_soc_dai_link*) ;
 int FUNC_17 (struct snd_soc_card*,char*) ;
 int FUNC_18 (struct snd_soc_card*,char*) ;
 int FUNC_19 (struct snd_soc_card*,char*) ;
 int FUNC_20 (struct snd_soc_dai_link*) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct device_node *VAR_8 = ((void*)0);
 struct device_node *VAR_9, *VAR_10;
 struct odroid_priv *VAR_11;
 struct snd_soc_card *VAR_12;
 struct snd_soc_dai_link *VAR_13, *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 struct of_phandle_args VAR_18 = {};

 VAR_11 = FUNC_5(VAR_7, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = &VAR_11->card;
 VAR_12->dev = VAR_7;

 VAR_12->owner = VAR_3;
 VAR_12->fully_routed = 1;

 FUNC_21(&VAR_11->lock);
 FUNC_14(VAR_12, VAR_11);

 VAR_16 = FUNC_19(VAR_12, "model");
 if (VAR_16 < 0)
  return VAR_16;

 if (FUNC_13(VAR_7->of_node, "samsung,audio-widgets")) {
  VAR_16 = FUNC_18(VAR_12,
      "samsung,audio-widgets");
  if (VAR_16 < 0)
   return VAR_16;
 }

 if (FUNC_13(VAR_7->of_node, "samsung,audio-routing")) {
  VAR_16 = FUNC_17(VAR_12,
      "samsung,audio-routing");
  if (VAR_16 < 0)
   return VAR_16;
 }

 VAR_12->dai_link = VAR_4;
 VAR_12->num_links = FUNC_0(VAR_4);

 VAR_9 = FUNC_9(VAR_7->of_node, "cpu");
 VAR_10 = FUNC_9(VAR_7->of_node, "codec");
 VAR_13 = VAR_12->dai_link;
 VAR_14 = &VAR_12->dai_link[1];






 VAR_15 = FUNC_8(VAR_9, "sound-dai",
           "#sound-dai-cells");
 if (VAR_15 == 1) {
  VAR_12->dapm_routes = VAR_5;
  VAR_12->num_dapm_routes = FUNC_0(VAR_5);
  VAR_12->num_links--;
 }

 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++, VAR_13 += 2) {
  VAR_16 = FUNC_12(VAR_9, "sound-dai",
       "#sound-dai-cells", VAR_17, &VAR_18);
  if (VAR_16 < 0)
   break;

  if (!VAR_18.np) {
   FUNC_4(VAR_7, "sound-dai property parse error: %d\n", VAR_16);
   VAR_16 = -VAR_0;
   break;
  }

  VAR_16 = FUNC_15(&VAR_18, &VAR_13->cpus->dai_name);
  FUNC_10(VAR_18.np);

  if (VAR_16 < 0)
   break;
 }
 if (VAR_16 == 0) {
  VAR_8 = FUNC_11(VAR_9, "sound-dai", 0);
  if (!VAR_8)
   VAR_16 = -VAR_0;
 }

 FUNC_10(VAR_9);
 if (VAR_16 < 0)
  goto err_put_node;

 VAR_16 = FUNC_16(VAR_7, VAR_10, VAR_14);
 if (VAR_16 < 0)
  goto err_put_cpu_dai;


 if (VAR_14->num_codecs > 1) {
  VAR_12->dai_link[0].dpcm_capture = 1;
  VAR_12->dai_link[1].dpcm_capture = 1;
 }

 VAR_11->sclk_i2s = FUNC_7(VAR_8, "i2s_opclk1");
 if (FUNC_1(VAR_11->sclk_i2s)) {
  VAR_16 = FUNC_2(VAR_11->sclk_i2s);
  goto err_put_cpu_dai;
 }

 VAR_11->clk_i2s_bus = FUNC_7(VAR_8, "iis");
 if (FUNC_1(VAR_11->clk_i2s_bus)) {
  VAR_16 = FUNC_2(VAR_11->clk_i2s_bus);
  goto err_put_sclk;
 }

 VAR_16 = FUNC_6(VAR_7, VAR_12);
 if (VAR_16 < 0) {
  FUNC_4(VAR_7, "snd_soc_register_card() failed: %d\n", VAR_16);
  goto err_put_clk_i2s;
 }

 FUNC_10(VAR_8);
 FUNC_10(VAR_10);
 return 0;

err_put_clk_i2s:
 FUNC_3(VAR_11->clk_i2s_bus);
err_put_sclk:
 FUNC_3(VAR_11->sclk_i2s);
err_put_cpu_dai:
 FUNC_10(VAR_8);
 FUNC_20(VAR_14);
err_put_node:
 FUNC_10(VAR_10);
 return VAR_16;
}
