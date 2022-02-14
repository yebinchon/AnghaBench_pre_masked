
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
struct usb_mixer_elem_info {TYPE_1__ head; struct snd_us16x08_eq_store* private_data; } ;
struct snd_us16x08_eq_store {int*** val; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_6__ {int* value; } ;
struct TYPE_7__ {TYPE_2__ integer; } ;
struct TYPE_8__ {int index; } ;
struct snd_ctl_elem_value {TYPE_3__ value; TYPE_4__ id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 int VAR_2;
 struct usb_mixer_elem_info *VAR_3 = VAR_0->private_data;
 struct snd_us16x08_eq_store *VAR_4 = VAR_3->private_data;
 int VAR_5 = VAR_1->id.index;
 int VAR_6 = FUNC_0(VAR_3->head.id) - 1;
 int VAR_7 = FUNC_1(VAR_3->head.id);

 VAR_2 = VAR_4->val[VAR_6][VAR_7][VAR_5];

 VAR_1->value.integer.value[0] = VAR_2;

 return 0;
}
