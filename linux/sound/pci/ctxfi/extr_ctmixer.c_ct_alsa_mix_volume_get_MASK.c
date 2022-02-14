
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct ct_mixer {struct amixer** amixers; } ;
struct ct_atc {scalar_t__ mixer; } ;
struct amixer {TYPE_1__* ops; } ;
typedef enum CT_AMIXER_CTL { ____Placeholder_CT_AMIXER_CTL } CT_AMIXER_CTL ;
struct TYPE_4__ {int (* get_scale ) (struct amixer*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct ct_atc* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct amixer*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
      struct snd_ctl_elem_value *VAR_4)
{
 struct ct_atc *VAR_5 = FUNC_1(VAR_3);
 enum CT_AMIXER_CTL VAR_6 = FUNC_0(VAR_3->private_value);
 struct amixer *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  VAR_7 = ((struct ct_mixer *)VAR_5->mixer)->
      amixers[VAR_6*VAR_0+VAR_8];
  VAR_9 = VAR_7->ops->get_scale(VAR_7) / VAR_2;
  if (VAR_9 < 0)
   VAR_9 = 0;
  else if (VAR_9 > VAR_1)
   VAR_9 = VAR_1;
  VAR_4->value.integer.value[VAR_8] = VAR_9;
 }

 return 0;
}
