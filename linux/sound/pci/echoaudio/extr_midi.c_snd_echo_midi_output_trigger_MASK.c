
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct echoaudio {int tinuse; int timer; int midi_full; int lock; TYPE_2__* card; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct echoaudio* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int (*) (int *),int ) ;

__attribute__((used)) static void FUNC_6(struct snd_rawmidi_substream *VAR_0,
      int VAR_1)
{
 struct echoaudio *VAR_2 = VAR_0->rmidi->private_data;

 FUNC_1(VAR_2->card->dev, "snd_echo_midi_output_trigger(%d)\n", VAR_1);
 FUNC_3(&VAR_2->lock);
 if (VAR_1) {
  if (!VAR_2->tinuse) {
   FUNC_5(&VAR_2->timer, FUNC_2,
        0);
   VAR_2->tinuse = 1;
  }
 } else {
  if (VAR_2->tinuse) {
   VAR_2->tinuse = 0;
   FUNC_4(&VAR_2->lock);
   FUNC_0(&VAR_2->timer);
   FUNC_1(VAR_2->card->dev, "Timer removed\n");
   return;
  }
 }
 FUNC_4(&VAR_2->lock);

 if (VAR_1 && !VAR_2->midi_full)
  FUNC_2(&VAR_2->timer);
}
