
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_emu10k1_midi {int midi_mode; int open_lock; struct snd_rawmidi_substream* substream_output; struct snd_emu10k1* emu; } ;
struct snd_emu10k1 {int dummy; } ;
struct TYPE_2__ {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct snd_emu10k1*,struct snd_emu10k1_midi*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_6)
{
 struct snd_emu10k1 *VAR_7;
 struct snd_emu10k1_midi *VAR_8 = (struct snd_emu10k1_midi *)VAR_6->rmidi->private_data;
 unsigned long VAR_9;

 VAR_7 = VAR_8->emu;
 if (FUNC_0(!VAR_7))
  return -VAR_3;
 FUNC_2(&VAR_8->open_lock, VAR_9);
 VAR_8->midi_mode |= VAR_2;
 VAR_8->substream_output = VAR_6;
 if (!(VAR_8->midi_mode & VAR_1)) {
  FUNC_3(&VAR_8->open_lock, VAR_9);
  if (FUNC_1(VAR_7, VAR_8, VAR_5, 1))
   goto error_out;
  if (FUNC_1(VAR_7, VAR_8, VAR_4, 1))
   goto error_out;
 } else {
  FUNC_3(&VAR_8->open_lock, VAR_9);
 }
 return 0;

error_out:
 return -VAR_0;
}
