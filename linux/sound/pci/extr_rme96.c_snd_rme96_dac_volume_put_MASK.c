
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct rme96 {unsigned int* vol; int lock; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct rme96*) ;
 int FUNC_1 (struct rme96*) ;
 struct rme96* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct rme96*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct rme96 *VAR_3 = FUNC_2(VAR_1);
        int VAR_4 = 0;
 unsigned int VAR_5, VAR_6;


 if (!FUNC_1(VAR_3))
  return -VAR_0;
 VAR_6 = FUNC_0(VAR_3);
 FUNC_4(&VAR_3->lock);
 VAR_5 = VAR_2->value.integer.value[0];
 if (VAR_5 != VAR_3->vol[0] && VAR_5 <= VAR_6) {
  VAR_3->vol[0] = VAR_5;
  VAR_4 = 1;
 }
 VAR_5 = VAR_2->value.integer.value[1];
 if (VAR_5 != VAR_3->vol[1] && VAR_5 <= VAR_6) {
  VAR_3->vol[1] = VAR_5;
  VAR_4 = 1;
 }
 if (VAR_4)
  FUNC_3(VAR_3);
 FUNC_5(&VAR_3->lock);

        return VAR_4;
}
