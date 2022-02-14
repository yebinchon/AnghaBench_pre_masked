
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {scalar_t__* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_4__ {int count; } ;
struct link_slave {scalar_t__* vals; TYPE_1__ info; } ;


 int FUNC_0 (struct link_slave*) ;
 int FUNC_1 (struct link_slave*,struct snd_ctl_elem_value*) ;
 struct link_slave* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct link_slave *VAR_2 = FUNC_2(VAR_0);
 int VAR_3, VAR_4, VAR_5 = 0;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_2->info.count; VAR_4++) {
  if (VAR_2->vals[VAR_4] != VAR_1->value.integer.value[VAR_4]) {
   VAR_5 = 1;
   VAR_2->vals[VAR_4] = VAR_1->value.integer.value[VAR_4];
  }
 }
 if (!VAR_5)
  return 0;
 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;
 return 1;
}
