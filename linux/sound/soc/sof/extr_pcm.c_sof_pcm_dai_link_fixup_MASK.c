
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_sof_dev {int dev; } ;
struct TYPE_8__ {int frame_fmt; } ;
struct TYPE_9__ {TYPE_3__ config; } ;
struct snd_sof_dai {TYPE_5__* dai_config; TYPE_4__ comp_dai; } ;
struct snd_soc_pcm_runtime {TYPE_1__* dai_link; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int dummy; } ;
struct snd_interval {int min; int max; } ;
struct TYPE_7__ {int fsync_rate; int tdm_slots; } ;
struct TYPE_10__ {int type; TYPE_2__ ssp; } ;
struct TYPE_6__ {scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 struct snd_interval* FUNC_3 (struct snd_pcm_hw_params*,int ) ;
 struct snd_mask* FUNC_4 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_5 (struct snd_mask*) ;
 int FUNC_6 (struct snd_mask*,int ) ;
 struct snd_sof_dev* FUNC_7 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_8 (struct snd_soc_pcm_runtime*,int ) ;
 struct snd_sof_dai* FUNC_9 (struct snd_sof_dev*,char*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_pcm_runtime *VAR_8,
      struct snd_pcm_hw_params *VAR_9)
{
 struct snd_interval *VAR_10 = FUNC_3(VAR_9,
   VAR_7);
 struct snd_interval *VAR_11 = FUNC_3(VAR_9,
      VAR_5);
 struct snd_mask *VAR_12 = FUNC_4(VAR_9, VAR_6);
 struct snd_soc_component *VAR_13 =
  FUNC_8(VAR_8, VAR_0);
 struct snd_sof_dev *VAR_14 = FUNC_7(VAR_13);
 struct snd_sof_dai *VAR_15 =
  FUNC_9(VAR_14, (char *)VAR_8->dai_link->name);


 if (!VAR_15) {
  FUNC_2(VAR_14->dev, "warning: no topology found for BE DAI %s config\n",
    VAR_8->dai_link->name);


  VAR_10->min = 48000;
  VAR_10->max = 48000;

  VAR_11->min = 2;
  VAR_11->max = 2;

  FUNC_5(VAR_12);
  FUNC_6(VAR_12, VAR_2);

  return 0;
 }


 FUNC_5(VAR_12);

 switch (VAR_15->comp_dai.config.frame_fmt) {
 case 130:
  FUNC_6(VAR_12, VAR_2);
  break;
 case 129:
  FUNC_6(VAR_12, VAR_3);
  break;
 case 128:
  FUNC_6(VAR_12, VAR_4);
  break;
 default:
  FUNC_1(VAR_14->dev, "error: No available DAI format!\n");
  return -VAR_1;
 }


 switch (VAR_15->dai_config->type) {
 case 131:
  VAR_10->min = VAR_15->dai_config->ssp.fsync_rate;
  VAR_10->max = VAR_15->dai_config->ssp.fsync_rate;
  VAR_11->min = VAR_15->dai_config->ssp.tdm_slots;
  VAR_11->max = VAR_15->dai_config->ssp.tdm_slots;

  FUNC_0(VAR_14->dev,
   "rate_min: %d rate_max: %d\n", VAR_10->min, VAR_10->max);
  FUNC_0(VAR_14->dev,
   "channels_min: %d channels_max: %d\n",
   VAR_11->min, VAR_11->max);

  break;
 case 133:

  if (VAR_15->comp_dai.config.frame_fmt == 129) {
   FUNC_1(VAR_14->dev,
    "error: invalid fmt %d for DAI type %d\n",
    VAR_15->comp_dai.config.frame_fmt,
    VAR_15->dai_config->type);
  }
  break;
 case 132:

  break;
 case 134:

  break;
 default:
  FUNC_1(VAR_14->dev, "error: invalid DAI type %d\n",
   VAR_15->dai_config->type);
  break;
 }

 return 0;
}
