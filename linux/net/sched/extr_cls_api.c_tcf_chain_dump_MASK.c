
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct tcmsg {int tcm_info; } ;
struct tcf_proto {scalar_t__ prio; scalar_t__ protocol; TYPE_1__* ops; } ;
struct TYPE_6__ {int skip; int count; int cookie; scalar_t__ stop; int fn; } ;
struct tcf_dump_args {TYPE_2__ w; int parent; struct Qdisc* q; struct tcf_block* block; struct netlink_callback* cb; struct sk_buff* skb; } ;
struct tcf_chain {struct tcf_block* block; } ;
struct tcf_block {int dummy; } ;
struct sk_buff {int sk; } ;
struct netlink_callback {int* args; TYPE_3__* nlh; int skb; } ;
struct net {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_8__ {int portid; } ;
struct TYPE_7__ {int nlmsg_seq; } ;
struct TYPE_5__ {int (* walk ) (struct tcf_proto*,TYPE_2__*,int) ;} ;


 TYPE_4__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct tcf_proto* FUNC_3 (struct tcf_chain*,struct tcf_proto*) ;
 int FUNC_4 (int*,int ,int) ;
 struct tcmsg* FUNC_5 (TYPE_3__*) ;
 struct net* FUNC_6 (int ) ;
 int FUNC_7 (struct tcf_proto*,TYPE_2__*,int) ;
 scalar_t__ FUNC_8 (struct net*,struct sk_buff*,struct tcf_proto*,struct tcf_block*,struct Qdisc*,int ,int *,int ,int ,int ,int ,int) ;
 int VAR_2 ;
 int FUNC_9 (struct tcf_proto*,int,int *) ;

__attribute__((used)) static bool FUNC_10(struct tcf_chain *VAR_3, struct Qdisc *VAR_4, u32 VAR_5,
      struct sk_buff *VAR_6, struct netlink_callback *VAR_7,
      long VAR_8, long *VAR_9)
{
 struct net *VAR_10 = FUNC_6(VAR_6->sk);
 struct tcf_block *VAR_11 = VAR_3->block;
 struct tcmsg *VAR_12 = FUNC_5(VAR_7->nlh);
 struct tcf_proto *VAR_13, *VAR_14;
 struct tcf_dump_args VAR_15;

 for (VAR_13 = FUNC_3(VAR_3, ((void*)0));
      VAR_13;
      VAR_14 = VAR_13,
       VAR_13 = FUNC_3(VAR_3, VAR_13),
       FUNC_9(VAR_14, 1, ((void*)0)),
       (*VAR_9)++) {
  if (*VAR_9 < VAR_8)
   continue;
  if (FUNC_1(VAR_12->tcm_info) &&
      FUNC_1(VAR_12->tcm_info) != VAR_13->prio)
   continue;
  if (FUNC_2(VAR_12->tcm_info) &&
      FUNC_2(VAR_12->tcm_info) != VAR_13->protocol)
   continue;
  if (*VAR_9 > VAR_8)
   FUNC_4(&VAR_7->args[1], 0,
          sizeof(VAR_7->args) - sizeof(VAR_7->args[0]));
  if (VAR_7->args[1] == 0) {
   if (FUNC_8(VAR_10, VAR_6, VAR_13, VAR_11, VAR_4, VAR_5, ((void*)0),
       FUNC_0(VAR_7->skb).portid,
       VAR_7->nlh->nlmsg_seq, VAR_0,
       VAR_1, 1) <= 0)
    goto errout;
   VAR_7->args[1] = 1;
  }
  if (!VAR_13->ops->walk)
   continue;
  VAR_15.w.fn = VAR_2;
  VAR_15.skb = VAR_6;
  VAR_15.cb = VAR_7;
  VAR_15.block = VAR_11;
  VAR_15.q = VAR_4;
  VAR_15.parent = VAR_5;
  VAR_15.w.stop = 0;
  VAR_15.w.skip = VAR_7->args[1] - 1;
  VAR_15.w.count = 0;
  VAR_15.w.cookie = VAR_7->args[2];
  VAR_13->ops->walk(VAR_13, &VAR_15.w, 1);
  VAR_7->args[2] = VAR_15.w.cookie;
  VAR_7->args[1] = VAR_15.w.count + 1;
  if (VAR_15.w.stop)
   goto errout;
 }
 return 1;

errout:
 FUNC_9(VAR_13, 1, ((void*)0));
 return 0;
}
