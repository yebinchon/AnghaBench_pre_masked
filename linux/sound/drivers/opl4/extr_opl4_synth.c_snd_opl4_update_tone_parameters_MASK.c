
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_opl4 {int dummy; } ;
struct opl4_voice {TYPE_1__* sound; scalar_t__ number; } ;
struct TYPE_2__ {int reg_tremolo; int reg_release_correction; int reg_level_decay2; int reg_attack_decay1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_opl4*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_opl4 *VAR_4,
         struct opl4_voice *VAR_5)
{
 FUNC_0(VAR_4, VAR_0 + VAR_5->number,
         VAR_5->sound->reg_attack_decay1);
 FUNC_0(VAR_4, VAR_1 + VAR_5->number,
         VAR_5->sound->reg_level_decay2);
 FUNC_0(VAR_4, VAR_2 + VAR_5->number,
         VAR_5->sound->reg_release_correction);
 FUNC_0(VAR_4, VAR_3 + VAR_5->number,
         VAR_5->sound->reg_tremolo);
}
