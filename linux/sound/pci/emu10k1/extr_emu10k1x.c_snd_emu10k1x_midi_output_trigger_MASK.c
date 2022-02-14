
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct emu10k1x_midi {int midi_mode; int tx_enable; int output_lock; struct emu10k1x* emu; } ;
struct emu10k1x {int dummy; } ;
struct TYPE_2__ {struct emu10k1x_midi* private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct emu10k1x*,struct emu10k1x_midi*) ;
 int FUNC_1 (struct emu10k1x*,struct emu10k1x_midi*,unsigned char) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct emu10k1x*,int ) ;
 int FUNC_4 (struct emu10k1x*,int ) ;
 int FUNC_5 (struct snd_rawmidi_substream*,unsigned char*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct snd_rawmidi_substream *VAR_1, int VAR_2)
{
 struct emu10k1x *VAR_3;
 struct emu10k1x_midi *VAR_4 = VAR_1->rmidi->private_data;
 unsigned long VAR_5;

 VAR_3 = VAR_4->emu;
 if (FUNC_2(!VAR_3))
  return;

 if (VAR_2) {
  int VAR_6 = 4;
  unsigned char VAR_7;


  FUNC_6(&VAR_4->output_lock, VAR_5);
  while (VAR_6 > 0) {
   if (FUNC_0(VAR_3, VAR_4)) {
    if (!(VAR_4->midi_mode & VAR_0) ||
        FUNC_5(VAR_1, &VAR_7, 1) != 1) {

     FUNC_7(&VAR_4->output_lock, VAR_5);
     return;
    }
    FUNC_1(VAR_3, VAR_4, VAR_7);
    VAR_6--;
   } else {
    break;
   }
  }
  FUNC_7(&VAR_4->output_lock, VAR_5);
  FUNC_4(VAR_3, VAR_4->tx_enable);
 } else {
  FUNC_3(VAR_3, VAR_4->tx_enable);
 }
}
