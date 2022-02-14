
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct neighbour {int dummy; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ FUNC_0 (struct neighbour*) ;
 struct neighbour* FUNC_1 (struct net_device*,void const*) ;
 void* FUNC_2 (struct in6_addr const*,struct sk_buff*,void const*) ;
 int VAR_0 ;
 struct neighbour* FUNC_3 (int *,void const*,struct net_device*) ;

struct neighbour *FUNC_4(const struct in6_addr *VAR_1,
       struct net_device *VAR_2,
       struct sk_buff *VAR_3,
       const void *VAR_4)
{
 struct neighbour *VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_3, VAR_4);
 VAR_5 = FUNC_1(VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(&VAR_0, VAR_4, VAR_2);
 return FUNC_0(VAR_5) ? ((void*)0) : VAR_5;
}
