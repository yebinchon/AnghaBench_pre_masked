
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_interface {struct scarlett2_mixer_data* private_data; } ;
struct scarlett2_ports {int* num; } ;
struct scarlett2_mixer_data {TYPE_2__** button_ctls; struct scarlett2_device_info* info; TYPE_2__** vol_ctls; scalar_t__* vol_sw_hw_switch; TYPE_2__* master_vol_ctl; } ;
struct scarlett2_device_info {char** line_out_descrs; int button_count; scalar_t__ line_out_hw_vol; struct scarlett2_ports* ports; } ;
typedef int s ;
struct TYPE_4__ {TYPE_1__* vd; } ;
struct TYPE_3__ {int access; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_mixer_interface*,int *,int,int,char*,TYPE_2__**) ;
 int VAR_4 ;
 char** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_interface *VAR_9)
{
 struct scarlett2_mixer_data *VAR_10 = VAR_9->private_data;
 const struct scarlett2_device_info *VAR_11 = VAR_10->info;
 const struct scarlett2_ports *VAR_12 = VAR_11->ports;
 int VAR_13 =
  VAR_12[VAR_1].num[VAR_0];
 int VAR_14, VAR_15;
 char VAR_16[VAR_3];


 if (VAR_11->line_out_hw_vol) {
  FUNC_1(VAR_16, sizeof(VAR_16), "Master HW Playback Volume");
  VAR_14 = FUNC_0(VAR_9,
         &VAR_7,
         0, 1, VAR_16, &VAR_10->master_vol_ctl);
  if (VAR_14 < 0)
   return VAR_14;
 }


 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {


  if (VAR_11->line_out_descrs[VAR_15])
   FUNC_1(VAR_16, sizeof(VAR_16),
     "Line %02d (%s) Playback Volume",
     VAR_15 + 1, VAR_11->line_out_descrs[VAR_15]);
  else
   FUNC_1(VAR_16, sizeof(VAR_16),
     "Line %02d Playback Volume",
     VAR_15 + 1);
  VAR_14 = FUNC_0(VAR_9,
         &VAR_6,
         VAR_15, 1, VAR_16, &VAR_10->vol_ctls[VAR_15]);
  if (VAR_14 < 0)
   return VAR_14;


  if (VAR_10->vol_sw_hw_switch[VAR_15])
   VAR_10->vol_ctls[VAR_15]->vd[0].access &=
    ~VAR_2;


  if (VAR_11->line_out_hw_vol) {
   FUNC_1(VAR_16, sizeof(VAR_16),
     "Line Out %02d Volume Control Playback Enum",
     VAR_15 + 1);
   VAR_14 = FUNC_0(VAR_9,
          &VAR_8,
          VAR_15, 1, VAR_16, ((void*)0));
   if (VAR_14 < 0)
    return VAR_14;
  }
 }


 for (VAR_15 = 0; VAR_15 < VAR_10->info->button_count; VAR_15++) {
  VAR_14 = FUNC_0(VAR_9, &VAR_4,
         VAR_15, 1, VAR_5[VAR_15],
         &VAR_10->button_ctls[VAR_15]);
  if (VAR_14 < 0)
   return VAR_14;
 }

 return 0;
}
