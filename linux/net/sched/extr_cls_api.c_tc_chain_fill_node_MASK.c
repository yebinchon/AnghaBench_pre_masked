
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tcmsg {int tcm_block_index; int tcm_ifindex; int tcm_parent; scalar_t__ tcm_handle; scalar_t__ tcm__pad2; scalar_t__ tcm__pad1; int tcm_family; } ;
struct tcf_proto_ops {scalar_t__ (* tmplt_dump ) (struct sk_buff*,struct net*,void*) ;int kind; } ;
struct tcf_block {int index; TYPE_2__* q; } ;
struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int handle; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 struct tcmsg* FUNC_2 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_3 (struct sk_buff*,int ,int ,int,int,int ) ;
 int FUNC_4 (struct sk_buff*,unsigned char*) ;
 TYPE_1__* FUNC_5 (TYPE_2__*) ;
 unsigned char* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,struct net*,void*) ;

__attribute__((used)) static int FUNC_8(const struct tcf_proto_ops *VAR_5,
         void *VAR_6, u32 VAR_7,
         struct net *VAR_8, struct sk_buff *VAR_9,
         struct tcf_block *VAR_10,
         u32 VAR_11, u32 VAR_12, u16 VAR_13, int VAR_14)
{
 unsigned char *VAR_15 = FUNC_6(VAR_9);
 const struct tcf_proto_ops *VAR_16;
 struct nlmsghdr *VAR_17;
 struct tcmsg *VAR_18;
 void *VAR_19;

 VAR_16 = VAR_5;
 VAR_19 = VAR_6;

 VAR_17 = FUNC_3(VAR_9, VAR_11, VAR_12, VAR_14, sizeof(*VAR_18), VAR_13);
 if (!VAR_17)
  goto out_nlmsg_trim;
 VAR_18 = FUNC_2(VAR_17);
 VAR_18->tcm_family = VAR_0;
 VAR_18->tcm__pad1 = 0;
 VAR_18->tcm__pad2 = 0;
 VAR_18->tcm_handle = 0;
 if (VAR_10->q) {
  VAR_18->tcm_ifindex = FUNC_5(VAR_10->q)->ifindex;
  VAR_18->tcm_parent = VAR_10->q->handle;
 } else {
  VAR_18->tcm_ifindex = VAR_4;
  VAR_18->tcm_block_index = VAR_10->index;
 }

 if (FUNC_1(VAR_9, VAR_2, VAR_7))
  goto nla_put_failure;

 if (VAR_16) {
  if (FUNC_0(VAR_9, VAR_3, VAR_16->kind))
   goto nla_put_failure;
  if (VAR_16->tmplt_dump(VAR_9, VAR_8, VAR_19) < 0)
   goto nla_put_failure;
 }

 VAR_17->nlmsg_len = FUNC_6(VAR_9) - VAR_15;
 return VAR_9->len;

out_nlmsg_trim:
nla_put_failure:
 FUNC_4(VAR_9, VAR_15);
 return -VAR_1;
}
