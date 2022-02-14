
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int sa_data; int sa_family; } ;
struct arpreq {int arp_flags; TYPE_1__ arp_ha; int arp_netmask; int arp_pa; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net*,struct net_device*,int) ;
 int VAR_4 ;
 struct net_device* FUNC_1 (struct net*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,struct net*,scalar_t__*,struct net_device*,int) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_5, struct arpreq *VAR_6,
  struct net_device *VAR_7)
{
 __be32 VAR_8 = ((struct sockaddr_in *)&VAR_6->arp_pa)->sin_addr.s_addr;
 __be32 VAR_9 = ((struct sockaddr_in *)&VAR_6->arp_netmask)->sin_addr.s_addr;

 if (VAR_9 && VAR_9 != FUNC_2(0xFFFFFFFF))
  return -VAR_1;
 if (!VAR_7 && (VAR_6->arp_flags & VAR_0)) {
  VAR_7 = FUNC_1(VAR_5, VAR_6->arp_ha.sa_family,
          VAR_6->arp_ha.sa_data);
  if (!VAR_7)
   return -VAR_3;
 }
 if (VAR_9) {
  if (!FUNC_3(&VAR_4, VAR_5, &VAR_8, VAR_7, 1))
   return -VAR_2;
  return 0;
 }

 return FUNC_0(VAR_5, VAR_7, 1);
}
