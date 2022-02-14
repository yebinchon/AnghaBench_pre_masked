
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct dsa_port {unsigned int ageing_time; } ;
struct dsa_notifier_ageing_time_info {unsigned int ageing_time; struct switchdev_trans* trans; } ;
typedef int clock_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct dsa_port*,int ,struct dsa_notifier_ageing_time_info*) ;
 unsigned int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct switchdev_trans*) ;

int FUNC_4(struct dsa_port *VAR_1, clock_t VAR_2,
    struct switchdev_trans *VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = FUNC_2(VAR_4);
 struct dsa_notifier_ageing_time_info VAR_6 = {
  .ageing_time = VAR_5,
  .trans = VAR_3,
 };

 if (FUNC_3(VAR_3))
  return FUNC_1(VAR_1, VAR_0, &VAR_6);

 VAR_1->ageing_time = VAR_5;

 return FUNC_1(VAR_1, VAR_0, &VAR_6);
}
