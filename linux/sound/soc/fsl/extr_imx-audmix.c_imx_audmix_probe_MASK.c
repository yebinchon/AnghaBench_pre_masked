
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct snd_soc_dapm_route {int dummy; } ;
struct snd_soc_dai_link_component {char* dai_name; char* name; struct device_node* of_node; } ;
struct snd_soc_dai_link {int dummy; } ;
struct snd_soc_codec_conf {int dummy; } ;
struct TYPE_20__ {TYPE_13__* parent; struct device_node* of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct of_phandle_args {struct device_node* np; } ;
struct TYPE_19__ {int num_links; int num_configs; int num_dapm_routes; char* name; int owner; TYPE_5__* dev; TYPE_3__* dapm_routes; TYPE_2__* codec_conf; TYPE_1__* dai_link; } ;
struct imx_audmix {int num_dai; int num_dai_conf; int num_dapm_routes; TYPE_4__ card; TYPE_3__* dapm_routes; TYPE_2__* dai_conf; TYPE_1__* dai; struct platform_device* out_pdev; struct platform_device* audmix_pdev; int cpu_mclk; } ;
struct device_node {char* full_name; } ;
struct TYPE_18__ {char* source; char* sink; } ;
struct TYPE_17__ {char* name_prefix; struct device_node* of_node; } ;
struct TYPE_16__ {int num_cpus; int num_codecs; int num_platforms; char* name; char* stream_name; int dynamic; int dpcm_playback; int dpcm_capture; int ignore_pmdown_time; int no_pcm; int * ops; struct snd_soc_dai_link_component* platforms; struct snd_soc_dai_link_component* cpus; struct snd_soc_dai_link_component* codecs; } ;
struct TYPE_15__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_5__*,char*,...) ;
 int FUNC_3 (TYPE_13__*,char*,char*) ;
 char* FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,char*) ;
 void* FUNC_6 (TYPE_5__*,int ,char*,...) ;
 void* FUNC_7 (TYPE_5__*,int,int ) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (struct device_node*,char*,int *) ;
 struct platform_device* FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*,char*,int *,int,struct of_phandle_args*) ;
 int FUNC_12 (struct platform_device*,TYPE_4__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_4__*,struct imx_audmix*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct device_node *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 struct platform_device *VAR_11 = ((void*)0);
 struct platform_device *VAR_12;
 struct of_phandle_args VAR_13;
 struct imx_audmix *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 const char *VAR_18 = "HiFi-AUDMIX-FE-";
 char *VAR_19, *VAR_20, *VAR_21, *VAR_22, *VAR_23;

 if (VAR_7->dev.parent) {
  VAR_9 = VAR_7->dev.parent->of_node;
 } else {
  FUNC_2(&VAR_7->dev, "Missing parent device.\n");
  return -VAR_0;
 }

 if (!VAR_9) {
  FUNC_2(&VAR_7->dev, "Missing DT node for parent device.\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_10(VAR_9);
 if (!VAR_11) {
  FUNC_2(&VAR_7->dev, "Missing AUDMIX platform device for %s\n",
   VAR_8->full_name);
  return -VAR_0;
 }
 FUNC_13(&VAR_11->dev);

 VAR_16 = FUNC_9(VAR_9, "dais", ((void*)0));
 if (VAR_16 != VAR_2) {
  FUNC_2(&VAR_7->dev, "Need 2 dais to be provided for %s\n",
   VAR_9->full_name);
  return -VAR_0;
 }

 VAR_14 = FUNC_7(&VAR_7->dev, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->num_dai = 2 * VAR_16;
 VAR_14->dai = FUNC_7(&VAR_7->dev, VAR_14->num_dai *
     sizeof(struct snd_soc_dai_link), VAR_3);
 if (!VAR_14->dai)
  return -VAR_1;

 VAR_14->num_dai_conf = VAR_16;
 VAR_14->dai_conf = FUNC_7(&VAR_7->dev, VAR_14->num_dai_conf *
          sizeof(struct snd_soc_codec_conf),
          VAR_3);
 if (!VAR_14->dai_conf)
  return -VAR_1;

 VAR_14->num_dapm_routes = 3 * VAR_16;
 VAR_14->dapm_routes = FUNC_7(&VAR_7->dev, VAR_14->num_dapm_routes *
      sizeof(struct snd_soc_dapm_route),
      VAR_3);
 if (!VAR_14->dapm_routes)
  return -VAR_1;

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  struct snd_soc_dai_link_component *VAR_24;


  VAR_24 = FUNC_7(&VAR_7->dev, 6 * sizeof(*VAR_24), VAR_3);
  if (!VAR_24) {
   FUNC_2(&VAR_7->dev, "failed to allocate dai_link\n");
   return -VAR_1;
  }

  VAR_17 = FUNC_11(VAR_9, "dais", ((void*)0), VAR_15,
       &VAR_13);
  if (VAR_17 < 0) {
   FUNC_2(&VAR_7->dev, "of_parse_phandle_with_args failed\n");
   return VAR_17;
  }

  VAR_12 = FUNC_10(VAR_13.np);
  if (!VAR_12) {
   FUNC_2(&VAR_7->dev, "failed to find SAI platform device\n");
   return -VAR_0;
  }
  FUNC_13(&VAR_12->dev);

  VAR_22 = FUNC_6(&VAR_7->dev, VAR_3, "%s%s",
       VAR_18, VAR_13.np->full_name + 1);

  FUNC_3(VAR_7->dev.parent, "DAI FE name:%s\n", VAR_22);

  if (VAR_15 == 0) {
   VAR_10 = VAR_13.np;
   VAR_23 =
    FUNC_6(&VAR_7->dev, VAR_3, "%s %s",
            VAR_22, "CPU-Capture");
  }

  VAR_14->dai[VAR_15].cpus = &VAR_24[0];
  VAR_14->dai[VAR_15].codecs = &VAR_24[1];
  VAR_14->dai[VAR_15].platforms = &VAR_24[2];

  VAR_14->dai[VAR_15].num_cpus = 1;
  VAR_14->dai[VAR_15].num_codecs = 1;
  VAR_14->dai[VAR_15].num_platforms = 1;

  VAR_14->dai[VAR_15].name = VAR_22;
  VAR_14->dai[VAR_15].stream_name = "HiFi-AUDMIX-FE";
  VAR_14->dai[VAR_15].codecs->dai_name = "snd-soc-dummy-dai";
  VAR_14->dai[VAR_15].codecs->name = "snd-soc-dummy";
  VAR_14->dai[VAR_15].cpus->of_node = VAR_13.np;
  VAR_14->dai[VAR_15].cpus->dai_name = FUNC_4(&VAR_12->dev);
  VAR_14->dai[VAR_15].platforms->of_node = VAR_13.np;
  VAR_14->dai[VAR_15].dynamic = 1;
  VAR_14->dai[VAR_15].dpcm_playback = 1;
  VAR_14->dai[VAR_15].dpcm_capture = (VAR_15 == 0 ? 1 : 0);
  VAR_14->dai[VAR_15].ignore_pmdown_time = 1;
  VAR_14->dai[VAR_15].ops = &VAR_6;


  VAR_19 = FUNC_6(&VAR_7->dev, VAR_3,
      "audmix-%d", VAR_15);
  VAR_20 = FUNC_6(&VAR_7->dev, VAR_3,
           "AUDMIX-Playback-%d", VAR_15);
  VAR_21 = FUNC_6(&VAR_7->dev, VAR_3,
           "AUDMIX-Capture-%d", VAR_15);

  VAR_14->dai[VAR_16 + VAR_15].cpus = &VAR_24[3];
  VAR_14->dai[VAR_16 + VAR_15].codecs = &VAR_24[4];
  VAR_14->dai[VAR_16 + VAR_15].platforms = &VAR_24[5];

  VAR_14->dai[VAR_16 + VAR_15].num_cpus = 1;
  VAR_14->dai[VAR_16 + VAR_15].num_codecs = 1;
  VAR_14->dai[VAR_16 + VAR_15].num_platforms = 1;

  VAR_14->dai[VAR_16 + VAR_15].name = VAR_19;
  VAR_14->dai[VAR_16 + VAR_15].codecs->dai_name = "snd-soc-dummy-dai";
  VAR_14->dai[VAR_16 + VAR_15].codecs->name = "snd-soc-dummy";
  VAR_14->dai[VAR_16 + VAR_15].cpus->of_node = VAR_9;
  VAR_14->dai[VAR_16 + VAR_15].cpus->dai_name = VAR_19;
  VAR_14->dai[VAR_16 + VAR_15].platforms->name = "snd-soc-dummy";
  VAR_14->dai[VAR_16 + VAR_15].no_pcm = 1;
  VAR_14->dai[VAR_16 + VAR_15].dpcm_playback = 1;
  VAR_14->dai[VAR_16 + VAR_15].dpcm_capture = 1;
  VAR_14->dai[VAR_16 + VAR_15].ignore_pmdown_time = 1;
  VAR_14->dai[VAR_16 + VAR_15].ops = &VAR_5;

  VAR_14->dai_conf[VAR_15].of_node = VAR_13.np;
  VAR_14->dai_conf[VAR_15].name_prefix = VAR_22;

  VAR_14->dapm_routes[VAR_15].source =
   FUNC_6(&VAR_7->dev, VAR_3, "%s %s",
           VAR_22, "CPU-Playback");
  VAR_14->dapm_routes[VAR_15].sink = VAR_20;
  VAR_14->dapm_routes[VAR_16 + VAR_15].source = VAR_20;
  VAR_14->dapm_routes[VAR_16 + VAR_15].sink = VAR_21;
  VAR_14->dapm_routes[2 * VAR_16 + VAR_15].source = VAR_21;
  VAR_14->dapm_routes[2 * VAR_16 + VAR_15].sink = VAR_23;
 }

 VAR_12 = FUNC_10(VAR_10);
 if (!VAR_12) {
  FUNC_2(&VAR_7->dev, "failed to find SAI platform device\n");
  return -VAR_0;
 }
 FUNC_13(&VAR_12->dev);

 VAR_14->cpu_mclk = FUNC_5(&VAR_12->dev, "mclk1");
 if (FUNC_0(VAR_14->cpu_mclk)) {
  VAR_17 = FUNC_1(VAR_14->cpu_mclk);
  FUNC_2(&VAR_12->dev, "failed to get DAI mclk1: %d\n", VAR_17);
  return -VAR_0;
 }

 VAR_14->audmix_pdev = VAR_11;
 VAR_14->out_pdev = VAR_12;

 VAR_14->card.dai_link = VAR_14->dai;
 VAR_14->card.num_links = VAR_14->num_dai;
 VAR_14->card.codec_conf = VAR_14->dai_conf;
 VAR_14->card.num_configs = VAR_14->num_dai_conf;
 VAR_14->card.dapm_routes = VAR_14->dapm_routes;
 VAR_14->card.num_dapm_routes = VAR_14->num_dapm_routes;
 VAR_14->card.dev = &VAR_7->dev;
 VAR_14->card.owner = VAR_4;
 VAR_14->card.name = "imx-audmix";

 FUNC_12(VAR_7, &VAR_14->card);
 FUNC_14(&VAR_14->card, VAR_14);

 VAR_17 = FUNC_8(&VAR_7->dev, &VAR_14->card);
 if (VAR_17) {
  FUNC_2(&VAR_7->dev, "snd_soc_register_card failed\n");
  return VAR_17;
 }

 return VAR_17;
}
