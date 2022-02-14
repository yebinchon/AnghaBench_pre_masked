
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_dai_link_component {char* dai_name; struct device_node* of_node; } ;
struct snd_soc_dai_link {int num_cpus; int num_codecs; int num_platforms; char* name; char* stream_name; unsigned int dai_fmt; struct snd_soc_dai_link_component* platforms; struct snd_soc_dai_link_component* cpus; struct snd_soc_dai_link_component* codecs; int * init; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int num_links; struct snd_soc_dai_link* dai_link; TYPE_4__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (TYPE_4__*,char*,...) ;
 void* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,char*,int ) ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,char*) ;
 unsigned int FUNC_5 (struct device_node*,int *,struct device_node**,struct device_node**) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_9)
{
 struct snd_soc_dai_link *VAR_10;
 struct snd_soc_dai_link_component *VAR_11;
 struct device_node *VAR_12 = VAR_9->dev.of_node;
 struct device_node *VAR_13, *VAR_14;
 struct device_node *VAR_15 = ((void*)0);
 struct device_node *VAR_16 = ((void*)0);
 unsigned int VAR_17;
 int VAR_18 = 0;

 if (!VAR_12) {
  FUNC_0(&VAR_9->dev, "No device node supplied\n");
  return -VAR_0;
 }

 VAR_7.dev = &VAR_9->dev;
 VAR_18 = FUNC_4(&VAR_7, "model");
 if (VAR_18)
  return VAR_18;

 VAR_10 = FUNC_1(&VAR_9->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;


 VAR_11 = FUNC_1(&VAR_9->dev, 3 * sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_7.dai_link = VAR_10;
 VAR_7.num_links = 1;

 VAR_10->cpus = &VAR_11[0];
 VAR_10->num_cpus = 1;
 VAR_10->codecs = &VAR_11[1];
 VAR_10->num_codecs = 1;
 VAR_10->platforms = &VAR_11[2];
 VAR_10->num_platforms = 1;

 VAR_10->name = "WM8731";
 VAR_10->stream_name = "WM8731 HiFi";
 VAR_10->codecs->dai_name = "wm8731-hifi";
 VAR_10->init = &VAR_8;

 VAR_13 = FUNC_3(VAR_12, "audio-codec", 0);
 if (!VAR_13) {
  FUNC_0(&VAR_9->dev, "audio-codec node missing\n");
  return -VAR_0;
 }
 VAR_10->codecs->of_node = VAR_13;

 VAR_14 = FUNC_3(VAR_12, "i2s-controller", 0);
 if (!VAR_14) {
  FUNC_0(&VAR_9->dev, "i2s-controller missing\n");
  return -VAR_0;
 }
 VAR_10->cpus->of_node = VAR_14;
 VAR_10->platforms->of_node = VAR_14;

 VAR_17 = FUNC_5(VAR_12, ((void*)0),
       &VAR_15, &VAR_16);
 if (VAR_15 != VAR_16) {
  FUNC_0(&VAR_9->dev, "Must be the same bitclock and frame master\n");
  return -VAR_0;
 }
 if (VAR_15) {
  VAR_17 &= ~VAR_6;
  if (VAR_13 == VAR_15)
   VAR_17 |= VAR_4;
  else
   VAR_17 |= VAR_5;
 }
 FUNC_2(VAR_15);
 FUNC_2(VAR_16);
 VAR_10->dai_fmt = VAR_17;

 FUNC_2(VAR_13);
 FUNC_2(VAR_14);

 VAR_18 = FUNC_6(&VAR_7);
 if (VAR_18 && VAR_18 != -VAR_2)
  FUNC_0(&VAR_9->dev,
   "snd_soc_register_card() failed: %d\n", VAR_18);

 return VAR_18;
}
