
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int max; int min; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {TYPE_2__ value; int count; int type; } ;
struct TYPE_6__ {int max_val; int min_val; int count; int type; } ;
struct link_master {TYPE_3__ info; } ;


 int FUNC_0 (struct link_master*) ;
 struct link_master* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_info *VAR_1)
{
 struct link_master *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_1->type = VAR_2->info.type;
 VAR_1->count = VAR_2->info.count;
 VAR_1->value.integer.min = VAR_2->info.min_val;
 VAR_1->value.integer.max = VAR_2->info.max_val;
 return 0;
}
