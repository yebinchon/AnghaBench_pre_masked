
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_block_ext_info {int dummy; } ;
struct tcf_block {int cb_lock; int nooffloaddevcnt; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {TYPE_2__* netdev_ops; } ;
struct Qdisc {TYPE_1__* dev_queue; } ;
struct TYPE_4__ {int ndo_setup_tc; } ;
struct TYPE_3__ {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct tcf_block*,struct net_device*,struct tcf_block_ext_info*,int ,struct netlink_ext_ack*) ;
 int FUNC_4 (struct tcf_block*,struct net_device*,struct tcf_block_ext_info*,int ,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_5 (struct tcf_block*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct tcf_block *VAR_2, struct Qdisc *VAR_3,
      struct tcf_block_ext_info *VAR_4,
      struct netlink_ext_ack *VAR_5)
{
 struct net_device *VAR_6 = VAR_3->dev_queue->dev;
 int VAR_7;

 FUNC_1(&VAR_2->cb_lock);
 if (!VAR_6->netdev_ops->ndo_setup_tc)
  goto no_offload_dev_inc;




 if (!FUNC_2(VAR_6) && FUNC_5(VAR_2)) {
  FUNC_0(VAR_5, "Bind to offloaded block failed as dev has offload disabled");
  VAR_7 = -VAR_0;
  goto err_unlock;
 }

 VAR_7 = FUNC_4(VAR_2, VAR_6, VAR_4, VAR_1, VAR_5);
 if (VAR_7 == -VAR_0)
  goto no_offload_dev_inc;
 if (VAR_7)
  goto err_unlock;

 FUNC_3(VAR_2, VAR_6, VAR_4, VAR_1, VAR_5);
 FUNC_6(&VAR_2->cb_lock);
 return 0;

no_offload_dev_inc:
 if (FUNC_5(VAR_2)) {
  VAR_7 = -VAR_0;
  goto err_unlock;
 }
 VAR_7 = 0;
 VAR_2->nooffloaddevcnt++;
 FUNC_3(VAR_2, VAR_6, VAR_4, VAR_1, VAR_5);
err_unlock:
 FUNC_6(&VAR_2->cb_lock);
 return VAR_7;
}
