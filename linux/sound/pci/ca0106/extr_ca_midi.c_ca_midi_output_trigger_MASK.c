
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_ca_midi {int midi_mode; int tx_enable; int (* interrupt_disable ) (struct snd_ca_midi*,int ) ;int (* interrupt_enable ) (struct snd_ca_midi*,int ) ;int output_lock; int dev_id; } ;
struct TYPE_2__ {struct snd_ca_midi* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_ca_midi*) ;
 int FUNC_1 (struct snd_ca_midi*,unsigned char) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct snd_ca_midi*,int ) ;
 int FUNC_7 (struct snd_ca_midi*,int ) ;

__attribute__((used)) static void FUNC_8(struct snd_rawmidi_substream *VAR_1, int VAR_2)
{
 struct snd_ca_midi *VAR_3 = VAR_1->rmidi->private_data;
 unsigned long VAR_4;

 if (FUNC_2(!VAR_3->dev_id))
  return;

 if (VAR_2) {
  int VAR_5 = 4;
  unsigned char VAR_6;

  FUNC_4(&VAR_3->output_lock, VAR_4);


  while (VAR_5 > 0) {
   if (FUNC_0(VAR_3)) {
    if (!(VAR_3->midi_mode & VAR_0) ||
        FUNC_3(VAR_1, &VAR_6, 1) != 1) {

     FUNC_5(&VAR_3->output_lock, VAR_4);
     return;
    }
    FUNC_1(VAR_3, VAR_6);
    VAR_5--;
   } else {
    break;
   }
  }

  FUNC_5(&VAR_3->output_lock, VAR_4);
  VAR_3->interrupt_enable(VAR_3,VAR_3->tx_enable);

 } else {
  VAR_3->interrupt_disable(VAR_3,VAR_3->tx_enable);
 }
}
