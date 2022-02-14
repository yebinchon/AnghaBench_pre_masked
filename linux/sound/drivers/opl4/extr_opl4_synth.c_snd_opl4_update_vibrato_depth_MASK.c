
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_opl4 {int dummy; } ;
struct opl4_voice {int reg_lfo_vibrato; scalar_t__ number; TYPE_2__* sound; TYPE_1__* chan; } ;
struct TYPE_4__ {int vibrato; } ;
struct TYPE_3__ {int* control; scalar_t__ drum_channel; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_opl4*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct snd_opl4 *VAR_3,
       struct opl4_voice *VAR_4)
{
 int VAR_5;

 if (VAR_4->chan->drum_channel)
  return;
 VAR_5 = (7 - VAR_4->sound->vibrato)
  * (VAR_4->chan->control[VAR_0] & 0x7f);
 VAR_5 = (VAR_5 >> 7) + VAR_4->sound->vibrato;
 VAR_4->reg_lfo_vibrato &= ~VAR_2;
 VAR_4->reg_lfo_vibrato |= VAR_5 & VAR_2;
 FUNC_0(VAR_3, VAR_1 + VAR_4->number,
         VAR_4->reg_lfo_vibrato);
}
