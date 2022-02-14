
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_elem_info {int cmask; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_mixer_elem_info*,int) ;
 int FUNC_1 (struct usb_mixer_elem_info*,int) ;
 int FUNC_2 (struct usb_mixer_elem_info*,int,int,int*) ;
 int FUNC_3 (struct usb_mixer_elem_info*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct usb_mixer_elem_info *VAR_3 = VAR_1->private_data;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 if (VAR_3->cmask) {
  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (!(VAR_3->cmask & (1 << VAR_4)))
    continue;
   VAR_8 = FUNC_2(VAR_3, VAR_4 + 1, VAR_5, &VAR_7);
   if (VAR_8 < 0)
    return FUNC_0(VAR_3, VAR_8);
   VAR_6 = VAR_2->value.integer.value[VAR_5];
   VAR_6 = FUNC_1(VAR_3, VAR_6);
   if (VAR_7 != VAR_6) {
    FUNC_3(VAR_3, VAR_4 + 1, VAR_5, VAR_6);
    VAR_9 = 1;
   }
   VAR_5++;
  }
 } else {

  VAR_8 = FUNC_2(VAR_3, 0, 0, &VAR_7);
  if (VAR_8 < 0)
   return FUNC_0(VAR_3, VAR_8);
  VAR_6 = VAR_2->value.integer.value[0];
  VAR_6 = FUNC_1(VAR_3, VAR_6);
  if (VAR_6 != VAR_7) {
   FUNC_3(VAR_3, 0, 0, VAR_6);
   VAR_9 = 1;
  }
 }
 return VAR_9;
}
