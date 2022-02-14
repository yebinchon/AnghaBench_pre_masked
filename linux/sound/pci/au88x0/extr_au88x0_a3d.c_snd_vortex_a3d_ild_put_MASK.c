
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_kcontrol {TYPE_3__* private_data; } ;
struct TYPE_6__ {int* value; } ;
struct TYPE_7__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_8__ {int ild; } ;
typedef TYPE_3__ a3dsrc_t ;


 int FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int
FUNC_3(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 a3dsrc_t *VAR_2 = VAR_0->private_data;
 int VAR_3, VAR_4;

 VAR_3 = VAR_1->value.integer.value[0];
 VAR_4 = VAR_1->value.integer.value[1];
 FUNC_2(VAR_2->ild, VAR_3, VAR_4);

 FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_2, VAR_3, VAR_4);
 return 1;
}
