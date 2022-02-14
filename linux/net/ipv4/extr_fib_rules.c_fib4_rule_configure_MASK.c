
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int fib_has_custom_rules; int fib_rules_require_fldissect; int fib_num_tclassid_users; } ;
struct net {TYPE_1__ ipv4; } ;
struct fib_table {scalar_t__ tb_id; } ;
struct fib_rule_hdr {int tos; scalar_t__ dst_len; scalar_t__ src_len; } ;
struct fib_rule {scalar_t__ table; scalar_t__ action; int l3mdev; } ;
struct fib4_rule {int tos; scalar_t__ dst_len; void* dstmask; scalar_t__ src_len; void* srcmask; scalar_t__ tclassid; void* dst; void* src; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 scalar_t__ VAR_7 ;
 struct fib_table* FUNC_1 (struct net*) ;
 scalar_t__ FUNC_2 (struct fib_rule*) ;
 int FUNC_3 (struct net*) ;
 void* FUNC_4 (scalar_t__) ;
 void* FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 struct net* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct fib_rule *VAR_8, struct sk_buff *VAR_9,
          struct fib_rule_hdr *VAR_10,
          struct nlattr **VAR_11,
          struct netlink_ext_ack *VAR_12)
{
 struct net *VAR_13 = FUNC_7(VAR_9->sk);
 int VAR_14 = -VAR_0;
 struct fib4_rule *VAR_15 = (struct fib4_rule *) VAR_8;

 if (VAR_10->tos & ~VAR_6) {
  FUNC_0(VAR_12, "Invalid tos");
  goto errout;
 }


 VAR_14 = FUNC_3(VAR_13);
 if (VAR_14)
  goto errout;

 if (VAR_8->table == VAR_7 && !VAR_8->l3mdev) {
  if (VAR_8->action == VAR_5) {
   struct fib_table *VAR_16;

   VAR_16 = FUNC_1(VAR_13);
   if (!VAR_16) {
    VAR_14 = -VAR_1;
    goto errout;
   }

   VAR_8->table = VAR_16->tb_id;
  }
 }

 if (VAR_10->src_len)
  VAR_15->src = FUNC_5(VAR_11[VAR_4]);

 if (VAR_10->dst_len)
  VAR_15->dst = FUNC_5(VAR_11[VAR_2]);
 if (FUNC_2(VAR_8))
  VAR_13->ipv4.fib_rules_require_fldissect++;

 VAR_15->src_len = VAR_10->src_len;
 VAR_15->srcmask = FUNC_4(VAR_15->src_len);
 VAR_15->dst_len = VAR_10->dst_len;
 VAR_15->dstmask = FUNC_4(VAR_15->dst_len);
 VAR_15->tos = VAR_10->tos;

 VAR_13->ipv4.fib_has_custom_rules = 1;

 VAR_14 = 0;
errout:
 return VAR_14;
}
