
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct aw2 {int saa7146; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct aw2* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
           struct snd_ctl_elem_value
           *VAR_3)
{
 struct aw2 *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = 0;
 int VAR_6 =
     FUNC_0(&VAR_4->saa7146);

 if (((VAR_3->value.integer.value[0] == VAR_1)
      && !VAR_6)
     || ((VAR_3->value.integer.value[0] == VAR_0)
  && VAR_6)) {
  FUNC_1(&VAR_4->saa7146, !VAR_6);
  VAR_5 = 1;
 }
 return VAR_5;
}
