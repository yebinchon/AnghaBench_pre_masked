
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_mixer_elem_resume_func_t ;
struct usb_mixer_interface {int dummy; } ;
struct usb_mixer_elem_list {int id; int resume; struct usb_mixer_interface* mixer; } ;
struct snd_kcontrol_new {int dummy; } ;
struct snd_kcontrol {int private_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_mixer_elem_list*) ;
 struct usb_mixer_elem_list* FUNC_1 (int,int ) ;
 struct snd_kcontrol* FUNC_2 (struct snd_kcontrol_new const*,struct usb_mixer_elem_list*) ;
 int FUNC_3 (struct usb_mixer_elem_list*,struct snd_kcontrol*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct usb_mixer_interface *VAR_3,
          int VAR_4,
          usb_mixer_elem_resume_func_t VAR_5,
          const struct snd_kcontrol_new *VAR_6,
          struct usb_mixer_elem_list **VAR_7)
{
 struct usb_mixer_elem_list *VAR_8;
 struct snd_kcontrol *VAR_9;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 if (VAR_7)
  *VAR_7 = VAR_8;
 VAR_8->mixer = VAR_3;
 VAR_8->id = VAR_4;
 VAR_8->resume = VAR_5;
 VAR_9 = FUNC_2(VAR_6, VAR_8);
 if (!VAR_9) {
  FUNC_0(VAR_8);
  return -VAR_0;
 }
 VAR_9->private_free = VAR_2;
 return FUNC_3(VAR_8, VAR_9);
}
