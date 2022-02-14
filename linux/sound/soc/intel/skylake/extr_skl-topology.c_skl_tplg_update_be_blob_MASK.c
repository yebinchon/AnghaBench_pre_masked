
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct snd_soc_dapm_widget {struct skl_module_cfg* priv; } ;
struct skl_module_iface {TYPE_5__* inputs; TYPE_3__* outputs; } ;
struct TYPE_12__ {scalar_t__ caps_size; int* caps; } ;
struct skl_module_cfg {int dev_type; int fmt_idx; int vbus_id; TYPE_6__ formats_config; int hw_conn_type; TYPE_1__* module; } ;
struct skl_dev {int dev; } ;
struct nhlt_specific_cfg {scalar_t__ size; int caps; } ;
struct TYPE_10__ {int s_freq; int bit_depth; int channels; } ;
struct TYPE_11__ {TYPE_4__ fmt; } ;
struct TYPE_8__ {int s_freq; int bit_depth; int channels; } ;
struct TYPE_9__ {TYPE_2__ fmt; } ;
struct TYPE_7__ {struct skl_module_iface* formats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int,int) ;
 struct nhlt_specific_cfg* FUNC_2 (struct skl_dev*,int,int,int,int,int,int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_7,
      struct skl_dev *VAR_8)
{
 struct skl_module_cfg *VAR_9 = VAR_7->priv;
 int VAR_10, VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 struct nhlt_specific_cfg *VAR_15;
 u8 VAR_16 = FUNC_3(VAR_9->dev_type);
 int VAR_17 = VAR_9->fmt_idx;
 struct skl_module_iface *VAR_18 = &VAR_9->module->formats[VAR_17];


 if (VAR_9->formats_config.caps_size > 0)
  return 0;

 FUNC_0(VAR_8->dev, "Applying default cfg blob\n");
 switch (VAR_9->dev_type) {
 case 129:
  VAR_10 = VAR_2;
  VAR_11 = VAR_5;
  VAR_13 = VAR_18->inputs[0].fmt.s_freq;
  VAR_14 = VAR_18->inputs[0].fmt.bit_depth;
  VAR_12 = VAR_18->inputs[0].fmt.channels;
  break;

 case 128:
  VAR_10 = VAR_3;
  if (VAR_9->hw_conn_type == VAR_4) {
   VAR_11 = VAR_6;
   VAR_13 = VAR_18->outputs[0].fmt.s_freq;
   VAR_14 = VAR_18->outputs[0].fmt.bit_depth;
   VAR_12 = VAR_18->outputs[0].fmt.channels;
  } else {
   VAR_11 = VAR_5;
   VAR_13 = VAR_18->inputs[0].fmt.s_freq;
   VAR_14 = VAR_18->inputs[0].fmt.bit_depth;
   VAR_12 = VAR_18->inputs[0].fmt.channels;
  }
  break;

 default:
  return -VAR_0;
 }


 VAR_15 = FUNC_2(VAR_8, VAR_9->vbus_id, VAR_10,
     VAR_14, VAR_12, VAR_13, VAR_11, VAR_16);
 if (VAR_15) {
  VAR_9->formats_config.caps_size = VAR_15->size;
  VAR_9->formats_config.caps = (u32 *) &VAR_15->caps;
 } else {
  FUNC_1(VAR_8->dev, "Blob NULL for id %x type %d dirn %d\n",
     VAR_9->vbus_id, VAR_10, VAR_11);
  FUNC_1(VAR_8->dev, "PCM: ch %d, freq %d, fmt %d\n",
     VAR_12, VAR_13, VAR_14);
  return -VAR_1;
 }

 return 0;
}
