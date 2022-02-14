
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_opl4 {int dummy; } ;
struct opl4_voice {int reg_misc; scalar_t__ number; TYPE_2__* chan; TYPE_1__* sound; } ;
struct TYPE_4__ {int* control; int drum_channel; } ;
struct TYPE_3__ {int panpot; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_opl4*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct snd_opl4 *VAR_3, struct opl4_voice *VAR_4)
{
 int VAR_5 = VAR_4->sound->panpot;

 if (!VAR_4->chan->drum_channel)
  VAR_5 += (VAR_4->chan->control[VAR_0] - 0x40) >> 3;
 if (VAR_5 < -7)
  VAR_5 = -7;
 else if (VAR_5 > 7)
  VAR_5 = 7;
 VAR_4->reg_misc = (VAR_4->reg_misc & ~VAR_1)
  | (VAR_5 & VAR_1);
 FUNC_0(VAR_3, VAR_2 + VAR_4->number, VAR_4->reg_misc);
}
