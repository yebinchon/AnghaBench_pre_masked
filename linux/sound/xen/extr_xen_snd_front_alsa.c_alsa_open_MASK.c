
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int info; } ;
struct xen_snd_front_pcm_stream_info {size_t index; TYPE_7__* evt_pair; struct xen_snd_front_info* front_info; TYPE_3__ pcm_hw; } ;
struct xen_snd_front_pcm_instance_info {TYPE_1__* card_info; } ;
struct xen_snd_front_info {TYPE_7__* evt_pairs; TYPE_2__* xb_dev; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_3__ hw; } ;
struct device {int dummy; } ;
struct TYPE_11__ {struct snd_pcm_substream* substream; } ;
struct TYPE_12__ {TYPE_4__ evt; } ;
struct TYPE_13__ {TYPE_5__ u; } ;
struct TYPE_14__ {TYPE_6__ evt; } ;
struct TYPE_9__ {struct device dev; } ;
struct TYPE_8__ {struct xen_snd_front_info* front_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int ,struct xen_snd_front_pcm_stream_info*,int ,int) ;
 struct xen_snd_front_pcm_instance_info* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct xen_snd_front_pcm_stream_info*) ;
 struct xen_snd_front_pcm_stream_info* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (TYPE_7__*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_14)
{
 struct xen_snd_front_pcm_instance_info *VAR_15 =
   FUNC_2(VAR_14);
 struct xen_snd_front_pcm_stream_info *VAR_16 = FUNC_4(VAR_14);
 struct snd_pcm_runtime *VAR_17 = VAR_14->runtime;
 struct xen_snd_front_info *VAR_18 =
   VAR_15->card_info->front_info;
 struct device *VAR_19 = &VAR_18->xb_dev->dev;
 int VAR_20;





 VAR_17->hw = VAR_16->pcm_hw;
 VAR_17->hw.info &= ~(VAR_8 |
         VAR_9 |
         VAR_6 |
         VAR_5 |
         VAR_10 |
         VAR_12 |
         VAR_11);
 VAR_17->hw.info |= VAR_7;

 VAR_16->evt_pair = &VAR_18->evt_pairs[VAR_16->index];

 VAR_16->front_info = VAR_18;

 VAR_16->evt_pair->evt.u.evt.substream = VAR_14;

 FUNC_3(VAR_16);

 FUNC_5(VAR_16->evt_pair, 1);

 VAR_20 = FUNC_1(VAR_17, 0, VAR_2,
      VAR_13, VAR_16,
      VAR_2, -1);
 if (VAR_20) {
  FUNC_0(VAR_19, "Failed to add HW rule for SNDRV_PCM_HW_PARAM_FORMAT\n");
  return VAR_20;
 }

 VAR_20 = FUNC_1(VAR_17, 0, VAR_4,
      VAR_13, VAR_16,
      VAR_4, -1);
 if (VAR_20) {
  FUNC_0(VAR_19, "Failed to add HW rule for SNDRV_PCM_HW_PARAM_RATE\n");
  return VAR_20;
 }

 VAR_20 = FUNC_1(VAR_17, 0, VAR_1,
      VAR_13, VAR_16,
      VAR_1, -1);
 if (VAR_20) {
  FUNC_0(VAR_19, "Failed to add HW rule for SNDRV_PCM_HW_PARAM_CHANNELS\n");
  return VAR_20;
 }

 VAR_20 = FUNC_1(VAR_17, 0, VAR_3,
      VAR_13, VAR_16,
      VAR_3, -1);
 if (VAR_20) {
  FUNC_0(VAR_19, "Failed to add HW rule for SNDRV_PCM_HW_PARAM_PERIOD_SIZE\n");
  return VAR_20;
 }

 VAR_20 = FUNC_1(VAR_17, 0, VAR_0,
      VAR_13, VAR_16,
      VAR_0, -1);
 if (VAR_20) {
  FUNC_0(VAR_19, "Failed to add HW rule for SNDRV_PCM_HW_PARAM_BUFFER_SIZE\n");
  return VAR_20;
 }

 return 0;
}
