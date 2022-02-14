
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_emu10k1_midi {int rx_enable; struct snd_emu10k1* emu; } ;
struct snd_emu10k1 {int dummy; } ;
struct TYPE_2__ {scalar_t__ private_data; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_emu10k1*,int ) ;
 int FUNC_2 (struct snd_emu10k1*,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct snd_emu10k1 *VAR_2;
 struct snd_emu10k1_midi *VAR_3 = (struct snd_emu10k1_midi *)VAR_0->rmidi->private_data;
 VAR_2 = VAR_3->emu;
 if (FUNC_0(!VAR_2))
  return;

 if (VAR_1)
  FUNC_2(VAR_2, VAR_3->rx_enable);
 else
  FUNC_1(VAR_2, VAR_3->rx_enable);
}
