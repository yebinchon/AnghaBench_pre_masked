
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


typedef int u64 ;
typedef void* u32 ;
struct TYPE_14__ {int max; int min; } ;
struct TYPE_13__ {int max; int min; } ;
struct TYPE_12__ {int max; int min; } ;
struct TYPE_11__ {int max; int min; } ;
struct xensnd_query_hw_param {TYPE_7__ period; TYPE_6__ buffer; TYPE_5__ channels; TYPE_4__ rates; int formats; } ;
struct xen_snd_front_pcm_stream_info {TYPE_3__* evt_pair; TYPE_2__* front_info; } ;
struct snd_pcm_hw_rule {struct xen_snd_front_pcm_stream_info* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {void** bits; } ;
struct snd_interval {int integer; int max; int min; scalar_t__ openmax; scalar_t__ openmin; } ;
struct device {int dummy; } ;
struct TYPE_10__ {int req; } ;
struct TYPE_9__ {TYPE_1__* xb_dev; } ;
struct TYPE_8__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 struct snd_mask* FUNC_2 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_3 (struct snd_interval*,struct snd_interval*) ;
 int FUNC_4 (struct snd_mask*) ;
 int FUNC_5 (struct snd_mask*,struct snd_mask*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,struct xensnd_query_hw_param*,struct xensnd_query_hw_param*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_hw_params *VAR_7,
   struct snd_pcm_hw_rule *VAR_8)
{
 struct xen_snd_front_pcm_stream_info *VAR_9 = VAR_8->private;
 struct device *VAR_10 = &VAR_9->front_info->xb_dev->dev;
 struct snd_mask *VAR_11 =
   FUNC_2(VAR_7, VAR_4);
 struct snd_interval *VAR_12 =
   FUNC_1(VAR_7, VAR_6);
 struct snd_interval *VAR_13 =
   FUNC_1(VAR_7, VAR_3);
 struct snd_interval *VAR_14 =
   FUNC_1(VAR_7,
       VAR_5);
 struct snd_interval *VAR_15 =
   FUNC_1(VAR_7,
       VAR_2);
 struct xensnd_query_hw_param VAR_16;
 struct xensnd_query_hw_param VAR_17;
 struct snd_interval VAR_18;
 struct snd_mask VAR_19;
 u64 VAR_20;
 int VAR_21, VAR_22;



 VAR_16.formats = FUNC_7((u64)VAR_11->bits[0] |
         (u64)(VAR_11->bits[1]) << 32);

 VAR_16.rates.min = VAR_12->min;
 VAR_16.rates.max = VAR_12->max;

 VAR_16.channels.min = VAR_13->min;
 VAR_16.channels.max = VAR_13->max;

 VAR_16.buffer.min = VAR_15->min;
 VAR_16.buffer.max = VAR_15->max;

 VAR_16.period.min = VAR_14->min;
 VAR_16.period.max = VAR_14->max;

 VAR_22 = FUNC_8(&VAR_9->evt_pair->req,
        &VAR_16, &VAR_17);
 if (VAR_22 < 0) {

  if (VAR_22 == -VAR_0 || VAR_22 == -VAR_1)
   FUNC_0(VAR_10, "Failed to query ALSA HW parameters\n");
  return VAR_22;
 }


 VAR_21 = 0;

 VAR_20 = FUNC_6(VAR_17.formats);
 FUNC_4(&VAR_19);
 VAR_19.bits[0] = (u32)VAR_20;
 VAR_19.bits[1] = (u32)(VAR_20 >> 32);
 VAR_22 = FUNC_5(VAR_11, &VAR_19);
 if (VAR_22 < 0)
  return VAR_22;
 VAR_21 |= VAR_22;

 VAR_18.openmin = 0;
 VAR_18.openmax = 0;
 VAR_18.integer = 1;

 VAR_18.min = VAR_17.rates.min;
 VAR_18.max = VAR_17.rates.max;
 VAR_22 = FUNC_3(VAR_12, &VAR_18);
 if (VAR_22 < 0)
  return VAR_22;
 VAR_21 |= VAR_22;

 VAR_18.min = VAR_17.channels.min;
 VAR_18.max = VAR_17.channels.max;
 VAR_22 = FUNC_3(VAR_13, &VAR_18);
 if (VAR_22 < 0)
  return VAR_22;
 VAR_21 |= VAR_22;

 VAR_18.min = VAR_17.buffer.min;
 VAR_18.max = VAR_17.buffer.max;
 VAR_22 = FUNC_3(VAR_15, &VAR_18);
 if (VAR_22 < 0)
  return VAR_22;
 VAR_21 |= VAR_22;

 VAR_18.min = VAR_17.period.min;
 VAR_18.max = VAR_17.period.max;
 VAR_22 = FUNC_3(VAR_14, &VAR_18);
 if (VAR_22 < 0)
  return VAR_22;
 VAR_21 |= VAR_22;

 return VAR_21;
}
