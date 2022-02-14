
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_elem_info {struct usb_mixer_elem_info* private_data; } ;
struct snd_kcontrol {struct usb_mixer_elem_info* private_data; } ;


 int FUNC_0 (struct usb_mixer_elem_info*) ;

__attribute__((used)) static void FUNC_1(struct snd_kcontrol *VAR_0)
{
 struct usb_mixer_elem_info *VAR_1 = VAR_0->private_data;

 if (VAR_1)
  FUNC_0(VAR_1->private_data);
 FUNC_0(VAR_1);
 VAR_0->private_data = ((void*)0);
}
