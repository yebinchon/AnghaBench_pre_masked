
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
struct usb_mixer_elem_info {TYPE_3__ head; struct snd_us16x08_comp_store* private_data; } ;
struct snd_us16x08_comp_store {int ** val; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_8__ {int * value; } ;
struct TYPE_5__ {TYPE_4__ integer; } ;
struct TYPE_6__ {int index; } ;
struct snd_ctl_elem_value {TYPE_1__ value; TYPE_2__ id; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct usb_mixer_elem_info *VAR_2 = VAR_0->private_data;
 struct snd_us16x08_comp_store *VAR_3 = VAR_2->private_data;
 int VAR_4 = VAR_1->id.index;
 int VAR_5 = FUNC_0(VAR_2->head.id);

 VAR_1->value.integer.value[0] = VAR_3->val[VAR_5][VAR_4];

 return 0;
}
