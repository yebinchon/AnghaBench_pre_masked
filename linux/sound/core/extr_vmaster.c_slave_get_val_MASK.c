
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_4__ {int count; } ;
struct link_slave {int * vals; TYPE_1__ info; } ;


 int FUNC_0 (struct link_slave*) ;

__attribute__((used)) static int FUNC_1(struct link_slave *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;
 for (VAR_3 = 0; VAR_3 < VAR_0->info.count; VAR_3++)
  VAR_1->value.integer.value[VAR_3] = VAR_0->vals[VAR_3];
 return 0;
}
