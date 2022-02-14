
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct hdspm_midi {int ie; int id; struct hdspm* hdspm; } ;
struct hdspm {int control_register; int lock; } ;
struct TYPE_2__ {struct hdspm_midi* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdspm*,int ,int) ;
 int FUNC_1 (struct hdspm*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct snd_rawmidi_substream *VAR_1, int VAR_2)
{
 struct hdspm *VAR_3;
 struct hdspm_midi *VAR_4;
 unsigned long VAR_5;

 VAR_4 = VAR_1->rmidi->private_data;
 VAR_3 = VAR_4->hdspm;

 FUNC_2 (&VAR_3->lock, VAR_5);
 if (VAR_2) {
  if (!(VAR_3->control_register & VAR_4->ie)) {
   FUNC_1 (VAR_3, VAR_4->id);
   VAR_3->control_register |= VAR_4->ie;
  }
 } else {
  VAR_3->control_register &= ~VAR_4->ie;
 }

 FUNC_0(VAR_3, VAR_0, VAR_3->control_register);
 FUNC_3 (&VAR_3->lock, VAR_5);
}
