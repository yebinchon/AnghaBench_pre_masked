
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct isight* private_data; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct isight {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct isight*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct isight *VAR_3 = VAR_1->private_data;
 __be32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_2->value.integer.value[0] = !VAR_4;

 return 0;
}
