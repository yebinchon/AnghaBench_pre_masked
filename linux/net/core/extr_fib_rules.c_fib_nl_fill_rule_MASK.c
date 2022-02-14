
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct fib_rules_ops {scalar_t__ (* fill ) (struct fib_rule*,struct sk_buff*,struct fib_rule_hdr*) ;int family; } ;
struct fib_rule_hdr {int table; scalar_t__ action; int flags; scalar_t__ res2; scalar_t__ res1; int family; } ;
struct fib_rule {int table; int suppress_prefixlen; scalar_t__ action; int iifindex; int oifindex; int pref; int mark; int mark_mask; int target; int suppress_ifgroup; scalar_t__ ip_proto; int dport_range; int sport_range; int uid_range; scalar_t__ l3mdev; scalar_t__ tun_id; scalar_t__* oifname; scalar_t__* iifname; int ctarget; scalar_t__ proto; int flags; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int *) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct fib_rule_hdr* FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_10 (struct sk_buff*,int ,int ,int,int,int) ;
 int * FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct fib_rule*,struct sk_buff*,struct fib_rule_hdr*) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_21, struct fib_rule *VAR_22,
       u32 VAR_23, u32 VAR_24, int VAR_25, int VAR_26,
       struct fib_rules_ops *VAR_27)
{
 struct nlmsghdr *VAR_28;
 struct fib_rule_hdr *VAR_29;

 VAR_28 = FUNC_10(VAR_21, VAR_23, VAR_24, VAR_25, sizeof(*VAR_29), VAR_26);
 if (VAR_28 == ((void*)0))
  return -VAR_0;

 VAR_29 = FUNC_8(VAR_28);
 VAR_29->family = VAR_27->family;
 VAR_29->table = VAR_22->table;
 if (FUNC_4(VAR_21, VAR_18, VAR_22->table))
  goto nla_put_failure;
 if (FUNC_4(VAR_21, VAR_17, VAR_22->suppress_prefixlen))
  goto nla_put_failure;
 VAR_29->res1 = 0;
 VAR_29->res2 = 0;
 VAR_29->action = VAR_22->action;
 VAR_29->flags = VAR_22->flags;

 if (FUNC_5(VAR_21, VAR_14, VAR_22->proto))
  goto nla_put_failure;

 if (VAR_22->action == VAR_20 &&
     FUNC_11(VAR_22->ctarget) == ((void*)0))
  VAR_29->flags |= VAR_3;

 if (VAR_22->iifname[0]) {
  if (FUNC_3(VAR_21, VAR_8, VAR_22->iifname))
   goto nla_put_failure;
  if (VAR_22->iifindex == -1)
   VAR_29->flags |= VAR_1;
 }

 if (VAR_22->oifname[0]) {
  if (FUNC_3(VAR_21, VAR_11, VAR_22->oifname))
   goto nla_put_failure;
  if (VAR_22->oifindex == -1)
   VAR_29->flags |= VAR_2;
 }

 if ((VAR_22->pref &&
      FUNC_4(VAR_21, VAR_13, VAR_22->pref)) ||
     (VAR_22->mark &&
      FUNC_4(VAR_21, VAR_5, VAR_22->mark)) ||
     ((VAR_22->mark_mask || VAR_22->mark) &&
      FUNC_4(VAR_21, VAR_6, VAR_22->mark_mask)) ||
     (VAR_22->target &&
      FUNC_4(VAR_21, VAR_7, VAR_22->target)) ||
     (VAR_22->tun_id &&
      FUNC_1(VAR_21, VAR_19, VAR_22->tun_id, VAR_12)) ||
     (VAR_22->l3mdev &&
      FUNC_5(VAR_21, VAR_10, VAR_22->l3mdev)) ||
     (FUNC_13(&VAR_22->uid_range) &&
      FUNC_6(VAR_21, &VAR_22->uid_range)) ||
     (FUNC_0(&VAR_22->sport_range) &&
      FUNC_2(VAR_21, VAR_15, &VAR_22->sport_range)) ||
     (FUNC_0(&VAR_22->dport_range) &&
      FUNC_2(VAR_21, VAR_4, &VAR_22->dport_range)) ||
     (VAR_22->ip_proto && FUNC_5(VAR_21, VAR_9, VAR_22->ip_proto)))
  goto nla_put_failure;

 if (VAR_22->suppress_ifgroup != -1) {
  if (FUNC_4(VAR_21, VAR_16, VAR_22->suppress_ifgroup))
   goto nla_put_failure;
 }

 if (VAR_27->fill(VAR_22, VAR_21, VAR_29) < 0)
  goto nla_put_failure;

 FUNC_9(VAR_21, VAR_28);
 return 0;

nla_put_failure:
 FUNC_7(VAR_21, VAR_28);
 return -VAR_0;
}
