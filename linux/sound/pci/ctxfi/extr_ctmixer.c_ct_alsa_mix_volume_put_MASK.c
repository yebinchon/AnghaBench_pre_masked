
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct ct_mixer {struct amixer** amixers; } ;
struct ct_atc {struct ct_mixer* mixer; } ;
struct amixer {TYPE_3__* ops; } ;
typedef enum CT_AMIXER_CTL { ____Placeholder_CT_AMIXER_CTL } CT_AMIXER_CTL ;
struct TYPE_6__ {int (* get_scale ) (struct amixer*) ;int (* commit_write ) (struct amixer*) ;int (* set_scale ) (struct amixer*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct ct_atc* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct amixer*) ;
 int FUNC_3 (struct amixer*,int) ;
 int FUNC_4 (struct amixer*) ;
 int FUNC_5 (struct amixer*,int) ;
 int FUNC_6 (struct amixer*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_5,
      struct snd_ctl_elem_value *VAR_6)
{
 struct ct_atc *VAR_7 = FUNC_1(VAR_5);
 struct ct_mixer *VAR_8 = VAR_7->mixer;
 enum CT_AMIXER_CTL VAR_9 = FUNC_0(VAR_5->private_value);
 struct amixer *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = 0;

 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  VAR_13 = VAR_6->value.integer.value[VAR_11];
  if (VAR_13 < 0)
   VAR_13 = 0;
  else if (VAR_13 > VAR_3)
   VAR_13 = VAR_3;
  VAR_13 *= VAR_4;
  VAR_10 = VAR_8->amixers[VAR_9*VAR_2+VAR_11];
  VAR_14 = VAR_10->ops->get_scale(VAR_10);
  if (VAR_13 != VAR_14) {
   VAR_10->ops->set_scale(VAR_10, VAR_13);
   VAR_10->ops->commit_write(VAR_10);
   VAR_15 = 1;

   if (VAR_0 == VAR_9 || VAR_1 == VAR_9) {
    for (VAR_12 = 1; VAR_12 < 4; VAR_12++) {
     VAR_10 = VAR_8->
      amixers[(VAR_9+VAR_12)*VAR_2+VAR_11];
     VAR_10->ops->set_scale(VAR_10, VAR_13);
     VAR_10->ops->commit_write(VAR_10);
    }
   }
  }
 }

 return VAR_15;
}
