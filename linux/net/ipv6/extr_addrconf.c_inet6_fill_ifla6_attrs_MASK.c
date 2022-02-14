
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int s6_addr; } ;
struct TYPE_5__ {int addr_gen_mode; } ;
struct inet6_dev {int lock; TYPE_1__ token; TYPE_2__ cnf; TYPE_3__* nd_parms; int tstamp; int if_flags; } ;
struct in6_addr {int dummy; } ;
struct ifla_cacheinfo {void* retrans_time; void* reachable_time; int tstamp; int max_reasm_len; } ;
typedef int s32 ;
typedef int ci ;
struct TYPE_6__ {int reachable_time; } ;


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
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int,struct ifla_cacheinfo*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 struct nlattr* FUNC_10 (struct sk_buff*,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,struct inet6_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_14, struct inet6_dev *VAR_15,
      u32 VAR_16)
{
 struct nlattr *VAR_17;
 struct ifla_cacheinfo VAR_18;

 if (FUNC_8(VAR_14, VAR_6, VAR_15->if_flags))
  goto nla_put_failure;
 VAR_18.max_reasm_len = VAR_11;
 VAR_18.tstamp = FUNC_1(VAR_15->tstamp);
 VAR_18.reachable_time = FUNC_3(VAR_15->nd_parms->reachable_time);
 VAR_18.retrans_time = FUNC_3(FUNC_0(VAR_15->nd_parms, VAR_12));
 if (FUNC_7(VAR_14, VAR_4, sizeof(VAR_18), &VAR_18))
  goto nla_put_failure;
 VAR_17 = FUNC_10(VAR_14, VAR_5, VAR_0 * sizeof(s32));
 if (!VAR_17)
  goto nla_put_failure;
 FUNC_2(&VAR_15->cnf, FUNC_5(VAR_17), FUNC_6(VAR_17));



 if (VAR_16 & VAR_13)
  return 0;

 VAR_17 = FUNC_10(VAR_14, VAR_8, VAR_10 * sizeof(u64));
 if (!VAR_17)
  goto nla_put_failure;
 FUNC_13(FUNC_5(VAR_17), VAR_15, VAR_8, FUNC_6(VAR_17));

 VAR_17 = FUNC_10(VAR_14, VAR_7, VAR_2 * sizeof(u64));
 if (!VAR_17)
  goto nla_put_failure;
 FUNC_13(FUNC_5(VAR_17), VAR_15, VAR_7, FUNC_6(VAR_17));

 VAR_17 = FUNC_10(VAR_14, VAR_9, sizeof(struct in6_addr));
 if (!VAR_17)
  goto nla_put_failure;

 if (FUNC_9(VAR_14, VAR_3, VAR_15->cnf.addr_gen_mode))
  goto nla_put_failure;

 FUNC_11(&VAR_15->lock);
 FUNC_4(FUNC_5(VAR_17), VAR_15->token.s6_addr, FUNC_6(VAR_17));
 FUNC_12(&VAR_15->lock);

 return 0;

nla_put_failure:
 return -VAR_1;
}
