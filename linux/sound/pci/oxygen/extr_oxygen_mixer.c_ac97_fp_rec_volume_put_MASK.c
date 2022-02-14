
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*,int,int ) ;
 int FUNC_3 (struct oxygen*,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct oxygen *VAR_3 = VAR_1->private_data;
 u16 VAR_4, VAR_5;
 int VAR_6;

 FUNC_0(&VAR_3->mutex);
 VAR_4 = FUNC_2(VAR_3, 1, VAR_0);
 VAR_5 = VAR_4 & ~0x0707;
 VAR_5 = VAR_5 | (VAR_2->value.integer.value[0] & 7);
 VAR_5 = VAR_5 | ((VAR_2->value.integer.value[0] & 7) << 8);
 VAR_6 = VAR_5 != VAR_4;
 if (VAR_6)
  FUNC_3(VAR_3, 1, VAR_0, VAR_5);
 FUNC_1(&VAR_3->mutex);
 return VAR_6;
}
