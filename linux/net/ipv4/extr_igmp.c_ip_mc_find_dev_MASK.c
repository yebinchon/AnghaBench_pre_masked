
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct net_device* dev; } ;
struct rtable {TYPE_3__ dst; } ;
struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct ip_mreqn {int imr_ifindex; TYPE_2__ imr_multiaddr; TYPE_1__ imr_address; } ;
struct in_device {int dummy; } ;


 int FUNC_0 (struct rtable*) ;
 struct in_device* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct net*,scalar_t__,int) ;
 struct in_device* FUNC_3 (struct net*,int ) ;
 struct rtable* FUNC_4 (struct net*,int ,int ,int ,int ) ;
 int FUNC_5 (struct rtable*) ;

__attribute__((used)) static struct in_device *FUNC_6(struct net *VAR_0, struct ip_mreqn *VAR_1)
{
 struct net_device *VAR_2 = ((void*)0);
 struct in_device *VAR_3 = ((void*)0);

 if (VAR_1->imr_ifindex) {
  VAR_3 = FUNC_3(VAR_0, VAR_1->imr_ifindex);
  return VAR_3;
 }
 if (VAR_1->imr_address.s_addr) {
  VAR_2 = FUNC_2(VAR_0, VAR_1->imr_address.s_addr, 0);
  if (!VAR_2)
   return ((void*)0);
 }

 if (!VAR_2) {
  struct rtable *VAR_4 = FUNC_4(VAR_0,
          VAR_1->imr_multiaddr.s_addr,
          0, 0, 0);
  if (!FUNC_0(VAR_4)) {
   VAR_2 = VAR_4->dst.dev;
   FUNC_5(VAR_4);
  }
 }
 if (VAR_2) {
  VAR_1->imr_ifindex = VAR_2->ifindex;
  VAR_3 = FUNC_1(VAR_2);
 }
 return VAR_3;
}
