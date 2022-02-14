
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int addr_len; int * header_ops; int flags; int broadcast; int dev_addr; } ;
struct iphdr {scalar_t__ saddr; scalar_t__ daddr; } ;
struct TYPE_2__ {struct iphdr iph; } ;
struct ip_tunnel {int collect_md; TYPE_1__ parms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 struct ip_tunnel* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4)
{
 struct ip_tunnel *VAR_5 = FUNC_4(VAR_4);
 struct iphdr *VAR_6 = &VAR_5->parms.iph;

 FUNC_0(VAR_4);

 FUNC_3(VAR_4->dev_addr, &VAR_6->saddr, 4);
 FUNC_3(VAR_4->broadcast, &VAR_6->daddr, 4);

 VAR_4->flags = VAR_2;
 FUNC_5(VAR_4);
 VAR_4->addr_len = 4;

 if (VAR_6->daddr && !VAR_5->collect_md) {
 } else if (!VAR_5->collect_md) {
  VAR_4->header_ops = &VAR_3;
 }

 return FUNC_1(VAR_4);
}
