
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int gain; } ;
struct snd_harmony {int mixer_lock; TYPE_1__ st; } ;
struct TYPE_5__ {int* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 int VAR_0 ;
 struct snd_harmony* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct snd_harmony *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 FUNC_1(&VAR_3->mixer_lock);

 VAR_4 = (VAR_3->st.gain >> VAR_0) & 1;
 VAR_2->value.enumerated.item[0] = VAR_4;

 FUNC_2(&VAR_3->mixer_lock);

 return 0;
}
