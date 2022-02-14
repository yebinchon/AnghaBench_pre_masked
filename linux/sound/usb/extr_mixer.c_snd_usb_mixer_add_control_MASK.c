
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_interface {struct usb_mixer_elem_list** id_elems; TYPE_1__* chip; } ;
struct usb_mixer_elem_list {size_t id; struct usb_mixer_elem_list* next_id_elem; struct snd_kcontrol* kctl; struct usb_mixer_interface* mixer; } ;
struct TYPE_4__ {int index; } ;
struct snd_kcontrol {TYPE_2__ id; } ;
struct TYPE_3__ {int card; } ;


 int FUNC_0 (int ,struct snd_kcontrol*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;

int FUNC_3(struct usb_mixer_elem_list *VAR_0,
         struct snd_kcontrol *VAR_1)
{
 struct usb_mixer_interface *VAR_2 = VAR_0->mixer;
 int VAR_3;

 while (FUNC_1(VAR_2->chip->card, &VAR_1->id))
  VAR_1->id.index++;
 VAR_3 = FUNC_0(VAR_2->chip->card, VAR_1);
 if (VAR_3 < 0) {
  FUNC_2(VAR_2->chip, "cannot add control (err = %d)\n",
         VAR_3);
  return VAR_3;
 }
 VAR_0->kctl = VAR_1;
 VAR_0->next_id_elem = VAR_2->id_elems[VAR_0->id];
 VAR_2->id_elems[VAR_0->id] = VAR_0;
 return 0;
}
