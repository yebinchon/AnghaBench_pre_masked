
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channel_mode; int mono_stereo; int ws_src; int data_format; int bit_width; int sample_rate; int i2s_cfg_minor_version; } ;
union afe_port_config {TYPE_2__ i2s_cfg; } ;
struct q6afe_port {TYPE_1__* afe; union afe_port_config port_cfg; } ;
struct q6afe_i2s_cfg {int fmt; int num_channels; int sd_line_mask; int bit_width; int sample_rate; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;


 void* VAR_5 ;




 int VAR_6 ;

 void* VAR_7 ;


 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct q6afe_port *VAR_12, struct q6afe_i2s_cfg *VAR_13)
{
 union afe_port_config *VAR_14 = &VAR_12->port_cfg;
 struct device *VAR_15 = VAR_12->afe->dev;
 int VAR_16;

 VAR_14->i2s_cfg.i2s_cfg_minor_version = VAR_0;
 VAR_14->i2s_cfg.sample_rate = VAR_13->sample_rate;
 VAR_14->i2s_cfg.bit_width = VAR_13->bit_width;
 VAR_14->i2s_cfg.data_format = VAR_1;

 switch (VAR_13->fmt & VAR_11) {
 case 128:
  VAR_14->i2s_cfg.ws_src = VAR_3;
  break;
 case 129:

  VAR_14->i2s_cfg.ws_src = VAR_2;
  break;
 default:
  break;
 }

 VAR_16 = FUNC_1(VAR_13->sd_line_mask);

 switch (VAR_16) {
 case 0:
  FUNC_0(VAR_15, "no line is assigned\n");
  return -VAR_10;
 case 1:
  switch (VAR_13->sd_line_mask) {
  case 134:
   VAR_14->i2s_cfg.channel_mode = VAR_5;
   break;
  case 133:
   VAR_14->i2s_cfg.channel_mode = VAR_6;
   break;
  case 131:
   VAR_14->i2s_cfg.channel_mode = VAR_7;
   break;
  case 130:
   VAR_14->i2s_cfg.channel_mode = VAR_8;
   break;
  default:
   FUNC_0(VAR_15, "Invalid SD lines\n");
   return -VAR_10;
  }
  break;
 case 2:
  switch (VAR_13->sd_line_mask) {
  case 135:
   VAR_14->i2s_cfg.channel_mode = 139;
   break;
  case 132:
   VAR_14->i2s_cfg.channel_mode = 138;
   break;
  default:
   FUNC_0(VAR_15, "Invalid SD lines\n");
   return -VAR_10;
  }
  break;
 case 3:
  switch (VAR_13->sd_line_mask) {
  case 136:
   VAR_14->i2s_cfg.channel_mode = 141;
   break;
  default:
   FUNC_0(VAR_15, "Invalid SD lines\n");
   return -VAR_10;
  }
  break;
 case 4:
  switch (VAR_13->sd_line_mask) {
  case 137:
   VAR_14->i2s_cfg.channel_mode = 140;

   break;
  default:
   FUNC_0(VAR_15, "Invalid SD lines\n");
   return -VAR_10;
  }
  break;
 default:
  FUNC_0(VAR_15, "Invalid SD lines\n");
  return -VAR_10;
 }

 switch (VAR_13->num_channels) {
 case 1:
 case 2:
  switch (VAR_14->i2s_cfg.channel_mode) {
  case 139:
  case 141:
  case 140:
   VAR_14->i2s_cfg.channel_mode = VAR_5;
   break;
  case 138:
    VAR_14->i2s_cfg.channel_mode = VAR_7;
   break;
  }

  if (VAR_13->num_channels == 2)
   VAR_14->i2s_cfg.mono_stereo = VAR_9;
  else
   VAR_14->i2s_cfg.mono_stereo = VAR_4;

  break;
 case 3:
 case 4:
  if (VAR_14->i2s_cfg.channel_mode < 139) {
   FUNC_0(VAR_15, "Invalid Channel mode\n");
   return -VAR_10;
  }
  break;
 case 5:
 case 6:
  if (VAR_14->i2s_cfg.channel_mode < 141) {
   FUNC_0(VAR_15, "Invalid Channel mode\n");
   return -VAR_10;
  }
  break;
 case 7:
 case 8:
  if (VAR_14->i2s_cfg.channel_mode < 140) {
   FUNC_0(VAR_15, "Invalid Channel mode\n");
   return -VAR_10;
  }
  break;
 default:
  break;
 }

 return 0;
}
