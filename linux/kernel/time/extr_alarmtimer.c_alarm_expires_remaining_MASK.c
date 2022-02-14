
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct alarm_base {int (* gettime ) () ;} ;
struct TYPE_2__ {int expires; } ;
struct alarm {size_t type; TYPE_1__ node; } ;
typedef int ktime_t ;


 struct alarm_base* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

ktime_t FUNC_2(const struct alarm *VAR_1)
{
 struct alarm_base *VAR_2 = &VAR_0[VAR_1->type];
 return FUNC_0(VAR_1->node.expires, VAR_2->gettime());
}
