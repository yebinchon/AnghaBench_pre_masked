
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_mixer_elem_list {TYPE_1__* mixer; } ;
struct snd_usb_audio {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {struct snd_usb_audio* chip; } ;


 int VAR_0 ;
 struct usb_mixer_elem_list* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_usb_audio*,int ,int *) ;
 int FUNC_2 (struct snd_usb_audio*) ;
 int FUNC_3 (struct snd_usb_audio*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
          u32 *VAR_2)
{
 struct usb_mixer_elem_list *VAR_3 = FUNC_0(VAR_1);
 struct snd_usb_audio *VAR_4 = VAR_3->mixer->chip;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_2);
 FUNC_3(VAR_4);
 return VAR_5;
}
