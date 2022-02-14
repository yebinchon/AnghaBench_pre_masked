
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_ops {int flags; int cmd; scalar_t__ doit; scalar_t__ dumpit; } ;
struct genl_multicast_group {int name; } ;
struct genl_family {int version; int hdrsize; int maxattr; int n_ops; int n_mcgrps; int mcgrp_offset; struct genl_multicast_group* mcgrps; scalar_t__ policy; struct genl_ops* ops; int id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int,int,int *,int,int ) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int FUNC_8(const struct genl_family *VAR_16, u32 VAR_17, u32 VAR_18,
     u32 VAR_19, struct sk_buff *VAR_20, u8 VAR_21)
{
 void *VAR_22;

 VAR_22 = FUNC_2(VAR_20, VAR_17, VAR_18, &VAR_15, VAR_19, VAR_21);
 if (VAR_22 == ((void*)0))
  return -1;

 if (FUNC_5(VAR_20, VAR_1, VAR_16->name) ||
     FUNC_6(VAR_20, VAR_0, VAR_16->id) ||
     FUNC_7(VAR_20, VAR_10, VAR_16->version) ||
     FUNC_7(VAR_20, VAR_2, VAR_16->hdrsize) ||
     FUNC_7(VAR_20, VAR_3, VAR_16->maxattr))
  goto nla_put_failure;

 if (VAR_16->n_ops) {
  struct nlattr *VAR_23;
  int VAR_24;

  VAR_23 = FUNC_4(VAR_20, VAR_7);
  if (VAR_23 == ((void*)0))
   goto nla_put_failure;

  for (VAR_24 = 0; VAR_24 < VAR_16->n_ops; VAR_24++) {
   struct nlattr *VAR_25;
   const struct genl_ops *VAR_26 = &VAR_16->ops[VAR_24];
   u32 VAR_27 = VAR_26->flags;

   if (VAR_26->dumpit)
    VAR_27 |= VAR_13;
   if (VAR_26->doit)
    VAR_27 |= VAR_12;
   if (VAR_16->policy)
    VAR_27 |= VAR_14;

   VAR_25 = FUNC_4(VAR_20, VAR_24 + 1);
   if (VAR_25 == ((void*)0))
    goto nla_put_failure;

   if (FUNC_7(VAR_20, VAR_9, VAR_26->cmd) ||
       FUNC_7(VAR_20, VAR_8, VAR_27))
    goto nla_put_failure;

   FUNC_3(VAR_20, VAR_25);
  }

  FUNC_3(VAR_20, VAR_23);
 }

 if (VAR_16->n_mcgrps) {
  struct nlattr *VAR_28;
  int VAR_29;

  VAR_28 = FUNC_4(VAR_20, VAR_4);
  if (VAR_28 == ((void*)0))
   goto nla_put_failure;

  for (VAR_29 = 0; VAR_29 < VAR_16->n_mcgrps; VAR_29++) {
   struct nlattr *VAR_30;
   const struct genl_multicast_group *VAR_31;

   VAR_31 = &VAR_16->mcgrps[VAR_29];

   VAR_30 = FUNC_4(VAR_20, VAR_29 + 1);
   if (VAR_30 == ((void*)0))
    goto nla_put_failure;

   if (FUNC_7(VAR_20, VAR_5,
     VAR_16->mcgrp_offset + VAR_29) ||
       FUNC_5(VAR_20, VAR_6,
        VAR_31->name))
    goto nla_put_failure;

   FUNC_3(VAR_20, VAR_30);
  }
  FUNC_3(VAR_20, VAR_28);
 }

 FUNC_1(VAR_20, VAR_22);
 return 0;

nla_put_failure:
 FUNC_0(VAR_20, VAR_22);
 return -VAR_11;
}
