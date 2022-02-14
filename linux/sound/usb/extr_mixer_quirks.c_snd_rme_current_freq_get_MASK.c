
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef scalar_t__ u32 ;
struct usb_mixer_elem_list {TYPE_3__* mixer; } ;
struct snd_usb_audio {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {unsigned int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {struct snd_usb_audio* chip; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned long long const,scalar_t__) ;
 struct usb_mixer_elem_list* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_usb_audio*,int ,scalar_t__*) ;
 int FUNC_4 (struct snd_usb_audio*) ;
 int FUNC_5 (struct snd_usb_audio*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2,
        struct snd_ctl_elem_value *VAR_3)
{
 struct usb_mixer_elem_list *VAR_4 = FUNC_2(VAR_2);
 struct snd_usb_audio *VAR_5 = VAR_4->mixer->chip;
 u32 VAR_6;
 const u64 VAR_7 = 104857600000000ULL;
 u32 VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_5);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_3(VAR_5, VAR_1, &VAR_6);
 if (VAR_10 < 0)
  goto end;
 VAR_10 = FUNC_3(VAR_5, VAR_0, &VAR_8);
 if (VAR_10 < 0)
  goto end;
 VAR_9 = (VAR_8 == 0) ? 0 : FUNC_1(VAR_7, VAR_8);
 VAR_9 <<= FUNC_0(VAR_6);
 VAR_3->value.integer.value[0] = VAR_9;

end:
 FUNC_5(VAR_5);
 return VAR_10;
}
