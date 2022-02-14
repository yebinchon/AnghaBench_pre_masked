
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_emu10k1_midi {int midi_mode; int open_lock; int * substream_output; int tx_enable; struct snd_emu10k1* emu; } ;
struct snd_emu10k1 {int dummy; } ;
struct TYPE_2__ {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_emu10k1*,int ) ;
 int FUNC_2 (struct snd_emu10k1*,struct snd_emu10k1_midi*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_rawmidi_substream *VAR_4)
{
 struct snd_emu10k1 *VAR_5;
 struct snd_emu10k1_midi *VAR_6 = (struct snd_emu10k1_midi *)VAR_4->rmidi->private_data;
 unsigned long VAR_7;
 int VAR_8 = 0;

 VAR_5 = VAR_6->emu;
 if (FUNC_0(!VAR_5))
  return -VAR_2;
 FUNC_3(&VAR_6->open_lock, VAR_7);
 FUNC_1(VAR_5, VAR_6->tx_enable);
 VAR_6->midi_mode &= ~VAR_1;
 VAR_6->substream_output = ((void*)0);
 if (!(VAR_6->midi_mode & VAR_0)) {
  FUNC_4(&VAR_6->open_lock, VAR_7);
  VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_3, 0);
 } else {
  FUNC_4(&VAR_6->open_lock, VAR_7);
 }
 return VAR_8;
}
