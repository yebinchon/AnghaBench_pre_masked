
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1 {TYPE_1__* card_capabilities; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ emu_model; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ctl_elem_info*,int,int,int ) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
      struct snd_ctl_elem_info *VAR_4)
{
 struct snd_emu10k1 *VAR_5 = FUNC_1(VAR_3);

 if (VAR_5->card_capabilities->emu_model == VAR_0)
  return FUNC_0(VAR_4, 1, 49, VAR_2);
 else
  return FUNC_0(VAR_4, 1, 53, VAR_1);
}
