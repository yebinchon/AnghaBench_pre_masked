
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct rme32 {int lock; } ;


 struct rme32* FUNC_0 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_1 (struct rme32*) ;
 int FUNC_2 (struct rme32*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct rme32 *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->value.enumerated.item[0] % 3;
 FUNC_3(&VAR_2->lock);
 VAR_4 = VAR_3 != (unsigned int)FUNC_1(VAR_2);
 FUNC_2(VAR_2, VAR_3);
 FUNC_4(&VAR_2->lock);
 return VAR_4;
}
