
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;
struct usb_mixer_elem_list {int kctl; } ;
struct snd_kcontrol_new {int private_value; int name; int info; int put; int get; int access; int iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_mixer_interface*,int ,int ,struct snd_kcontrol_new*,struct usb_mixer_elem_list**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_mixer_interface*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct usb_mixer_interface *VAR_6,
           const struct snd_kcontrol_new *VAR_7,
           unsigned int VAR_8)
{
 int VAR_9, VAR_10 = 0;
 struct snd_kcontrol_new VAR_11 = {
  .iface = VAR_1,
  .access = VAR_0,
  .get = VAR_3,
  .put = VAR_4,
  .info = VAR_2,
 };

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  struct usb_mixer_elem_list *VAR_12;

  VAR_11.name = VAR_7[VAR_9].name;
  VAR_11.private_value = VAR_7[VAR_9].private_value;

  VAR_10 = FUNC_0(VAR_6, 0,
       VAR_5,
       &VAR_11, &VAR_12);
  if (VAR_10 < 0)
   break;
  FUNC_1(VAR_6, VAR_12->kctl);
 }

 return VAR_10;
}
