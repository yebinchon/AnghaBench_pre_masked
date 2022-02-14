
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* mixer; } ;
struct usb_mixer_elem_info {scalar_t__ val_type; scalar_t__ dBmin; scalar_t__ dBmax; int max; int min; int res; TYPE_4__ head; scalar_t__ initialized; int channels; } ;
struct snd_kcontrol {int id; TYPE_1__* vd; struct usb_mixer_elem_info* private_data; } ;
struct TYPE_11__ {int max; scalar_t__ min; } ;
struct TYPE_12__ {TYPE_5__ integer; } ;
struct snd_ctl_elem_info {TYPE_6__ value; int count; int type; } ;
struct TYPE_9__ {TYPE_2__* chip; } ;
struct TYPE_8__ {int card; } ;
struct TYPE_7__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct usb_mixer_elem_info*,int ,struct snd_kcontrol*) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_7,
      struct snd_ctl_elem_info *VAR_8)
{
 struct usb_mixer_elem_info *VAR_9 = VAR_7->private_data;

 if (VAR_9->val_type == VAR_5 ||
     VAR_9->val_type == VAR_6)
  VAR_8->type = VAR_2;
 else
  VAR_8->type = VAR_3;
 VAR_8->count = VAR_9->channels;
 if (VAR_9->val_type == VAR_5 ||
     VAR_9->val_type == VAR_6) {
  VAR_8->value.integer.min = 0;
  VAR_8->value.integer.max = 1;
 } else {
  if (!VAR_9->initialized) {
   FUNC_0(VAR_9, 0, VAR_7);
   if (VAR_9->initialized && VAR_9->dBmin >= VAR_9->dBmax) {
    VAR_7->vd[0].access &=
     ~(VAR_1 |
       VAR_0);
    FUNC_1(VAR_9->head.mixer->chip->card,
            VAR_4,
            &VAR_7->id);
   }
  }
  VAR_8->value.integer.min = 0;
  VAR_8->value.integer.max =
   (VAR_9->max - VAR_9->min + VAR_9->res - 1) / VAR_9->res;
 }
 return 0;
}
