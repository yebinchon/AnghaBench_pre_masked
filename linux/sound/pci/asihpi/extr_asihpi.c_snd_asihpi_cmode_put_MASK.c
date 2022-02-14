
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {scalar_t__* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 int VAR_2;
 u32 VAR_3 = VAR_0->private_value;

 VAR_2 = 1;

 FUNC_1(FUNC_0(VAR_3,
      VAR_1->value.enumerated.item[0] + 1));
 return VAR_2;
}
