
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int * header_ops; int broadcast; int dev_addr; } ;
struct TYPE_2__ {int raddr; int laddr; scalar_t__ collect_md; } ;
struct ip6_tnl {TYPE_1__ parms; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 struct ip6_tnl* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct ip6_tnl *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_2 = FUNC_3(VAR_1);

 if (VAR_2->parms.collect_md)
  return 0;

 FUNC_2(VAR_1->dev_addr, &VAR_2->parms.laddr, sizeof(struct in6_addr));
 FUNC_2(VAR_1->broadcast, &VAR_2->parms.raddr, sizeof(struct in6_addr));

 if (FUNC_1(&VAR_2->parms.raddr))
  VAR_1->header_ops = &VAR_0;

 return 0;
}
