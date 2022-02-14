
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_mixer_interface {TYPE_3__* chip; struct scarlett2_mixer_data* private_data; } ;
struct scarlett2_ports {int* num; } ;
struct scarlett2_mixer_data {int vol_updated; TYPE_4__** vol_ctls; int * vol_sw_hw_switch; TYPE_2__* master_vol_ctl; TYPE_1__* info; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_7__ {int card; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {struct scarlett2_ports* ports; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(
 struct usb_mixer_interface *VAR_3)
{
 struct scarlett2_mixer_data *VAR_4 = VAR_3->private_data;
 const struct scarlett2_ports *VAR_5 = VAR_4->info->ports;
 int VAR_6 =
  VAR_5[VAR_1].num[VAR_0];
 int VAR_7;

 VAR_4->vol_updated = 1;

 FUNC_0(VAR_3->chip->card, VAR_2,
         &VAR_4->master_vol_ctl->id);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (!VAR_4->vol_sw_hw_switch[VAR_7])
   continue;
  FUNC_0(VAR_3->chip->card, VAR_2,
          &VAR_4->vol_ctls[VAR_7]->id);
 }
}
