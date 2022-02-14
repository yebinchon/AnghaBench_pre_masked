
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmsg {int tcm_parent; } ;
struct netdev_queue {int dummy; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int ) ;
 struct netdev_queue* FUNC_1 (struct Qdisc*,int ) ;

__attribute__((used)) static struct netdev_queue *FUNC_2(struct Qdisc *VAR_0,
         struct tcmsg *VAR_1)
{
 return FUNC_1(VAR_0, FUNC_0(VAR_1->tcm_parent));
}
