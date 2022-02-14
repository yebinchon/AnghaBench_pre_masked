
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_vs_flags {int mask; int flags; } ;
struct ip_vs_service {int fwmark; int timeout; int stats; int netmask; int pe; int scheduler; int port; struct ip_vs_flags addr; int protocol; int af; int flags; } ;
struct ip_vs_scheduler {char* name; } ;
struct ip_vs_pe {char* name; } ;
struct ip_vs_kstats {int dummy; } ;
typedef int flags ;


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
 int FUNC_0 (struct ip_vs_kstats*,int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,struct ip_vs_kstats*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,struct ip_vs_kstats*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int,struct ip_vs_flags*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,char*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int) ;
 void* FUNC_12 (int ,int) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_15,
       struct ip_vs_service *VAR_16)
{
 struct ip_vs_scheduler *VAR_17;
 struct ip_vs_pe *VAR_18;
 struct nlattr *VAR_19;
 struct ip_vs_flags VAR_20 = { .flags = VAR_16->flags,
         .mask = ~0 };
 struct ip_vs_kstats VAR_21;
 char *VAR_22;

 VAR_19 = FUNC_5(VAR_15, VAR_2);
 if (!VAR_19)
  return -VAR_0;

 if (FUNC_10(VAR_15, VAR_4, VAR_16->af))
  goto nla_put_failure;
 if (VAR_16->fwmark) {
  if (FUNC_11(VAR_15, VAR_6, VAR_16->fwmark))
   goto nla_put_failure;
 } else {
  if (FUNC_10(VAR_15, VAR_10, VAR_16->protocol) ||
      FUNC_6(VAR_15, VAR_3, sizeof(VAR_16->addr), &VAR_16->addr) ||
      FUNC_7(VAR_15, VAR_9, VAR_16->port))
   goto nla_put_failure;
 }

 VAR_17 = FUNC_12(VAR_16->scheduler, 1);
 VAR_22 = VAR_17 ? VAR_17->name : "none";
 VAR_18 = FUNC_12(VAR_16->pe, 1);
 if (FUNC_9(VAR_15, VAR_11, VAR_22) ||
     (VAR_18 && FUNC_9(VAR_15, VAR_8, VAR_18->name)) ||
     FUNC_6(VAR_15, VAR_5, sizeof(VAR_20), &VAR_20) ||
     FUNC_11(VAR_15, VAR_14, VAR_16->timeout / VAR_1) ||
     FUNC_8(VAR_15, VAR_7, VAR_16->netmask))
  goto nla_put_failure;
 FUNC_0(&VAR_21, &VAR_16->stats);
 if (FUNC_1(VAR_15, VAR_12, &VAR_21))
  goto nla_put_failure;
 if (FUNC_2(VAR_15, VAR_13, &VAR_21))
  goto nla_put_failure;

 FUNC_4(VAR_15, VAR_19);

 return 0;

nla_put_failure:
 FUNC_3(VAR_15, VAR_19);
 return -VAR_0;
}
