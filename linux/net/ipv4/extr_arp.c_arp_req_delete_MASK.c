
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct TYPE_3__ {struct net_device* dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct arpreq {int arp_flags; int arp_pa; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int FUNC_1 (struct rtable*) ;
 int VAR_2 ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net*,struct arpreq*,struct net_device*) ;
 struct rtable* FUNC_4 (struct net*,int ,int ,int ,int ) ;
 int FUNC_5 (struct rtable*) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_3, struct arpreq *VAR_4,
     struct net_device *VAR_5)
{
 __be32 VAR_6;

 if (VAR_4->arp_flags & VAR_0)
  return FUNC_3(VAR_3, VAR_4, VAR_5);

 VAR_6 = ((struct sockaddr_in *)&VAR_4->arp_pa)->sin_addr.s_addr;
 if (!VAR_5) {
  struct rtable *VAR_7 = FUNC_4(VAR_3, VAR_6, 0, VAR_2, 0);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
  VAR_5 = VAR_7->dst.dev;
  FUNC_5(VAR_7);
  if (!VAR_5)
   return -VAR_1;
 }
 return FUNC_2(VAR_5, VAR_6);
}
