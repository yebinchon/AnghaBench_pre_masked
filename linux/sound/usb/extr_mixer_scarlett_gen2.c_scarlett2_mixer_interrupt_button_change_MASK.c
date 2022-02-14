
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_mixer_interface {TYPE_2__* chip; struct scarlett2_mixer_data* private_data; } ;
struct scarlett2_mixer_data {int vol_updated; TYPE_3__** button_ctls; TYPE_1__* info; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int card; } ;
struct TYPE_4__ {int button_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(
 struct usb_mixer_interface *VAR_1)
{
 struct scarlett2_mixer_data *VAR_2 = VAR_1->private_data;
 int VAR_3;

 VAR_2->vol_updated = 1;

 for (VAR_3 = 0; VAR_3 < VAR_2->info->button_count; VAR_3++)
  FUNC_0(VAR_1->chip->card, VAR_0,
          &VAR_2->button_ctls[VAR_3]->id);
}
