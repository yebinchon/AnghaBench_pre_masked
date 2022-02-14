
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int sk; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_6__ {int fib6_has_custom_rules; int fib6_rules_require_fldissect; } ;
struct net {TYPE_3__ ipv6; } ;
struct fib_rule_hdr {int tos; scalar_t__ dst_len; scalar_t__ src_len; } ;
struct fib_rule {scalar_t__ action; int table; int l3mdev; } ;
struct TYPE_5__ {scalar_t__ plen; void* addr; } ;
struct TYPE_4__ {scalar_t__ plen; void* addr; } ;
struct fib6_rule {int tclass; TYPE_2__ dst; TYPE_1__ src; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_5 ;
 int * FUNC_1 (struct net*,int ) ;
 scalar_t__ FUNC_2 (struct fib_rule*) ;
 void* FUNC_3 (struct nlattr*) ;
 struct net* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct fib_rule *VAR_6, struct sk_buff *VAR_7,
          struct fib_rule_hdr *VAR_8,
          struct nlattr **VAR_9,
          struct netlink_ext_ack *VAR_10)
{
 int VAR_11 = -VAR_0;
 struct net *VAR_12 = FUNC_4(VAR_7->sk);
 struct fib6_rule *VAR_13 = (struct fib6_rule *) VAR_6;

 if (VAR_6->action == VAR_4 && !VAR_6->l3mdev) {
  if (VAR_6->table == VAR_5) {
   FUNC_0(VAR_10, "Invalid table");
   goto errout;
  }

  if (FUNC_1(VAR_12, VAR_6->table) == ((void*)0)) {
   VAR_11 = -VAR_1;
   goto errout;
  }
 }

 if (VAR_8->src_len)
  VAR_13->src.addr = FUNC_3(VAR_9[VAR_3]);

 if (VAR_8->dst_len)
  VAR_13->dst.addr = FUNC_3(VAR_9[VAR_2]);

 VAR_13->src.plen = VAR_8->src_len;
 VAR_13->dst.plen = VAR_8->dst_len;
 VAR_13->tclass = VAR_8->tos;

 if (FUNC_2(VAR_6))
  VAR_12->ipv6.fib6_rules_require_fldissect++;

 VAR_12->ipv6.fib6_has_custom_rules = 1;
 VAR_11 = 0;
errout:
 return VAR_11;
}
