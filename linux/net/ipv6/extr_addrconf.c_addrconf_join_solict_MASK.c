
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in6_addr const*,struct in6_addr*) ;
 int FUNC_1 (struct net_device*,struct in6_addr*) ;

void FUNC_2(struct net_device *VAR_2, const struct in6_addr *VAR_3)
{
 struct in6_addr VAR_4;

 if (VAR_2->flags&(VAR_0|VAR_1))
  return;

 FUNC_0(VAR_3, &VAR_4);
 FUNC_1(VAR_2, &VAR_4);
}
