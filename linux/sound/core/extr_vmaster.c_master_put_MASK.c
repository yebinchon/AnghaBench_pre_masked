
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct link_master {int val; int hook_private_data; int (* hook ) (int ,int) ;} ;


 int FUNC_0 (struct link_master*) ;
 struct link_master* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct link_master*,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct link_master *VAR_2 = FUNC_1(VAR_0);
 int VAR_3, VAR_4, VAR_5;
 bool VAR_6;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_6 = VAR_3;
 VAR_5 = VAR_2->val;
 VAR_4 = VAR_1->value.integer.value[0];
 if (VAR_4 == VAR_5)
  return 0;

 VAR_3 = FUNC_3(VAR_2, VAR_5, VAR_4);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_2->hook && !VAR_6)
  VAR_2->hook(VAR_2->hook_private_data, VAR_2->val);
 return 1;
}
