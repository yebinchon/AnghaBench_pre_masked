
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcmsg {int tcm_handle; } ;
struct tcf_proto {int root; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct net_device {int name; } ;
struct net {int dummy; } ;
struct fw_head {int mask; } ;
struct TYPE_2__ {int classid; } ;
struct fw_filter {int exts; scalar_t__ ifindex; TYPE_1__ res; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 struct fw_head* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_4, struct tcf_proto *VAR_5, void *VAR_6,
     struct sk_buff *VAR_7, struct tcmsg *VAR_8, bool VAR_9)
{
 struct fw_head *VAR_10 = FUNC_6(VAR_5->root);
 struct fw_filter *VAR_11 = VAR_6;
 struct nlattr *VAR_12;

 if (VAR_11 == ((void*)0))
  return VAR_7->len;

 VAR_8->tcm_handle = VAR_11->id;

 if (!VAR_11->res.classid && !FUNC_9(&VAR_11->exts))
  return VAR_7->len;

 VAR_12 = FUNC_3(VAR_7, VAR_3);
 if (VAR_12 == ((void*)0))
  goto nla_put_failure;

 if (VAR_11->res.classid &&
     FUNC_5(VAR_7, VAR_0, VAR_11->res.classid))
  goto nla_put_failure;
 if (VAR_11->ifindex) {
  struct net_device *VAR_13;
  VAR_13 = FUNC_0(VAR_4, VAR_11->ifindex);
  if (VAR_13 && FUNC_4(VAR_7, VAR_1, VAR_13->name))
   goto nla_put_failure;
 }
 if (VAR_10->mask != 0xFFFFFFFF &&
     FUNC_5(VAR_7, VAR_2, VAR_10->mask))
  goto nla_put_failure;

 if (FUNC_7(VAR_7, &VAR_11->exts) < 0)
  goto nla_put_failure;

 FUNC_2(VAR_7, VAR_12);

 if (FUNC_8(VAR_7, &VAR_11->exts) < 0)
  goto nla_put_failure;

 return VAR_7->len;

nla_put_failure:
 FUNC_1(VAR_7, VAR_12);
 return -1;
}
