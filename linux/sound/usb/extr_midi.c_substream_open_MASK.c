
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_midi {int disc_rwsem; int mutex; int card; struct snd_kcontrol* roland_load_ctl; scalar_t__* opened; int list; scalar_t__ disconnected; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_kcontrol {int id; TYPE_2__* vd; } ;
struct TYPE_4__ {int access; } ;
struct TYPE_3__ {struct snd_usb_midi* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct snd_usb_midi*) ;

__attribute__((used)) static int FUNC_8(struct snd_rawmidi_substream *VAR_3, int VAR_4,
     int VAR_5)
{
 struct snd_usb_midi *VAR_6 = VAR_3->rmidi->private_data;
 struct snd_kcontrol *VAR_7;

 FUNC_0(&VAR_6->disc_rwsem);
 if (VAR_6->disconnected) {
  FUNC_6(&VAR_6->disc_rwsem);
  return VAR_5 ? -VAR_0 : 0;
 }

 FUNC_1(&VAR_6->mutex);
 if (VAR_5) {
  if (!VAR_6->opened[0] && !VAR_6->opened[1]) {
   if (VAR_6->roland_load_ctl) {
    VAR_7 = VAR_6->roland_load_ctl;
    VAR_7->vd[0].access |=
     VAR_1;
    FUNC_3(VAR_6->card,
           VAR_2, &VAR_7->id);
    FUNC_7(VAR_6);
   }
  }
  VAR_6->opened[VAR_4]++;
  if (VAR_6->opened[1])
   FUNC_4(&VAR_6->list);
 } else {
  VAR_6->opened[VAR_4]--;
  if (!VAR_6->opened[1])
   FUNC_5(&VAR_6->list);
  if (!VAR_6->opened[0] && !VAR_6->opened[1]) {
   if (VAR_6->roland_load_ctl) {
    VAR_7 = VAR_6->roland_load_ctl;
    VAR_7->vd[0].access &=
     ~VAR_1;
    FUNC_3(VAR_6->card,
           VAR_2, &VAR_7->id);
   }
  }
 }
 FUNC_2(&VAR_6->mutex);
 FUNC_6(&VAR_6->disc_rwsem);
 return 0;
}
