
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct dsa_switch {unsigned int ageing_time_min; unsigned int ageing_time_max; TYPE_1__* ops; } ;
struct dsa_notifier_ageing_time_info {unsigned int ageing_time; struct switchdev_trans* trans; } ;
struct TYPE_2__ {int (* set_ageing_time ) (struct dsa_switch*,unsigned int) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct dsa_switch*,unsigned int) ;
 int FUNC_1 (struct dsa_switch*,unsigned int) ;
 scalar_t__ FUNC_2 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_1,
      struct dsa_notifier_ageing_time_info *VAR_2)
{
 unsigned int VAR_3 = VAR_2->ageing_time;
 struct switchdev_trans *VAR_4 = VAR_2->trans;

 if (FUNC_2(VAR_4)) {
  if (VAR_1->ageing_time_min && VAR_3 < VAR_1->ageing_time_min)
   return -VAR_0;
  if (VAR_1->ageing_time_max && VAR_3 > VAR_1->ageing_time_max)
   return -VAR_0;
  return 0;
 }


 VAR_3 = FUNC_0(VAR_1, VAR_3);

 if (VAR_1->ops->set_ageing_time)
  return VAR_1->ops->set_ageing_time(VAR_1, VAR_3);

 return 0;
}
