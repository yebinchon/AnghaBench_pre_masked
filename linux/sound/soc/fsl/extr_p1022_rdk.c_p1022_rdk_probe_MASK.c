
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai_link_component {char* dai_name; int name; struct device_node* of_node; } ;
struct snd_soc_dai_link {int dummy; } ;
struct TYPE_10__ {struct device_node* of_node; struct device* parent; } ;
struct platform_device {TYPE_5__ dev; int name; } ;
struct TYPE_8__ {int num_links; TYPE_2__* dai_link; TYPE_5__* dev; int owner; int name; int remove; int probe; } ;
struct machine_data {int dai_format; TYPE_1__ card; TYPE_2__* dai; int * dma_id; int * dma_channel_id; int * platform_name; int clk_frequency; int cpu_clk_direction; int codec_clk_direction; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int num_cpus; int num_codecs; int num_platforms; char* stream_name; char* name; struct snd_soc_dai_link_component* platforms; struct snd_soc_dai_link_component* codecs; int * ops; struct snd_soc_dai_link_component* cpus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_5__*,char*,...) ;
 char* FUNC_2 (TYPE_5__*) ;
 struct snd_soc_dai_link_component* FUNC_3 (TYPE_5__*,int,int ) ;
 int FUNC_4 (struct device_node*,char*,TYPE_2__*,int *,int *) ;
 int FUNC_5 (struct machine_data*) ;
 struct machine_data* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*,int) ;
 int * FUNC_8 (struct device_node*,char*,int *) ;
 int FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (struct device_node*,char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (TYPE_1__*) ;
 struct platform_device* FUNC_12 (struct device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_12)
{
 struct device *VAR_13 = VAR_12->dev.parent;

 struct platform_device *VAR_14 = FUNC_12(VAR_13);
 struct device_node *VAR_15 = VAR_14->dev.of_node;
 struct device_node *VAR_16 = ((void*)0);
 struct machine_data *VAR_17;
 struct snd_soc_dai_link_component *VAR_18;
 const u32 *VAR_19;
 int VAR_20;


 VAR_16 = FUNC_10(VAR_15, "codec-handle", 0);
 if (!VAR_16) {
  FUNC_1(VAR_13, "could not find codec node\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_6(sizeof(struct machine_data), VAR_2);
 if (!VAR_17) {
  VAR_20 = -VAR_1;
  goto error_put;
 }

 VAR_18 = FUNC_3(&VAR_12->dev, 6 * sizeof(*VAR_18), VAR_2);
 if (!VAR_18) {
  VAR_20 = -VAR_1;
  goto error_put;
 }

 VAR_17->dai[0].cpus = &VAR_18[0];
 VAR_17->dai[0].codecs = &VAR_18[1];
 VAR_17->dai[0].platforms = &VAR_18[2];

 VAR_17->dai[0].num_cpus = 1;
 VAR_17->dai[0].num_codecs = 1;
 VAR_17->dai[0].num_platforms = 1;

 VAR_17->dai[1].cpus = &VAR_18[3];
 VAR_17->dai[1].codecs = &VAR_18[4];
 VAR_17->dai[1].platforms = &VAR_18[5];

 VAR_17->dai[1].num_cpus = 1;
 VAR_17->dai[1].num_codecs = 1;
 VAR_17->dai[1].num_platforms = 1;

 VAR_17->dai[0].cpus->dai_name = FUNC_2(&VAR_14->dev);
 VAR_17->dai[0].ops = &VAR_11;


 VAR_17->dai[0].codecs->of_node = VAR_16;






 FUNC_7(&VAR_17->dai[1], &VAR_17->dai[0], sizeof(struct snd_soc_dai_link));


 VAR_17->dai[0].codecs->dai_name = "wm8960-hifi";
 VAR_17->dai[1].codecs->dai_name = VAR_17->dai[0].codecs->dai_name;






 VAR_17->dai_format = VAR_7 |
  VAR_6 | VAR_5;
 VAR_17->codec_clk_direction = VAR_4;
 VAR_17->cpu_clk_direction = VAR_3;






 VAR_19 = FUNC_8(VAR_16, "clock-frequency", ((void*)0));
 if (!VAR_19 || !*VAR_19) {
  FUNC_1(&VAR_12->dev, "codec bus-frequency property is missing or invalid\n");
  VAR_20 = -VAR_0;
  goto error;
 }
 VAR_17->clk_frequency = FUNC_0(VAR_19);

 if (!VAR_17->clk_frequency) {
  FUNC_1(&VAR_12->dev, "unknown clock frequency\n");
  VAR_20 = -VAR_0;
  goto error;
 }


 VAR_17->dai[0].platforms->name = VAR_17->platform_name[0];
 VAR_20 = FUNC_4(VAR_15, "fsl,playback-dma", &VAR_17->dai[0],
           &VAR_17->dma_channel_id[0],
           &VAR_17->dma_id[0]);
 if (VAR_20) {
  FUNC_1(&VAR_12->dev, "missing/invalid playback DMA phandle (ret=%i)\n",
   VAR_20);
  goto error;
 }


 VAR_17->dai[1].platforms->name = VAR_17->platform_name[1];
 VAR_20 = FUNC_4(VAR_15, "fsl,capture-dma", &VAR_17->dai[1],
           &VAR_17->dma_channel_id[1],
           &VAR_17->dma_id[1]);
 if (VAR_20) {
  FUNC_1(&VAR_12->dev, "missing/invalid capture DMA phandle (ret=%i)\n",
   VAR_20);
  goto error;
 }


 VAR_17->dai[0].stream_name = "playback";
 VAR_17->dai[1].stream_name = "capture";
 VAR_17->dai[0].name = VAR_17->dai[0].stream_name;
 VAR_17->dai[1].name = VAR_17->dai[1].stream_name;

 VAR_17->card.probe = VAR_9;
 VAR_17->card.remove = VAR_10;
 VAR_17->card.name = VAR_12->name;
 VAR_17->card.owner = VAR_8;
 VAR_17->card.dev = &VAR_12->dev;
 VAR_17->card.num_links = 2;
 VAR_17->card.dai_link = VAR_17->dai;


 VAR_20 = FUNC_11(&VAR_17->card);
 if (VAR_20) {
  FUNC_1(&VAR_12->dev, "could not register card (ret=%i)\n", VAR_20);
  goto error;
 }

 return 0;

error:
 FUNC_5(VAR_17);
error_put:
 FUNC_9(VAR_16);
 return VAR_20;
}
