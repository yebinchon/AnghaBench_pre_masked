
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct onyx {int mutex; scalar_t__ analog_locked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct onyx*,int ,int*) ;
 int FUNC_3 (struct onyx*,int ,int) ;
 struct onyx* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_4,
 struct snd_ctl_elem_value *VAR_5)
{
 struct onyx *VAR_6 = FUNC_4(VAR_4);
 u8 VAR_7 = 0, VAR_8 = 0;
 int VAR_9 = -VAR_0;

 FUNC_0(&VAR_6->mutex);
 if (VAR_6->analog_locked)
  goto out_unlock;

 FUNC_2(VAR_6, VAR_3, &VAR_7);
 VAR_8 = VAR_7;
 VAR_8 &= ~(VAR_2 | VAR_1);
 if (!VAR_5->value.integer.value[0])
  VAR_8 |= VAR_1;
 if (!VAR_5->value.integer.value[1])
  VAR_8 |= VAR_2;
 VAR_9 = FUNC_3(VAR_6, VAR_3, VAR_8);

 out_unlock:
 FUNC_1(&VAR_6->mutex);

 return !VAR_9 ? (VAR_7 != VAR_8) : VAR_9;
}
