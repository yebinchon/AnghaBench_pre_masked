
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_interface {int dummy; } ;
struct TYPE_4__ {int id; struct usb_mixer_interface* mixer; } ;
struct usb_mixer_elem_info {int control; int channels; TYPE_2__ head; } ;
struct snd_kcontrol_new {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; int private_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_mixer_elem_info*) ;
 struct usb_mixer_elem_info* FUNC_1 (int,int ) ;
 struct snd_kcontrol* FUNC_2 (struct snd_kcontrol_new const*,struct usb_mixer_elem_info*) ;
 int FUNC_3 (TYPE_2__*,struct snd_kcontrol*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_5(struct usb_mixer_interface *VAR_3,
     const struct snd_kcontrol_new *VAR_4,
     int VAR_5, int VAR_6, const char *VAR_7,
     struct snd_kcontrol **VAR_8)
{
 struct snd_kcontrol *VAR_9;
 struct usb_mixer_elem_info *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->head.mixer = VAR_3;
 VAR_10->control = VAR_5;
 VAR_10->head.id = VAR_5;
 VAR_10->channels = VAR_6;

 VAR_9 = FUNC_2(VAR_4, VAR_10);
 if (!VAR_9) {
  FUNC_0(VAR_10);
  return -VAR_0;
 }
 VAR_9->private_free = VAR_2;

 FUNC_4(VAR_9->id.name, VAR_7, sizeof(VAR_9->id.name));

 VAR_11 = FUNC_3(&VAR_10->head, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_8)
  *VAR_8 = VAR_9;

 return 0;
}
