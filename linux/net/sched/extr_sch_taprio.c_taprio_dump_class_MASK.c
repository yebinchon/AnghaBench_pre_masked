
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_handle; int tcm_parent; } ;
struct sk_buff {int dummy; } ;
struct netdev_queue {TYPE_1__* qdisc_sleeping; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 struct netdev_queue* FUNC_1 (struct Qdisc*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_1, unsigned long VAR_2,
        struct sk_buff *VAR_3, struct tcmsg *VAR_4)
{
 struct netdev_queue *VAR_5 = FUNC_1(VAR_1, VAR_2);

 VAR_4->tcm_parent = VAR_0;
 VAR_4->tcm_handle |= FUNC_0(VAR_2);
 VAR_4->tcm_info = VAR_5->qdisc_sleeping->handle;

 return 0;
}
