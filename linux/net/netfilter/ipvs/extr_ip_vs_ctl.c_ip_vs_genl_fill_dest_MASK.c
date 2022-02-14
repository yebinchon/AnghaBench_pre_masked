
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_vs_kstats {int dummy; } ;
struct ip_vs_dest {int u_threshold; int l_threshold; int stats; int af; int persistconns; int inactconns; int activeconns; int tun_flags; int tun_port; int tun_type; int weight; int conn_flags; int port; int addr; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ip_vs_kstats*,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,struct ip_vs_kstats*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,struct ip_vs_kstats*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int,int *) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_18, struct ip_vs_dest *VAR_19)
{
 struct nlattr *VAR_20;
 struct ip_vs_kstats VAR_21;

 VAR_20 = FUNC_6(VAR_18, VAR_1);
 if (!VAR_20)
  return -VAR_0;

 if (FUNC_7(VAR_18, VAR_3, sizeof(VAR_19->addr), &VAR_19->addr) ||
     FUNC_8(VAR_18, VAR_9, VAR_19->port) ||
     FUNC_10(VAR_18, VAR_5,
   (FUNC_0(&VAR_19->conn_flags) &
    VAR_17)) ||
     FUNC_10(VAR_18, VAR_16,
   FUNC_0(&VAR_19->weight)) ||
     FUNC_11(VAR_18, VAR_14,
         VAR_19->tun_type) ||
     FUNC_8(VAR_18, VAR_13,
    VAR_19->tun_port) ||
     FUNC_9(VAR_18, VAR_12,
   VAR_19->tun_flags) ||
     FUNC_10(VAR_18, VAR_15, VAR_19->u_threshold) ||
     FUNC_10(VAR_18, VAR_7, VAR_19->l_threshold) ||
     FUNC_10(VAR_18, VAR_2,
   FUNC_0(&VAR_19->activeconns)) ||
     FUNC_10(VAR_18, VAR_6,
   FUNC_0(&VAR_19->inactconns)) ||
     FUNC_10(VAR_18, VAR_8,
   FUNC_0(&VAR_19->persistconns)) ||
     FUNC_9(VAR_18, VAR_4, VAR_19->af))
  goto nla_put_failure;
 FUNC_1(&VAR_21, &VAR_19->stats);
 if (FUNC_2(VAR_18, VAR_10, &VAR_21))
  goto nla_put_failure;
 if (FUNC_3(VAR_18, VAR_11, &VAR_21))
  goto nla_put_failure;

 FUNC_5(VAR_18, VAR_20);

 return 0;

nla_put_failure:
 FUNC_4(VAR_18, VAR_20);
 return -VAR_0;
}
