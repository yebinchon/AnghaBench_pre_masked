
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct net*,struct in6_addr const*,struct in6_addr const*) ;
 int FUNC_1 (int ) ;

__be32 FUNC_2(struct net *VAR_0,
    const struct in6_addr *VAR_1,
    const struct in6_addr *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 return FUNC_1(VAR_3);
}
