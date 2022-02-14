
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_list_lock_key; int qdisc_xmit_lock_key; int qdisc_running_key; int qdisc_tx_busylock_key; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 FUNC_0(&VAR_0->qdisc_tx_busylock_key);
 FUNC_0(&VAR_0->qdisc_running_key);
 FUNC_0(&VAR_0->qdisc_xmit_lock_key);
 FUNC_0(&VAR_0->addr_list_lock_key);
}
