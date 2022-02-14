
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_block_ext_info {int dummy; } ;
struct tcf_block {int cb_lock; int nooffloaddevcnt; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct Qdisc {TYPE_2__* dev_queue; } ;
struct TYPE_4__ {struct net_device* dev; } ;
struct TYPE_3__ {int ndo_setup_tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tcf_block*,struct net_device*,struct tcf_block_ext_info*,int ,int *) ;
 int FUNC_3 (struct tcf_block*,struct net_device*,struct tcf_block_ext_info*,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct tcf_block *VAR_2, struct Qdisc *VAR_3,
         struct tcf_block_ext_info *VAR_4)
{
 struct net_device *VAR_5 = VAR_3->dev_queue->dev;
 int VAR_6;

 FUNC_1(&VAR_2->cb_lock);
 FUNC_2(VAR_2, VAR_5, VAR_4, VAR_1, ((void*)0));

 if (!VAR_5->netdev_ops->ndo_setup_tc)
  goto no_offload_dev_dec;
 VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_4, VAR_1, ((void*)0));
 if (VAR_6 == -VAR_0)
  goto no_offload_dev_dec;
 FUNC_4(&VAR_2->cb_lock);
 return;

no_offload_dev_dec:
 FUNC_0(VAR_2->nooffloaddevcnt-- == 0);
 FUNC_4(&VAR_2->cb_lock);
}
