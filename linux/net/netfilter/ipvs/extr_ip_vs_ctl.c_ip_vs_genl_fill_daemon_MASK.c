
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int ip; int in6; } ;
struct ipvs_sync_daemon_cfg {scalar_t__ mcast_af; TYPE_1__ mcast_group; int mcast_ttl; int mcast_port; int sync_maxlen; int syncid; int mcast_ifn; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_12, __u32 VAR_13,
      struct ipvs_sync_daemon_cfg *VAR_14)
{
 struct nlattr *VAR_15;

 VAR_15 = FUNC_2(VAR_12, VAR_3);
 if (!VAR_15)
  return -VAR_2;

 if (FUNC_7(VAR_12, VAR_9, VAR_13) ||
     FUNC_5(VAR_12, VAR_6, VAR_14->mcast_ifn) ||
     FUNC_7(VAR_12, VAR_10, VAR_14->syncid) ||
     FUNC_6(VAR_12, VAR_11, VAR_14->sync_maxlen) ||
     FUNC_6(VAR_12, VAR_7, VAR_14->mcast_port) ||
     FUNC_8(VAR_12, VAR_8, VAR_14->mcast_ttl))
  goto nla_put_failure;







  if (VAR_14->mcast_af == VAR_0 &&
      FUNC_4(VAR_12, VAR_4,
        VAR_14->mcast_group.ip))
   goto nla_put_failure;
 FUNC_1(VAR_12, VAR_15);

 return 0;

nla_put_failure:
 FUNC_0(VAR_12, VAR_15);
 return -VAR_2;
}
