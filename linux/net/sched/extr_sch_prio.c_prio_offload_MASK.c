
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * qstats; int priomap; int bands; } ;
struct tc_prio_qopt_offload {int command; TYPE_1__ replace_params; int parent; int handle; } ;
struct tc_prio_qopt {int priomap; int bands; } ;
struct net_device {TYPE_2__* netdev_ops; } ;
struct Qdisc {int qstats; int parent; int handle; } ;
struct TYPE_4__ {int (* ndo_setup_tc ) (struct net_device*,int ,struct tc_prio_qopt_offload*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 struct net_device* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct net_device*,int ,struct tc_prio_qopt_offload*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_5, struct tc_prio_qopt *VAR_6)
{
 struct net_device *VAR_7 = FUNC_1(VAR_5);
 struct tc_prio_qopt_offload VAR_8 = {
  .handle = VAR_5->handle,
  .parent = VAR_5->parent,
 };

 if (!FUNC_3(VAR_7) || !VAR_7->netdev_ops->ndo_setup_tc)
  return -VAR_0;

 if (VAR_6) {
  VAR_8.command = VAR_3;
  VAR_8.replace_params.bands = VAR_6->bands;
  FUNC_0(&VAR_8.replace_params.priomap, VAR_6->priomap,
         VAR_2 + 1);
  VAR_8.replace_params.qstats = &VAR_5->qstats;
 } else {
  VAR_8.command = VAR_1;
 }

 return VAR_7->netdev_ops->ndo_setup_tc(VAR_7, VAR_4, &VAR_8);
}
