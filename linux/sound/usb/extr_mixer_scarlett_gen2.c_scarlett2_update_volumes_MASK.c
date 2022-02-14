
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {struct scarlett2_mixer_data* private_data; } ;
struct scarlett2_usb_volume_status {int * buttons; scalar_t__ master_vol; } ;
struct scarlett2_ports {int* num; } ;
struct scarlett2_mixer_data {int* buttons; TYPE_1__* info; int master_vol; int * vol; scalar_t__* vol_sw_hw_switch; scalar_t__ vol_updated; } ;
struct TYPE_2__ {int button_count; struct scarlett2_ports* ports; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (struct usb_mixer_interface*,struct scarlett2_usb_volume_status*) ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_interface *VAR_3)
{
 struct scarlett2_mixer_data *VAR_4 = VAR_3->private_data;
 const struct scarlett2_ports *VAR_5 = VAR_4->info->ports;
 struct scarlett2_usb_volume_status VAR_6;
 int VAR_7 =
  VAR_5[VAR_1].num[VAR_0];
 int VAR_8, VAR_9;

 VAR_4->vol_updated = 0;

 VAR_8 = FUNC_1(VAR_3, &VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_4->master_vol = FUNC_0(
  VAR_6.master_vol + VAR_2,
  0, VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  if (VAR_4->vol_sw_hw_switch[VAR_9])
   VAR_4->vol[VAR_9] = VAR_4->master_vol;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4->info->button_count; VAR_9++)
  VAR_4->buttons[VAR_9] = !!VAR_6.buttons[VAR_9];

 return 0;
}
