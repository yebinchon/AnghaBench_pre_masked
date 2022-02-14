
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int (* set ) (struct snd_ice1712*,int ) ;} ;


 TYPE_3__* VAR_0 ;
 struct snd_ice1712* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_ice1712*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_1->private_value;

 VAR_0[VAR_4].set(VAR_3, VAR_2->value.integer.value[0]);

 return 0;
}
