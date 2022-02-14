
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct net_device {int name; int type; int addr_len; } ;
struct neighbour {int nud_state; int lock; int ha; } ;
struct TYPE_4__ {int sa_family; int sa_data; } ;
struct arpreq {int arp_dev; TYPE_2__ arp_ha; int arp_flags; int arp_pa; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct neighbour*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 struct neighbour* FUNC_2 (int *,int *,struct net_device*) ;
 int FUNC_3 (struct neighbour*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct arpreq *VAR_3, struct net_device *VAR_4)
{
 __be32 VAR_5 = ((struct sockaddr_in *) &VAR_3->arp_pa)->sin_addr.s_addr;
 struct neighbour *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_6 = FUNC_2(&VAR_2, &VAR_5, VAR_4);
 if (VAR_6) {
  if (!(VAR_6->nud_state & VAR_1)) {
   FUNC_4(&VAR_6->lock);
   FUNC_1(VAR_3->arp_ha.sa_data, VAR_6->ha, VAR_4->addr_len);
   VAR_3->arp_flags = FUNC_0(VAR_6);
   FUNC_5(&VAR_6->lock);
   VAR_3->arp_ha.sa_family = VAR_4->type;
   FUNC_6(VAR_3->arp_dev, VAR_4->name, sizeof(VAR_3->arp_dev));
   VAR_7 = 0;
  }
  FUNC_3(VAR_6);
 }
 return VAR_7;
}
