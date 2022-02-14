
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct snd_ac97*,int ,int ,int ) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_5,
          struct snd_ctl_elem_value *VAR_6)
{
 struct snd_ac97 *VAR_7 = FUNC_1(VAR_5);
 int VAR_8;
 int VAR_9;
 int VAR_10 = (VAR_7->regs[VAR_4] & VAR_0) != 0;

 VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_2,
     VAR_6->value.integer.value[0] != 0
        ? VAR_2 : 0);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_9 = FUNC_0(VAR_7, VAR_3, VAR_1,
        (VAR_6->value.integer.value[0] != 0
         || VAR_10)
        ? VAR_1 : 0);
 if (VAR_9 < 0)
  return VAR_9;

 return (VAR_8 > 0 || VAR_9 > 0) ? 1 : 0;
}
