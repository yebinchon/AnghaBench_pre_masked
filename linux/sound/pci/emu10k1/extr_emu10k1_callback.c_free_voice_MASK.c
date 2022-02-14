
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emux_voice {size_t ch; TYPE_1__* emu; struct snd_emu10k1* hw; } ;
struct snd_emu10k1 {int * voices; } ;
struct TYPE_2__ {int num_voices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_emu10k1*,int ,size_t,int) ;
 int FUNC_1 (struct snd_emu10k1*,int *) ;

__attribute__((used)) static void
FUNC_2(struct snd_emux_voice *VAR_5)
{
 struct snd_emu10k1 *VAR_6;

 VAR_6 = VAR_5->hw;




 if (VAR_6 && (VAR_5->ch >= 0)) {
  FUNC_0(VAR_6, VAR_3, VAR_5->ch, 0xff00);
  FUNC_0(VAR_6, VAR_1, VAR_5->ch, 0x807f | VAR_2);

  FUNC_0(VAR_6, VAR_4, VAR_5->ch, 0xffff);
  FUNC_0(VAR_6, VAR_0, VAR_5->ch, 0xffff);
  FUNC_1(VAR_6, &VAR_6->voices[VAR_5->ch]);
  VAR_5->emu->num_voices--;
  VAR_5->ch = -1;
 }
}
