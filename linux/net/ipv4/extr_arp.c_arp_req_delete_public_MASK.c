
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct arpreq {int arp_netmask; int arp_pa; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct net_device*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,struct net*,scalar_t__*,struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_2, struct arpreq *VAR_3,
  struct net_device *VAR_4)
{
 __be32 VAR_5 = ((struct sockaddr_in *) &VAR_3->arp_pa)->sin_addr.s_addr;
 __be32 VAR_6 = ((struct sockaddr_in *)&VAR_3->arp_netmask)->sin_addr.s_addr;

 if (VAR_6 == FUNC_1(0xFFFFFFFF))
  return FUNC_2(&VAR_1, VAR_2, &VAR_5, VAR_4);

 if (VAR_6)
  return -VAR_0;

 return FUNC_0(VAR_2, VAR_4, 0);
}
