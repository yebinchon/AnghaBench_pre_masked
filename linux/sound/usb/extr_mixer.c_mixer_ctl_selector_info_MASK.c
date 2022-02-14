
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_elem_info {int max; } ;
struct snd_kcontrol {scalar_t__ private_value; struct usb_mixer_elem_info* private_data; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_ctl_elem_info*,int,int ,char const**) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
       struct snd_ctl_elem_info *VAR_2)
{
 struct usb_mixer_elem_info *VAR_3 = VAR_1->private_data;
 const char **VAR_4 = (const char **)VAR_1->private_value;

 if (FUNC_0(!VAR_4))
  return -VAR_0;
 return FUNC_1(VAR_2, 1, VAR_3->max, VAR_4);
}
