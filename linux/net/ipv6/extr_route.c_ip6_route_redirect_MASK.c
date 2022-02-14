
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct flowi6 {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ip6rd_flowi {struct flowi6 fl6; struct in6_addr gateway; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dst_entry* FUNC_0 (struct net*,struct flowi6*,struct sk_buff const*,int,int ) ;

__attribute__((used)) static struct dst_entry *FUNC_1(struct net *VAR_2,
         const struct flowi6 *VAR_3,
         const struct sk_buff *VAR_4,
         const struct in6_addr *VAR_5)
{
 int VAR_6 = VAR_0;
 struct ip6rd_flowi VAR_7;

 VAR_7.fl6 = *VAR_3;
 VAR_7.gateway = *VAR_5;

 return FUNC_0(VAR_2, &VAR_7.fl6, VAR_4,
    VAR_6, VAR_1);
}
