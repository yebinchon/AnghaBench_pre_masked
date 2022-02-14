
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_elem_info {int channels; struct scarlett_mixer_elem_enum_info* private_data; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct scarlett_mixer_elem_enum_info {scalar_t__ names; int len; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int ,int ,char const* const*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_info *VAR_1)
{
 struct usb_mixer_elem_info *VAR_2 = VAR_0->private_data;
 struct scarlett_mixer_elem_enum_info *VAR_3 = VAR_2->private_data;

 return FUNC_0(VAR_1, VAR_2->channels, VAR_3->len,
     (const char * const *)VAR_3->names);
}
