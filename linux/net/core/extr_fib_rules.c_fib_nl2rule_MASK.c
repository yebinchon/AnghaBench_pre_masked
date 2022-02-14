
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int ifindex; } ;
struct net {scalar_t__ user_ns; } ;
struct fib_rules_ops {int addr_size; int rule_size; } ;
struct fib_rule_hdr {int src_len; int dst_len; scalar_t__ action; int flags; } ;
struct TYPE_4__ {int end; int start; } ;
struct fib_rule {int iifindex; int oifindex; int mark_mask; scalar_t__ action; int suppress_prefixlen; int suppress_ifgroup; int dport_range; int sport_range; void* ip_proto; TYPE_1__ uid_range; scalar_t__ table; scalar_t__ l3mdev; void* pref; void* target; int flags; int tun_id; void* mark; int oifname; int iifname; void* proto; struct net* fr_net; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 void* VAR_23 ;
 struct net_device* FUNC_1 (struct net*,int ) ;
 scalar_t__ FUNC_2 () ;
 void* FUNC_3 (struct fib_rules_ops*) ;
 TYPE_1__ VAR_24 ;
 scalar_t__ FUNC_4 (struct nlattr*,struct fib_rule*,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_5 (struct fib_rule_hdr*,struct nlattr**) ;
 int FUNC_6 (struct fib_rule*) ;
 struct fib_rule* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct nlattr*) ;
 TYPE_1__ FUNC_9 (struct nlattr**) ;
 int FUNC_10 (struct nlattr*,int *) ;
 void* FUNC_11 (struct nlattr*) ;
 void* FUNC_12 (struct nlattr*) ;
 scalar_t__ FUNC_13 (struct nlattr*) ;
 int FUNC_14 (int ,struct nlattr*,int ) ;
 struct fib_rule_hdr* FUNC_15 (struct nlmsghdr*) ;
 int FUNC_16 (int *,int) ;
 struct net* FUNC_17 (int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_20(struct sk_buff *VAR_25, struct nlmsghdr *VAR_26,
         struct netlink_ext_ack *VAR_27,
         struct fib_rules_ops *VAR_28,
         struct nlattr *VAR_29[],
         struct fib_rule **VAR_30,
         bool *VAR_31)
{
 struct net *VAR_32 = FUNC_17(VAR_25->sk);
 struct fib_rule_hdr *VAR_33 = FUNC_15(VAR_26);
 struct fib_rule *VAR_34 = ((void*)0);
 int VAR_35 = -VAR_0;

 if (VAR_33->src_len)
  if (!VAR_29[VAR_15] ||
      VAR_33->src_len > (VAR_28->addr_size * 8) ||
      FUNC_13(VAR_29[VAR_15]) != VAR_28->addr_size) {
   FUNC_0(VAR_27, "Invalid source address");
   goto errout;
 }

 if (VAR_33->dst_len)
  if (!VAR_29[VAR_4] ||
      VAR_33->dst_len > (VAR_28->addr_size * 8) ||
      FUNC_13(VAR_29[VAR_4]) != VAR_28->addr_size) {
   FUNC_0(VAR_27, "Invalid dst address");
   goto errout;
 }

 VAR_34 = FUNC_7(VAR_28->rule_size, VAR_21);
 if (!VAR_34) {
  VAR_35 = -VAR_1;
  goto errout;
 }
 FUNC_16(&VAR_34->refcnt, 1);
 VAR_34->fr_net = VAR_32;

 if (VAR_29[VAR_12]) {
  VAR_34->pref = FUNC_11(VAR_29[VAR_12]);
  *VAR_31 = 1;
 } else {
  VAR_34->pref = FUNC_3(VAR_28);
 }

 VAR_34->proto = VAR_29[VAR_13] ?
  FUNC_12(VAR_29[VAR_13]) : VAR_23;

 if (VAR_29[VAR_8]) {
  struct net_device *VAR_36;

  VAR_34->iifindex = -1;
  FUNC_14(VAR_34->iifname, VAR_29[VAR_8], VAR_22);
  VAR_36 = FUNC_1(VAR_32, VAR_34->iifname);
  if (VAR_36)
   VAR_34->iifindex = VAR_36->ifindex;
 }

 if (VAR_29[VAR_11]) {
  struct net_device *VAR_37;

  VAR_34->oifindex = -1;
  FUNC_14(VAR_34->oifname, VAR_29[VAR_11], VAR_22);
  VAR_37 = FUNC_1(VAR_32, VAR_34->oifname);
  if (VAR_37)
   VAR_34->oifindex = VAR_37->ifindex;
 }

 if (VAR_29[VAR_5]) {
  VAR_34->mark = FUNC_11(VAR_29[VAR_5]);
  if (VAR_34->mark)



   VAR_34->mark_mask = 0xFFFFFFFF;
 }

 if (VAR_29[VAR_6])
  VAR_34->mark_mask = FUNC_11(VAR_29[VAR_6]);

 if (VAR_29[VAR_18])
  VAR_34->tun_id = FUNC_8(VAR_29[VAR_18]);

 VAR_35 = -VAR_0;
 if (VAR_29[VAR_10] &&
     FUNC_4(VAR_29[VAR_10], VAR_34, VAR_27) < 0)
  goto errout_free;

 VAR_34->action = VAR_33->action;
 VAR_34->flags = VAR_33->flags;
 VAR_34->table = FUNC_5(VAR_33, VAR_29);
 if (VAR_29[VAR_17])
  VAR_34->suppress_prefixlen = FUNC_11(VAR_29[VAR_17]);
 else
  VAR_34->suppress_prefixlen = -1;

 if (VAR_29[VAR_16])
  VAR_34->suppress_ifgroup = FUNC_11(VAR_29[VAR_16]);
 else
  VAR_34->suppress_ifgroup = -1;

 if (VAR_29[VAR_7]) {
  if (VAR_34->action != VAR_20) {
   FUNC_0(VAR_27, "Unexpected goto");
   goto errout_free;
  }

  VAR_34->target = FUNC_11(VAR_29[VAR_7]);

  if (VAR_34->target <= VAR_34->pref) {
   FUNC_0(VAR_27, "Backward goto not supported");
   goto errout_free;
  }
 } else if (VAR_34->action == VAR_20) {
  FUNC_0(VAR_27, "Missing goto target for action goto");
  goto errout_free;
 }

 if (VAR_34->l3mdev && VAR_34->table) {
  FUNC_0(VAR_27, "l3mdev and table are mutually exclusive");
  goto errout_free;
 }

 if (VAR_29[VAR_19]) {
  if (FUNC_2() != VAR_32->user_ns) {
   VAR_35 = -VAR_2;
   FUNC_0(VAR_27, "No permission to set uid");
   goto errout_free;
  }

  VAR_34->uid_range = FUNC_9(VAR_29);

  if (!FUNC_19(&VAR_34->uid_range) ||
      !FUNC_18(VAR_34->uid_range.start, VAR_34->uid_range.end)) {
   FUNC_0(VAR_27, "Invalid uid range");
   goto errout_free;
  }
 } else {
  VAR_34->uid_range = VAR_24;
 }

 if (VAR_29[VAR_9])
  VAR_34->ip_proto = FUNC_12(VAR_29[VAR_9]);

 if (VAR_29[VAR_14]) {
  VAR_35 = FUNC_10(VAR_29[VAR_14],
      &VAR_34->sport_range);
  if (VAR_35) {
   FUNC_0(VAR_27, "Invalid sport range");
   goto errout_free;
  }
 }

 if (VAR_29[VAR_3]) {
  VAR_35 = FUNC_10(VAR_29[VAR_3],
      &VAR_34->dport_range);
  if (VAR_35) {
   FUNC_0(VAR_27, "Invalid dport range");
   goto errout_free;
  }
 }

 *VAR_30 = VAR_34;

 return 0;

errout_free:
 FUNC_6(VAR_34);
errout:
 return VAR_35;
}
