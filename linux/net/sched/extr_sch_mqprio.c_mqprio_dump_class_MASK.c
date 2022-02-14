
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_handle; scalar_t__ tcm_info; int tcm_parent; } ;
struct sk_buff {int dummy; } ;
struct netdev_queue {TYPE_1__* qdisc_sleeping; } ;
struct net_device {int dummy; } ;
struct Qdisc {int handle; } ;
struct TYPE_2__ {scalar_t__ handle; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 struct netdev_queue* FUNC_3 (struct Qdisc*,unsigned long) ;
 int FUNC_4 (struct net_device*,unsigned long) ;
 struct net_device* FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_2, unsigned long VAR_3,
    struct sk_buff *VAR_4, struct tcmsg *VAR_5)
{
 if (VAR_3 < VAR_0) {
  struct netdev_queue *VAR_6 = FUNC_3(VAR_2, VAR_3);
  struct net_device *VAR_7 = FUNC_5(VAR_2);
  int VAR_8 = FUNC_4(VAR_7, VAR_3 - 1);

  VAR_5->tcm_parent = (VAR_8 < 0) ? 0 :
   FUNC_1(FUNC_0(VAR_2->handle),
      FUNC_2(VAR_8 + VAR_0));
  VAR_5->tcm_info = VAR_6->qdisc_sleeping->handle;
 } else {
  VAR_5->tcm_parent = VAR_1;
  VAR_5->tcm_info = 0;
 }
 VAR_5->tcm_handle |= FUNC_2(VAR_3);
 return 0;
}
