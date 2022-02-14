
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {short* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,short*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 u32 VAR_4 = VAR_2->private_value;
 short VAR_5[VAR_0];

 FUNC_0(FUNC_1(VAR_4, VAR_5));
 VAR_3->value.integer.value[0] =
     VAR_5[0] / VAR_1;
 VAR_3->value.integer.value[1] =
     VAR_5[1] / VAR_1;

 return 0;
}
