
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct uniperif {scalar_t__ irq; int type; TYPE_1__* hw; int dai_ops; TYPE_4__* mem_region; scalar_t__ fifo_phys_address; int base; int ver; int id; } ;
struct sti_uniperiph_dev_data {int type; scalar_t__ stream; int dai_names; int version; int id; } ;
struct sti_uniperiph_dai {scalar_t__ stream; struct uniperif* uni; } ;
struct sti_uniperiph_data {TYPE_2__* pdev; struct sti_uniperiph_dai dai_data; struct snd_soc_dai_driver* dai; } ;
struct snd_soc_pcm_stream {int formats; int rates; int channels_max; int channels_min; int stream_name; } ;
struct snd_soc_dai_driver {int name; int ops; struct snd_soc_pcm_stream capture; struct snd_soc_pcm_stream playback; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_10__ {scalar_t__ start; } ;
struct TYPE_9__ {struct device dev; } ;
struct TYPE_8__ {int formats; int rates; int channels_max; int channels_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct uniperif*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,TYPE_4__*) ;
 struct uniperif* FUNC_5 (struct device*,int,int ) ;
 struct of_device_id* FUNC_6 (int ,struct device_node*) ;
 int FUNC_7 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_9 (TYPE_2__*,int ,int ) ;
 int VAR_9 ;
 struct snd_soc_dai_driver VAR_10 ;
 int FUNC_10 (TYPE_2__*,struct uniperif*) ;
 int FUNC_11 (TYPE_2__*,struct uniperif*) ;

__attribute__((used)) static int FUNC_12(struct device_node *VAR_11,
        struct sti_uniperiph_data *VAR_12)
{
 struct device *VAR_13 = &VAR_12->pdev->dev;
 struct sti_uniperiph_dai *VAR_14 = &VAR_12->dai_data;
 struct snd_soc_dai_driver *VAR_15 = VAR_12->dai;
 struct snd_soc_pcm_stream *VAR_16;
 struct uniperif *VAR_17;
 const struct of_device_id *VAR_18;
 const struct sti_uniperiph_dev_data *VAR_19;
 const char *VAR_20;
 int VAR_21;


 VAR_18 = FUNC_6(VAR_9, VAR_11);
 if (!VAR_18->data) {
  FUNC_3(VAR_13, "data associated to device is missing\n");
  return -VAR_0;
 }
 VAR_19 = (struct sti_uniperiph_dev_data *)VAR_18->data;

 VAR_17 = FUNC_5(VAR_13, sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return -VAR_2;

 VAR_17->id = VAR_19->id;
 VAR_17->ver = VAR_19->version;

 *VAR_15 = VAR_10;
 VAR_15->name = VAR_19->dai_names;


 VAR_17->mem_region = FUNC_9(VAR_12->pdev, VAR_5, 0);

 if (!VAR_17->mem_region) {
  FUNC_3(VAR_13, "Failed to get memory resource\n");
  return -VAR_1;
 }

 VAR_17->base = FUNC_4(VAR_13, VAR_17->mem_region);

 if (FUNC_0(VAR_17->base))
  return FUNC_1(VAR_17->base);

 VAR_17->fifo_phys_address = VAR_17->mem_region->start +
         FUNC_2(VAR_17);

 VAR_17->irq = FUNC_8(VAR_12->pdev, 0);
 if (VAR_17->irq < 0)
  return -VAR_3;

 VAR_17->type = VAR_19->type;


 if (VAR_19->type & VAR_8) {
  if (!FUNC_7(VAR_11, "st,tdm-mode", &VAR_20))
   VAR_17->type = VAR_8;
  else
   VAR_17->type = VAR_7;
 }

 VAR_14->uni = VAR_17;
 VAR_14->stream = VAR_19->stream;

 if (VAR_12->dai_data.stream == VAR_6) {
  VAR_21 = FUNC_10(VAR_12->pdev, VAR_17);
  VAR_16 = &VAR_15->playback;
 } else {
  VAR_21 = FUNC_11(VAR_12->pdev, VAR_17);
  VAR_16 = &VAR_15->capture;
 }
 if (VAR_21 < 0)
  return VAR_21;

 VAR_15->ops = VAR_17->dai_ops;

 VAR_16->stream_name = VAR_15->name;
 VAR_16->channels_min = VAR_17->hw->channels_min;
 VAR_16->channels_max = VAR_17->hw->channels_max;
 VAR_16->rates = VAR_17->hw->rates;
 VAR_16->formats = VAR_17->hw->formats;

 return 0;
}
