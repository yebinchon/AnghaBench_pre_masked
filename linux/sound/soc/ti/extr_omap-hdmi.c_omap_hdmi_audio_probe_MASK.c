
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai_link_component {char* dai_name; char* name; } ;
struct snd_soc_dai_driver {int dummy; } ;
struct snd_soc_card {int num_links; struct device* dev; TYPE_2__* dai_link; scalar_t__ name; int owner; } ;
struct device {struct omap_hdmi_audio_pdata* platform_data; } ;
struct platform_device {struct device dev; } ;
struct omap_hdmi_audio_pdata {int version; int audio_dma_addr; int ops; int dev; } ;
struct TYPE_3__ {char* filter_data; int addr_width; int addr; } ;
struct hdmi_audio_data {struct snd_soc_card* card; int dssdev; int current_stream_lock; TYPE_1__ dma_data; int ops; } ;
struct TYPE_4__ {int num_cpus; int num_codecs; int num_platforms; struct snd_soc_dai_link_component* codecs; struct snd_soc_dai_link_component* platforms; struct snd_soc_dai_link_component* cpus; scalar_t__ stream_name; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct hdmi_audio_data*) ;
 scalar_t__ FUNC_3 (struct device*,int ,char*,void*) ;
 void* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int ,int *,struct snd_soc_dai_driver*,int) ;
 int FUNC_6 (int *) ;
 struct snd_soc_dai_driver VAR_5 ;
 struct snd_soc_dai_driver VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (struct snd_soc_card*,struct hdmi_audio_data*) ;
 int FUNC_9 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct omap_hdmi_audio_pdata *VAR_9 = VAR_8->dev.platform_data;
 struct device *VAR_10 = &VAR_8->dev;
 struct hdmi_audio_data *VAR_11;
 struct snd_soc_dai_driver *VAR_12;
 struct snd_soc_card *VAR_13;
 struct snd_soc_dai_link_component *VAR_14;
 int VAR_15;

 if (!VAR_9) {
  FUNC_0(VAR_10, "No platform data\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_4(VAR_10, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;
 VAR_11->dssdev = VAR_9->dev;
 VAR_11->ops = VAR_9->ops;
 VAR_11->dma_data.addr = VAR_9->audio_dma_addr;
 VAR_11->dma_data.filter_data = "audio_tx";
 VAR_11->dma_data.addr_width = VAR_0;
 FUNC_6(&VAR_11->current_stream_lock);

 switch (VAR_9->version) {
 case 4:
  VAR_12 = &VAR_5;
  break;
 case 5:
  VAR_12 = &VAR_6;
  break;
 default:
  return -VAR_1;
 }
 VAR_15 = FUNC_5(VAR_11->dssdev, &VAR_7,
      VAR_12, 1);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_7(VAR_11->dssdev, "audio_tx", ((void*)0));
 if (VAR_15)
  return VAR_15;

 VAR_13 = FUNC_4(VAR_10, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->name = FUNC_3(VAR_10, VAR_3,
        "HDMI %s", FUNC_1(VAR_11->dssdev));
 if (!VAR_13->name)
  return -VAR_2;

 VAR_13->owner = VAR_4;
 VAR_13->dai_link =
  FUNC_4(VAR_10, sizeof(*(VAR_13->dai_link)), VAR_3);
 if (!VAR_13->dai_link)
  return -VAR_2;

 VAR_14 = FUNC_4(VAR_10, 3 * sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;
 VAR_13->dai_link->cpus = &VAR_14[0];
 VAR_13->dai_link->num_cpus = 1;
 VAR_13->dai_link->codecs = &VAR_14[1];
 VAR_13->dai_link->num_codecs = 1;
 VAR_13->dai_link->platforms = &VAR_14[2];
 VAR_13->dai_link->num_platforms = 1;

 VAR_13->dai_link->name = VAR_13->name;
 VAR_13->dai_link->stream_name = VAR_13->name;
 VAR_13->dai_link->cpus->dai_name = FUNC_1(VAR_11->dssdev);
 VAR_13->dai_link->platforms->name = FUNC_1(VAR_11->dssdev);
 VAR_13->dai_link->codecs->name = "snd-soc-dummy";
 VAR_13->dai_link->codecs->dai_name = "snd-soc-dummy-dai";
 VAR_13->num_links = 1;
 VAR_13->dev = VAR_10;

 VAR_15 = FUNC_9(VAR_13);
 if (VAR_15) {
  FUNC_0(VAR_10, "snd_soc_register_card failed (%d)\n", VAR_15);
  return VAR_15;
 }

 VAR_11->card = VAR_13;
 FUNC_8(VAR_13, VAR_11);

 FUNC_2(VAR_10, VAR_11);

 return 0;
}
