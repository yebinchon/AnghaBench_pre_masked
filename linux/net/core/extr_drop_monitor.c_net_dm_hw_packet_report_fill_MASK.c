
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; int len; int tstamp; } ;
struct nlattr {int nla_len; int nla_type; } ;
struct net_dm_hw_metadata {struct net_device* input_dev; int trap_name; int trap_group_name; } ;
struct net_device {int name; int ifindex; } ;
struct TYPE_2__ {struct net_dm_hw_metadata* hw_metadata; } ;


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
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 int VAR_11 ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (struct nlattr*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_13 (size_t) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int ,int ,size_t) ;
 struct nlattr* FUNC_15 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_12,
     struct sk_buff *VAR_13, size_t VAR_14)
{
 struct net_dm_hw_metadata *VAR_15;
 struct nlattr *VAR_16;
 void *VAR_17;

 VAR_15 = FUNC_0(VAR_13)->hw_metadata;

 VAR_17 = FUNC_4(VAR_12, 0, 0, &VAR_11, 0,
     VAR_9);
 if (!VAR_17)
  return -VAR_0;

 if (FUNC_10(VAR_12, VAR_3, VAR_10))
  goto nla_put_failure;

 if (FUNC_9(VAR_12, VAR_1,
      VAR_15->trap_group_name))
  goto nla_put_failure;

 if (FUNC_9(VAR_12, VAR_2,
      VAR_15->trap_name))
  goto nla_put_failure;

 if (VAR_15->input_dev) {
  struct net_device *VAR_18 = VAR_15->input_dev;
  int VAR_19;

  VAR_19 = FUNC_6(VAR_12, VAR_18->ifindex,
            VAR_18->name);
  if (VAR_19)
   goto nla_put_failure;
 }

 if (FUNC_12(VAR_12, VAR_8,
         FUNC_5(VAR_13->tstamp), VAR_5))
  goto nla_put_failure;

 if (FUNC_11(VAR_12, VAR_4, VAR_13->len))
  goto nla_put_failure;

 if (!VAR_14)
  goto out;

 if (FUNC_10(VAR_12, VAR_7, FUNC_1(VAR_13->protocol)))
  goto nla_put_failure;

 VAR_16 = FUNC_15(VAR_12, FUNC_13(VAR_14));
 VAR_16->nla_type = VAR_6;
 VAR_16->nla_len = FUNC_7(VAR_14);
 if (FUNC_14(VAR_13, 0, FUNC_8(VAR_16), VAR_14))
  goto nla_put_failure;

out:
 FUNC_3(VAR_12, VAR_17);

 return 0;

nla_put_failure:
 FUNC_2(VAR_12, VAR_17);
 return -VAR_0;
}
