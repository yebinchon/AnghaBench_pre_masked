
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct emu10k1x_midi {int rx_enable; struct emu10k1x* emu; } ;
struct emu10k1x {int dummy; } ;
struct TYPE_2__ {struct emu10k1x_midi* private_data; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct emu10k1x*,int ) ;
 int FUNC_2 (struct emu10k1x*,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_rawmidi_substream *VAR_0, int VAR_1)
{
 struct emu10k1x *VAR_2;
 struct emu10k1x_midi *VAR_3 = VAR_0->rmidi->private_data;
 VAR_2 = VAR_3->emu;
 if (FUNC_0(!VAR_2))
  return;

 if (VAR_1)
  FUNC_2(VAR_2, VAR_3->rx_enable);
 else
  FUNC_1(VAR_2, VAR_3->rx_enable);
}
