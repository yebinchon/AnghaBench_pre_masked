
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_7__ {unsigned int* output_source; } ;
struct snd_emu10k1 {TYPE_4__* card_capabilities; TYPE_3__ emu1010; } ;
struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_8__ {scalar_t__ emu_model; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (struct snd_emu10k1*,int ,int ) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_6,
                                 struct snd_ctl_elem_value *VAR_7)
{
 struct snd_emu10k1 *VAR_8 = FUNC_1(VAR_6);
 unsigned int VAR_9;
 unsigned int VAR_10;

 VAR_9 = VAR_7->value.enumerated.item[0];
 if (VAR_9 >= 53 ||
     (VAR_8->card_capabilities->emu_model == VAR_1 &&
      VAR_9 >= 49))
  return -VAR_0;
 VAR_10 = (VAR_6->private_value) & 0xff;

 if (VAR_10 >= 24 ||
     (VAR_8->card_capabilities->emu_model == VAR_1 &&
      VAR_10 >= 18))
  return -VAR_0;
 if (VAR_8->emu1010.output_source[VAR_10] == VAR_9)
  return 0;
 VAR_8->emu1010.output_source[VAR_10] = VAR_9;
 if (VAR_8->card_capabilities->emu_model == VAR_1)
  FUNC_0(VAR_8,
   VAR_4[VAR_10], VAR_5[VAR_9]);
 else
  FUNC_0(VAR_8,
   VAR_2[VAR_10], VAR_3[VAR_9]);
 return 1;
}
