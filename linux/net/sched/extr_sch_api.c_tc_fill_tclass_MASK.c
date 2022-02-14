
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tcmsg {scalar_t__ tcm_info; int tcm_handle; int tcm_parent; int tcm_ifindex; scalar_t__ tcm__pad2; scalar_t__ tcm__pad1; int tcm_family; } ;
struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_len; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc_class_ops {scalar_t__ (* dump ) (struct Qdisc*,unsigned long,struct sk_buff*,struct tcmsg*) ;scalar_t__ (* dump_stats ) (struct Qdisc*,unsigned long,struct gnet_dump*) ;} ;
struct Qdisc {TYPE_1__* ops; int handle; } ;
struct TYPE_4__ {int ifindex; } ;
struct TYPE_3__ {int id; struct Qdisc_class_ops* cl_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct gnet_dump*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,int ,int *,struct gnet_dump*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 struct tcmsg* FUNC_4 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int,int,int ) ;
 int FUNC_6 (struct sk_buff*,unsigned char*) ;
 TYPE_2__* FUNC_7 (struct Qdisc*) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct Qdisc*,unsigned long,struct sk_buff*,struct tcmsg*) ;
 scalar_t__ FUNC_10 (struct Qdisc*,unsigned long,struct gnet_dump*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_6, struct Qdisc *VAR_7,
     unsigned long VAR_8,
     u32 VAR_9, u32 VAR_10, u16 VAR_11, int VAR_12)
{
 struct tcmsg *VAR_13;
 struct nlmsghdr *VAR_14;
 unsigned char *VAR_15 = FUNC_8(VAR_6);
 struct gnet_dump VAR_16;
 const struct Qdisc_class_ops *VAR_17 = VAR_7->ops->cl_ops;

 FUNC_0();
 VAR_14 = FUNC_5(VAR_6, VAR_9, VAR_10, VAR_12, sizeof(*VAR_13), VAR_11);
 if (!VAR_14)
  goto out_nlmsg_trim;
 VAR_13 = FUNC_4(VAR_14);
 VAR_13->tcm_family = VAR_0;
 VAR_13->tcm__pad1 = 0;
 VAR_13->tcm__pad2 = 0;
 VAR_13->tcm_ifindex = FUNC_7(VAR_7)->ifindex;
 VAR_13->tcm_parent = VAR_7->handle;
 VAR_13->tcm_handle = VAR_7->handle;
 VAR_13->tcm_info = 0;
 if (FUNC_3(VAR_6, VAR_1, VAR_7->ops->id))
  goto nla_put_failure;
 if (VAR_17->dump && VAR_17->dump(VAR_7, VAR_8, VAR_6, VAR_13) < 0)
  goto nla_put_failure;

 if (FUNC_2(VAR_6, VAR_4, VAR_3, VAR_5,
      ((void*)0), &VAR_16, VAR_2) < 0)
  goto nla_put_failure;

 if (VAR_17->dump_stats && VAR_17->dump_stats(VAR_7, VAR_8, &VAR_16) < 0)
  goto nla_put_failure;

 if (FUNC_1(&VAR_16) < 0)
  goto nla_put_failure;

 VAR_14->nlmsg_len = FUNC_8(VAR_6) - VAR_15;
 return VAR_6->len;

out_nlmsg_trim:
nla_put_failure:
 FUNC_6(VAR_6, VAR_15);
 return -1;
}
