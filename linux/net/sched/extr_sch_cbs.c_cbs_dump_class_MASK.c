
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_handle; } ;
struct sk_buff {int dummy; } ;
struct cbs_sched_data {TYPE_1__* qdisc; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct cbs_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_1, unsigned long VAR_2,
     struct sk_buff *VAR_3, struct tcmsg *VAR_4)
{
 struct cbs_sched_data *VAR_5 = FUNC_1(VAR_1);

 if (VAR_2 != 1 || !VAR_5->qdisc)
  return -VAR_0;

 VAR_4->tcm_handle |= FUNC_0(1);
 VAR_4->tcm_info = VAR_5->qdisc->handle;

 return 0;
}
