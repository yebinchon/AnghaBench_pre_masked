
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int addr_len; int features; int flags; int broadcast; int dev_addr; } ;
struct iphdr {int daddr; int saddr; } ;
struct TYPE_2__ {struct iphdr iph; } ;
struct ip_tunnel {TYPE_1__ parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *,int) ;
 struct ip_tunnel* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct ip_tunnel *VAR_3 = FUNC_2(VAR_2);
 struct iphdr *VAR_4 = &VAR_3->parms.iph;

 FUNC_1(VAR_2->dev_addr, &VAR_4->saddr, 4);
 FUNC_1(VAR_2->broadcast, &VAR_4->daddr, 4);

 VAR_2->flags = VAR_0;
 VAR_2->addr_len = 4;
 VAR_2->features |= VAR_1;
 FUNC_3(VAR_2);

 return FUNC_0(VAR_2);
}
