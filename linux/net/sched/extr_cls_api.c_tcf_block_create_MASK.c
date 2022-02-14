
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int filter_chain_list; } ;
struct tcf_block {struct Qdisc* q; int index; struct net* net; int refcnt; TYPE_1__ chain0; int owner_list; int chain_list; int flow_block; int cb_lock; int proto_destroy_lock; int lock; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 struct tcf_block* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tcf_block* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct tcf_block*) ;

__attribute__((used)) static struct tcf_block *FUNC_9(struct net *VAR_2, struct Qdisc *VAR_3,
       u32 VAR_4,
       struct netlink_ext_ack *VAR_5)
{
 struct tcf_block *VAR_6;

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  FUNC_2(VAR_5, "Memory allocation for block failed");
  return FUNC_0(-VAR_0);
 }
 FUNC_6(&VAR_6->lock);
 FUNC_6(&VAR_6->proto_destroy_lock);
 FUNC_4(&VAR_6->cb_lock);
 FUNC_3(&VAR_6->flow_block);
 FUNC_1(&VAR_6->chain_list);
 FUNC_1(&VAR_6->owner_list);
 FUNC_1(&VAR_6->chain0.filter_chain_list);

 FUNC_7(&VAR_6->refcnt, 1);
 VAR_6->net = VAR_2;
 VAR_6->index = VAR_4;


 if (!FUNC_8(VAR_6))
  VAR_6->q = VAR_3;
 return VAR_6;
}
