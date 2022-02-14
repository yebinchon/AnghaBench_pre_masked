
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct lowpan_iphc_ctx {int plen; int pfx; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (struct in6_addr*,struct in6_addr const*) ;
 int FUNC_1 (struct in6_addr*,int *,int ) ;
 int FUNC_2 (struct net_device const*,struct in6_addr*,void const*) ;

__attribute__((used)) static bool FUNC_3(const struct net_device *VAR_0,
       const struct lowpan_iphc_ctx *VAR_1,
       const struct in6_addr *VAR_2,
       const void *VAR_3)
{
 struct in6_addr VAR_4 = {};

 FUNC_2(VAR_0, &VAR_4, VAR_3);

 if (VAR_1)
  FUNC_1(&VAR_4, &VAR_1->pfx, VAR_1->plen);

 return FUNC_0(&VAR_4, VAR_2);
}
