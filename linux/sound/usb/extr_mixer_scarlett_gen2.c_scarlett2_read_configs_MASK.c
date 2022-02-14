
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct usb_mixer_interface {struct scarlett2_mixer_data* private_data; } ;
struct scarlett2_usb_volume_status {int master_vol; int* sw_vol; int * buttons; scalar_t__* sw_hw_switch; } ;
struct scarlett2_ports {int* num; } ;
struct scarlett2_mixer_data {int* vol_sw_hw_switch; int* vol; int* buttons; void* master_vol; void** pad_switch; void** level_switch; struct scarlett2_device_info* info; } ;
struct scarlett2_device_info {int level_input_count; int pad_input_count; int button_count; scalar_t__ line_out_hw_vol; struct scarlett2_ports* ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct usb_mixer_interface*,int ,int,void**) ;
 int FUNC_2 (struct usb_mixer_interface*,struct scarlett2_usb_volume_status*) ;

__attribute__((used)) static int FUNC_3(struct usb_mixer_interface *VAR_7)
{
 struct scarlett2_mixer_data *VAR_8 = VAR_7->private_data;
 const struct scarlett2_device_info *VAR_9 = VAR_8->info;
 const struct scarlett2_ports *VAR_10 = VAR_9->ports;
 int VAR_11 =
  VAR_10[VAR_5].num[VAR_4];
 u8 VAR_12[VAR_2];
 u8 VAR_13[VAR_3];
 struct scarlett2_usb_volume_status VAR_14;
 int VAR_15, VAR_16;

 if (VAR_9->level_input_count) {
  VAR_15 = FUNC_1(
   VAR_7,
   VAR_0,
   VAR_9->level_input_count,
   VAR_12);
  if (VAR_15 < 0)
   return VAR_15;
  for (VAR_16 = 0; VAR_16 < VAR_9->level_input_count; VAR_16++)
   VAR_8->level_switch[VAR_16] = VAR_12[VAR_16];
 }

 if (VAR_9->pad_input_count) {
  VAR_15 = FUNC_1(
   VAR_7,
   VAR_1,
   VAR_9->pad_input_count,
   VAR_13);
  if (VAR_15 < 0)
   return VAR_15;
  for (VAR_16 = 0; VAR_16 < VAR_9->pad_input_count; VAR_16++)
   VAR_8->pad_switch[VAR_16] = VAR_13[VAR_16];
 }

 VAR_15 = FUNC_2(VAR_7, &VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_8->master_vol = FUNC_0(
  VAR_14.master_vol + VAR_6,
  0, VAR_6);

 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
  int VAR_17;

  VAR_8->vol_sw_hw_switch[VAR_16] =
   VAR_9->line_out_hw_vol
    && VAR_14.sw_hw_switch[VAR_16];

  VAR_17 = VAR_8->vol_sw_hw_switch[VAR_16]
      ? VAR_14.master_vol
      : VAR_14.sw_vol[VAR_16];
  VAR_17 = FUNC_0(VAR_17 + VAR_6,
          0, VAR_6);
  VAR_8->vol[VAR_16] = VAR_17;
 }

 for (VAR_16 = 0; VAR_16 < VAR_9->button_count; VAR_16++)
  VAR_8->buttons[VAR_16] = !!VAR_14.buttons[VAR_16];

 return 0;
}
