
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct qdisc_watchdog {scalar_t__ last_expires; int timer; int qdisc; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct qdisc_watchdog *VAR_2, u64 VAR_3)
{
 if (FUNC_3(VAR_1,
       &FUNC_2(VAR_2->qdisc)->state))
  return;

 if (VAR_2->last_expires == VAR_3)
  return;

 VAR_2->last_expires = VAR_3;
 FUNC_0(&VAR_2->timer,
        FUNC_1(VAR_3),
        VAR_0);
}
