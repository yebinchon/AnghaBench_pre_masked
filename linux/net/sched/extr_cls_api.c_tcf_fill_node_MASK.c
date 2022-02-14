
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tcmsg {scalar_t__ tcm_handle; int tcm_info; int tcm_block_index; int tcm_ifindex; int tcm_parent; scalar_t__ tcm__pad2; scalar_t__ tcm__pad1; int tcm_family; } ;
struct tcf_proto {TYPE_2__* ops; TYPE_1__* chain; int protocol; int prio; } ;
struct tcf_block {int index; } ;
struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct net {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_6__ {int ifindex; } ;
struct TYPE_5__ {scalar_t__ (* dump ) (struct net*,struct tcf_proto*,void*,struct sk_buff*,struct tcmsg*,int) ;int kind; } ;
struct TYPE_4__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 struct tcmsg* FUNC_3 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int,int,int ) ;
 int FUNC_5 (struct sk_buff*,unsigned char*) ;
 TYPE_3__* FUNC_6 (struct Qdisc*) ;
 unsigned char* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct net*,struct tcf_proto*,void*,struct sk_buff*,struct tcmsg*,int) ;

__attribute__((used)) static int FUNC_9(struct net *VAR_4, struct sk_buff *VAR_5,
    struct tcf_proto *VAR_6, struct tcf_block *VAR_7,
    struct Qdisc *VAR_8, u32 VAR_9, void *VAR_10,
    u32 VAR_11, u32 VAR_12, u16 VAR_13, int VAR_14,
    bool VAR_15)
{
 struct tcmsg *VAR_16;
 struct nlmsghdr *VAR_17;
 unsigned char *VAR_18 = FUNC_7(VAR_5);

 VAR_17 = FUNC_4(VAR_5, VAR_11, VAR_12, VAR_14, sizeof(*VAR_16), VAR_13);
 if (!VAR_17)
  goto out_nlmsg_trim;
 VAR_16 = FUNC_3(VAR_17);
 VAR_16->tcm_family = VAR_0;
 VAR_16->tcm__pad1 = 0;
 VAR_16->tcm__pad2 = 0;
 if (VAR_8) {
  VAR_16->tcm_ifindex = FUNC_6(VAR_8)->ifindex;
  VAR_16->tcm_parent = VAR_9;
 } else {
  VAR_16->tcm_ifindex = VAR_3;
  VAR_16->tcm_block_index = VAR_7->index;
 }
 VAR_16->tcm_info = FUNC_0(VAR_6->prio, VAR_6->protocol);
 if (FUNC_1(VAR_5, VAR_2, VAR_6->ops->kind))
  goto nla_put_failure;
 if (FUNC_2(VAR_5, VAR_1, VAR_6->chain->index))
  goto nla_put_failure;
 if (!VAR_10) {
  VAR_16->tcm_handle = 0;
 } else {
  if (VAR_6->ops->dump &&
      VAR_6->ops->dump(VAR_4, VAR_6, VAR_10, VAR_5, VAR_16, VAR_15) < 0)
   goto nla_put_failure;
 }
 VAR_17->nlmsg_len = FUNC_7(VAR_5) - VAR_18;
 return VAR_5->len;

out_nlmsg_trim:
nla_put_failure:
 FUNC_5(VAR_5, VAR_18);
 return -1;
}
