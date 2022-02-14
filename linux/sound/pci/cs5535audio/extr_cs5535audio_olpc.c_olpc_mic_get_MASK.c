
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int dummy; } ;
struct cs5535audio {struct snd_ac97* ac97; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ac97*,int ) ;
 struct cs5535audio* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct cs5535audio *VAR_4 = FUNC_1(VAR_2);
 struct snd_ac97 *VAR_5 = VAR_4->ac97;
 int VAR_6;

 VAR_6 = (FUNC_0(VAR_5, VAR_0) >> VAR_1) & 0x1;
 VAR_3->value.integer.value[0] = VAR_6 ? 0 : 1;
 return 0;
}
