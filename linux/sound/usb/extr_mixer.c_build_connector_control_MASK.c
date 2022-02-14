
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_mixer_interface {scalar_t__ protocol; int chip; } ;
struct usb_mixer_elem_info {int channels; int max; int head; scalar_t__ min; int val_type; int control; } ;
struct usb_audio_term {int id; } ;
struct TYPE_2__ {int name; } ;
struct snd_kcontrol {int private_free; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_mixer_interface*,struct usb_audio_term*,int,int ,int) ;
 struct usb_mixer_elem_info* FUNC_1 (int,int ) ;
 struct snd_kcontrol* FUNC_2 (int *,struct usb_mixer_elem_info*) ;
 int FUNC_3 (int *,struct snd_kcontrol*) ;
 int VAR_5 ;
 int FUNC_4 (int *,struct usb_mixer_interface*,int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_6 ;
 int FUNC_6 (struct usb_mixer_elem_info*) ;

__attribute__((used)) static void FUNC_7(struct usb_mixer_interface *VAR_7,
        struct usb_audio_term *VAR_8, bool VAR_9)
{
 struct snd_kcontrol *VAR_10;
 struct usb_mixer_elem_info *VAR_11;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_0);
 if (!VAR_11)
  return;
 FUNC_4(&VAR_11->head, VAR_7, VAR_8->id);
 if (VAR_7->protocol == VAR_3)
  VAR_11->control = VAR_1;
 else
  VAR_11->control = VAR_2;

 VAR_11->val_type = VAR_4;
 VAR_11->channels = 1;
 VAR_11->min = 0;
 VAR_11->max = 1;
 VAR_10 = FUNC_2(&VAR_6, VAR_11);
 if (!VAR_10) {
  FUNC_5(VAR_7->chip, "cannot malloc kcontrol\n");
  FUNC_6(VAR_11);
  return;
 }
 FUNC_0(VAR_7, VAR_8, VAR_9, VAR_10->id.name,
       sizeof(VAR_10->id.name));
 VAR_10->private_free = VAR_5;
 FUNC_3(&VAR_11->head, VAR_10);
}
