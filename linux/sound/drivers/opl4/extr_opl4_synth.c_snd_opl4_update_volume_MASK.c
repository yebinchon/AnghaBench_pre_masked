
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_opl4 {TYPE_1__* chset; } ;
struct opl4_voice {size_t velocity; int level_direct; scalar_t__ number; TYPE_3__* sound; TYPE_2__* chan; } ;
struct TYPE_6__ {int tone_attenuate; int volume_factor; } ;
struct TYPE_5__ {int gm_volume; int gm_expression; } ;
struct TYPE_4__ {int gs_master_volume; } ;


 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (struct snd_opl4*,scalar_t__,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct snd_opl4 *VAR_3, struct opl4_voice *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_4->sound->tone_attenuate;
 VAR_5 += VAR_1[VAR_3->chset->gs_master_volume & 0x7f];
 VAR_5 += VAR_1[VAR_4->chan->gm_volume & 0x7f];
 VAR_5 += VAR_1[VAR_4->chan->gm_expression & 0x7f];
 VAR_5 += VAR_1[VAR_4->velocity];
 VAR_5 = 0x7f - (0x7f - VAR_5) * (VAR_4->sound->volume_factor) / 0xfe - VAR_2;
 if (VAR_5 < 0)
  VAR_5 = 0;
 else if (VAR_5 > 0x7e)
  VAR_5 = 0x7e;
 FUNC_0(VAR_3, VAR_0 + VAR_4->number,
         (VAR_5 << 1) | VAR_4->level_direct);
 VAR_4->level_direct = 0;
}
