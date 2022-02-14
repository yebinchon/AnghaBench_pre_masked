
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct dst_entry {int error; } ;
struct rt6_info {struct dst_entry dst; } ;
struct TYPE_2__ {struct rt6_info* ip6_null_entry; int fib6_main_tbl; } ;
struct net {TYPE_1__ ipv6; } ;
struct flowi6 {int dummy; } ;
typedef struct rt6_info* (* pol_lookup_t ) (struct net*,int ,struct flowi6*,struct sk_buff const*,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct rt6_info*,int) ;

struct dst_entry *FUNC_2(struct net *VAR_2, struct flowi6 *VAR_3,
       const struct sk_buff *VAR_4,
       int VAR_5, pol_lookup_t VAR_6)
{
 struct rt6_info *VAR_7;

 VAR_7 = VAR_6(VAR_2, VAR_2->ipv6.fib6_main_tbl, VAR_3, VAR_4, VAR_5);
 if (VAR_7->dst.error == -VAR_0) {
  FUNC_1(VAR_7, VAR_5);
  VAR_7 = VAR_2->ipv6.ip6_null_entry;
  if (!(VAR_5 & VAR_1))
   FUNC_0(&VAR_7->dst);
 }

 return &VAR_7->dst;
}
