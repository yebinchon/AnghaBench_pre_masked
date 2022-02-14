
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htb_sched {int dummy; } ;
struct htb_class {scalar_t__ prio_activity; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct htb_sched*,struct htb_class*) ;

__attribute__((used)) static inline void FUNC_2(struct htb_sched *VAR_0, struct htb_class *VAR_1)
{
 FUNC_0(!VAR_1->prio_activity);

 FUNC_1(VAR_0, VAR_1);
 VAR_1->prio_activity = 0;
}
