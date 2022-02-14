
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct qdisc_watchdog {struct Qdisc* qdisc; TYPE_1__ timer; } ;
struct Qdisc {int dummy; } ;
typedef int clockid_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;

void FUNC_1(struct qdisc_watchdog *VAR_2, struct Qdisc *VAR_3,
     clockid_t VAR_4)
{
 FUNC_0(&VAR_2->timer, VAR_4, VAR_0);
 VAR_2->timer.function = VAR_1;
 VAR_2->qdisc = VAR_3;
}
