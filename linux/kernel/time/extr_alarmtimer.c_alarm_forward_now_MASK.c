
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct alarm_base {int (* gettime ) () ;} ;
struct alarm {size_t type; } ;
typedef int ktime_t ;


 struct alarm_base* VAR_0 ;
 int FUNC_0 (struct alarm*,int ,int ) ;
 int FUNC_1 () ;

u64 FUNC_2(struct alarm *VAR_1, ktime_t VAR_2)
{
 struct alarm_base *VAR_3 = &VAR_0[VAR_1->type];

 return FUNC_0(VAR_1, VAR_3->gettime(), VAR_2);
}
