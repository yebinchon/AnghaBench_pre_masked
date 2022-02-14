
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {TYPE_2__* dev; } ;
struct net {int dummy; } ;
struct ipv6hdr {int daddr; } ;
struct ila_net {int dummy; } ;
struct TYPE_3__ {int ip; } ;
struct ila_map {TYPE_1__ xp; } ;
struct ila_addr {int dummy; } ;
struct TYPE_4__ {int ifindex; } ;


 struct net* FUNC_0 (TYPE_2__*) ;
 struct ila_addr* FUNC_1 (int *) ;
 struct ila_map* FUNC_2 (struct ila_addr*,int ,struct ila_net*) ;
 int VAR_0 ;
 int FUNC_3 (struct sk_buff*,int *,int) ;
 struct ipv6hdr* FUNC_4 (struct sk_buff*) ;
 struct ila_net* FUNC_5 (struct net*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1, bool VAR_2)
{
 struct ila_map *VAR_3;
 struct ipv6hdr *VAR_4 = FUNC_4(VAR_1);
 struct net *VAR_5 = FUNC_0(VAR_1->dev);
 struct ila_net *VAR_6 = FUNC_5(VAR_5, VAR_0);
 struct ila_addr *VAR_7 = FUNC_1(&VAR_4->daddr);
 FUNC_6();

 VAR_3 = FUNC_2(VAR_7, VAR_1->dev->ifindex, VAR_6);
 if (VAR_3)
  FUNC_3(VAR_1, &VAR_3->xp.ip, VAR_2);

 FUNC_7();

 return 0;
}
