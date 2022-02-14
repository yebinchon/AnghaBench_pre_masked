
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr const*) ;
 int FUNC_1 (struct net*,struct net_device*,struct in6_addr const*) ;

bool FUNC_2(struct net *VAR_1, struct net_device *VAR_2,
        const struct in6_addr *VAR_3)
{
 return FUNC_1(VAR_1,
       (FUNC_0(VAR_3) & VAR_0 ?
        VAR_2 : ((void*)0)),
       VAR_3);
}
