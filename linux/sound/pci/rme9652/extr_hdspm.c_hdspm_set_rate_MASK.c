
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdspm {int control_register; int system_sample_rate; scalar_t__ capture_pid; scalar_t__ playback_pid; scalar_t__ io_type; int port_names_out_qs; int port_names_out; int port_names_in_qs; int port_names_in; int qs_out_channels; int max_channels_out; int qs_in_channels; int max_channels_in; int channel_map_out_qs; int channel_map_out; int channel_map_in_qs; int channel_map_in; int port_names_out_ds; int port_names_in_ds; int ds_out_channels; int ds_in_channels; int channel_map_out_ds; int channel_map_in_ds; int port_names_out_ss; int port_names_in_ss; int ss_out_channels; int ss_in_channels; int channel_map_out_ss; int channel_map_in_ss; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,char*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct hdspm*) ;
 int FUNC_3 (struct hdspm*) ;
 int FUNC_4 (struct hdspm*,int) ;
 int * VAR_20 ;
 int FUNC_5 (struct hdspm*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hdspm * VAR_21, int VAR_22, int VAR_23)
{
 int VAR_24;
 int VAR_25;
 int VAR_26 = 0;
 int VAR_27, VAR_28;





 if (!(VAR_21->control_register & VAR_4)) {


  if (VAR_23) {





   FUNC_1(VAR_21->card->dev,
     "Warning: device is not running as a clock master.\n");
   VAR_26 = 1;
  } else {


   int VAR_29 =
       FUNC_3(VAR_21);

   if (FUNC_2(VAR_21) ==
       VAR_3) {

    FUNC_1(VAR_21->card->dev,
      "Detected no External Sync\n");
    VAR_26 = 1;

   } else if (VAR_22 != VAR_29) {

    FUNC_1(VAR_21->card->dev,
      "Warning: No AutoSync source for requested rate\n");
    VAR_26 = 1;
   }
  }
 }

 VAR_24 = VAR_21->system_sample_rate;
 if (VAR_24 <= 48000)
  VAR_27 = VAR_17;
 else if (VAR_24 <= 96000)
  VAR_27 = VAR_15;
 else
  VAR_27 = VAR_16;

 if (VAR_22 <= 48000)
  VAR_28 = VAR_17;
 else if (VAR_22 <= 96000)
  VAR_28 = VAR_15;
 else
  VAR_28 = VAR_16;

 switch (VAR_22) {
 case 32000:
  VAR_25 = VAR_8;
  break;
 case 44100:
  VAR_25 = VAR_9;
  break;
 case 48000:
  VAR_25 = VAR_10;
  break;
 case 64000:
  VAR_25 = VAR_11;
  break;
 case 88200:
  VAR_25 = VAR_12;
  break;
 case 96000:
  VAR_25 = VAR_13;
  break;
 case 128000:
  VAR_25 = VAR_5;
  break;
 case 176400:
  VAR_25 = VAR_6;
  break;
 case 192000:
  VAR_25 = VAR_7;
  break;
 default:
  return -VAR_2;
 }

 if (VAR_27 != VAR_28
     && (VAR_21->capture_pid >= 0 || VAR_21->playback_pid >= 0)) {
  FUNC_0(VAR_21->card->dev,
   "cannot change from %s speed to %s speed mode (capture PID = %d, playback PID = %d)\n",
   VAR_20[VAR_27],
   VAR_20[VAR_28],
   VAR_21->capture_pid, VAR_21->playback_pid);
  return -VAR_1;
 }

 VAR_21->control_register &= ~VAR_14;
 VAR_21->control_register |= VAR_25;
 FUNC_5(VAR_21, VAR_18, VAR_21->control_register);



 FUNC_4(VAR_21, VAR_22);

 if (VAR_0 == VAR_21->io_type && VAR_22 != VAR_24)
  FUNC_5(VAR_21, VAR_19, 0);

 VAR_21->system_sample_rate = VAR_22;

 if (VAR_22 <= 48000) {
  VAR_21->channel_map_in = VAR_21->channel_map_in_ss;
  VAR_21->channel_map_out = VAR_21->channel_map_out_ss;
  VAR_21->max_channels_in = VAR_21->ss_in_channels;
  VAR_21->max_channels_out = VAR_21->ss_out_channels;
  VAR_21->port_names_in = VAR_21->port_names_in_ss;
  VAR_21->port_names_out = VAR_21->port_names_out_ss;
 } else if (VAR_22 <= 96000) {
  VAR_21->channel_map_in = VAR_21->channel_map_in_ds;
  VAR_21->channel_map_out = VAR_21->channel_map_out_ds;
  VAR_21->max_channels_in = VAR_21->ds_in_channels;
  VAR_21->max_channels_out = VAR_21->ds_out_channels;
  VAR_21->port_names_in = VAR_21->port_names_in_ds;
  VAR_21->port_names_out = VAR_21->port_names_out_ds;
 } else {
  VAR_21->channel_map_in = VAR_21->channel_map_in_qs;
  VAR_21->channel_map_out = VAR_21->channel_map_out_qs;
  VAR_21->max_channels_in = VAR_21->qs_in_channels;
  VAR_21->max_channels_out = VAR_21->qs_out_channels;
  VAR_21->port_names_in = VAR_21->port_names_in_qs;
  VAR_21->port_names_out = VAR_21->port_names_out_qs;
 }

 if (VAR_26 != 0)
  return -1;

 return 0;
}
