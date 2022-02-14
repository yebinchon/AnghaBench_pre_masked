
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct dst_entry {int error; } ;
struct rt6_info {struct dst_entry dst; } ;
struct TYPE_4__ {struct rt6_info* ip6_null_entry; int fib6_main_tbl; int fib6_local_tbl; int fib6_rules_ops; scalar_t__ fib6_has_custom_rules; } ;
struct net {TYPE_2__ ipv6; } ;
struct flowi6 {int dummy; } ;
struct fib_lookup_arg {int flags; struct fib6_result* result; struct sk_buff const* lookup_data; struct rt6_info* (* lookup_ptr ) (struct net*,int ,struct flowi6*,struct sk_buff const*,int) ;} ;
struct fib6_result {TYPE_1__* rt6; } ;
typedef struct rt6_info* (* pol_lookup_t ) (struct net*,int ,struct flowi6*,struct sk_buff const*,int) ;
struct TYPE_3__ {struct dst_entry dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (int ,int ,int,struct fib_lookup_arg*) ;
 int FUNC_2 (struct flowi6*) ;
 int FUNC_3 (struct rt6_info*,int) ;
 int FUNC_4 (struct net*,int ) ;

struct dst_entry *FUNC_5(struct net *VAR_3, struct flowi6 *VAR_4,
       const struct sk_buff *VAR_5,
       int VAR_6, pol_lookup_t VAR_7)
{
 if (VAR_3->ipv6.fib6_has_custom_rules) {
  struct fib6_result VAR_8 = {};
  struct fib_lookup_arg VAR_9 = {
   .lookup_ptr = VAR_7,
   .lookup_data = VAR_5,
   .result = &VAR_8,
   .flags = VAR_1,
  };


  FUNC_4(VAR_3, FUNC_2(VAR_4));

  FUNC_1(VAR_3->ipv6.fib6_rules_ops,
     FUNC_2(VAR_4), VAR_6, &VAR_9);

  if (VAR_8.rt6)
   return &VAR_8.rt6->dst;
 } else {
  struct rt6_info *VAR_10;

  VAR_10 = VAR_7(VAR_3, VAR_3->ipv6.fib6_local_tbl, VAR_4, VAR_5, VAR_6);
  if (VAR_10 != VAR_3->ipv6.ip6_null_entry && VAR_10->dst.error != -VAR_0)
   return &VAR_10->dst;
  FUNC_3(VAR_10, VAR_6);
  VAR_10 = VAR_7(VAR_3, VAR_3->ipv6.fib6_main_tbl, VAR_4, VAR_5, VAR_6);
  if (VAR_10->dst.error != -VAR_0)
   return &VAR_10->dst;
  FUNC_3(VAR_10, VAR_6);
 }

 if (!(VAR_6 & VAR_2))
  FUNC_0(&VAR_3->ipv6.ip6_null_entry->dst);
 return &VAR_3->ipv6.ip6_null_entry->dst;
}
