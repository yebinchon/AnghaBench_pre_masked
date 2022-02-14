
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai_link_component {scalar_t__ name; scalar_t__ dai_name; } ;
struct snd_soc_dai_link {int init; int dai_fmt; scalar_t__ stream_name; scalar_t__ name; struct snd_soc_dai_link_component* platforms; struct snd_soc_dai_link_component* codecs; struct snd_soc_dai_link_component* cpus; } ;
struct snd_soc_card {scalar_t__ name; int probe; struct device* dev; int owner; } ;
struct simple_dai_props {int * codec_dai; int * cpu_dai; } ;
struct device {struct asoc_simple_card_info* platform_data; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct link_info {int dais; int link; } ;
struct device_node {int dummy; } ;
struct asoc_simple_priv {int * dais; struct simple_dai_props* dai_props; struct snd_soc_dai_link* dai_link; } ;
struct TYPE_2__ {scalar_t__ name; } ;
struct asoc_simple_card_info {TYPE_1__ codec_dai; TYPE_1__ cpu_dai; int daifmt; scalar_t__ name; scalar_t__ card; scalar_t__ platform; scalar_t__ codec; } ;
typedef int li ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_card*) ;
 int VAR_5 ;
 int FUNC_1 (struct asoc_simple_priv*) ;
 int FUNC_2 (struct asoc_simple_priv*,struct link_info*) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct asoc_simple_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,struct snd_soc_card*) ;
 int FUNC_6 (int *,TYPE_1__*,int) ;
 int FUNC_7 (struct link_info*,int ,int) ;
 scalar_t__ FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct asoc_simple_priv*,struct link_info*) ;
 int FUNC_10 (struct asoc_simple_priv*) ;
 struct snd_soc_card* FUNC_11 (struct asoc_simple_priv*) ;
 int VAR_6 ;
 int FUNC_12 (struct snd_soc_card*,struct asoc_simple_priv*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct asoc_simple_priv *VAR_8;
 struct device *VAR_9 = &VAR_7->dev;
 struct device_node *VAR_10 = VAR_9->of_node;
 struct snd_soc_card *VAR_11;
 struct link_info VAR_12;
 int VAR_13;


 VAR_8 = FUNC_4(VAR_9, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_11 = FUNC_11(VAR_8);
 VAR_11->owner = VAR_4;
 VAR_11->dev = VAR_9;
 VAR_11->probe = VAR_6;

 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 FUNC_9(VAR_8, &VAR_12);
 if (!VAR_12.link || !VAR_12.dais)
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_8, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_10 && FUNC_8(VAR_10)) {

  VAR_13 = FUNC_10(VAR_8);
  if (VAR_13 < 0) {
   if (VAR_13 != -VAR_2)
    FUNC_3(VAR_9, "parse error %d\n", VAR_13);
   goto err;
  }

 } else {
  struct asoc_simple_card_info *VAR_14;
  struct snd_soc_dai_link_component *VAR_15;
  struct snd_soc_dai_link_component *VAR_16;
  struct snd_soc_dai_link_component *VAR_17;
  struct snd_soc_dai_link *VAR_18 = VAR_8->dai_link;
  struct simple_dai_props *VAR_19 = VAR_8->dai_props;

  int VAR_20 = 0;

  VAR_14 = VAR_9->platform_data;
  if (!VAR_14) {
   FUNC_3(VAR_9, "no info for asoc-simple-card\n");
   return -VAR_0;
  }

  if (!VAR_14->name ||
      !VAR_14->codec_dai.name ||
      !VAR_14->codec ||
      !VAR_14->platform ||
      !VAR_14->cpu_dai.name) {
   FUNC_3(VAR_9, "insufficient asoc_simple_card_info settings\n");
   return -VAR_0;
  }

  VAR_19->cpu_dai = &VAR_8->dais[VAR_20++];
  VAR_19->codec_dai = &VAR_8->dais[VAR_20++];

  VAR_15 = VAR_18->cpus;
  VAR_15->dai_name = VAR_14->cpu_dai.name;

  VAR_16 = VAR_18->codecs;
  VAR_16->name = VAR_14->codec;
  VAR_16->dai_name = VAR_14->codec_dai.name;

  VAR_17 = VAR_18->platforms;
  VAR_17->name = VAR_14->platform;

  VAR_11->name = (VAR_14->card) ? VAR_14->card : VAR_14->name;
  VAR_18->name = VAR_14->name;
  VAR_18->stream_name = VAR_14->name;
  VAR_18->dai_fmt = VAR_14->daifmt;
  VAR_18->init = VAR_5;
  FUNC_6(VAR_19->cpu_dai, &VAR_14->cpu_dai,
     sizeof(*VAR_19->cpu_dai));
  FUNC_6(VAR_19->codec_dai, &VAR_14->codec_dai,
     sizeof(*VAR_19->codec_dai));
 }

 FUNC_12(VAR_11, VAR_8);

 FUNC_1(VAR_8);

 VAR_13 = FUNC_5(VAR_9, VAR_11);
 if (VAR_13 < 0)
  goto err;

 return 0;
err:
 FUNC_0(VAR_11);

 return VAR_13;
}
