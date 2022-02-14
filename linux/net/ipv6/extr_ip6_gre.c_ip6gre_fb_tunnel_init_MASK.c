
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct ipv6hdr {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct ip6_tnl {int hlen; TYPE_1__ parms; int net; struct net_device* dev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct ip6_tnl* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct ip6_tnl *VAR_1 = FUNC_2(VAR_0);

 VAR_1->dev = VAR_0;
 VAR_1->net = FUNC_1(VAR_0);
 FUNC_3(VAR_1->parms.name, VAR_0->name);

 VAR_1->hlen = sizeof(struct ipv6hdr) + 4;

 FUNC_0(VAR_0);
}
