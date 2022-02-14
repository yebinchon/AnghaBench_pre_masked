
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sw {TYPE_2__* regs; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int rx_dropped; } ;
struct TYPE_10__ {TYPE_1__ stats; } ;
struct TYPE_9__ {TYPE_5__* netdev; TYPE_3__* phydev; } ;
struct TYPE_8__ {int link; int duplex; int speed; } ;
struct TYPE_7__ {int * mac_cfg; int intr_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (TYPE_5__*) ;
 struct sw* FUNC_3 (struct net_device*) ;
 TYPE_4__** VAR_7 ;

irqreturn_t FUNC_4(int VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = VAR_9;
 struct sw *VAR_11 = FUNC_3(VAR_10);
 u32 VAR_12;
 u32 VAR_13 = FUNC_0(&VAR_11->regs->intr_stat);
 FUNC_1(0xffffffff, &VAR_11->regs->intr_stat);

 if (VAR_13 & VAR_5)
  VAR_7[3]->netdev->stats.rx_dropped++;
 if (VAR_13 & VAR_3)
  VAR_7[1]->netdev->stats.rx_dropped++;
 if (VAR_13 & VAR_1)
  VAR_7[0]->netdev->stats.rx_dropped++;

 if (VAR_13 & VAR_2) {
  VAR_12 = FUNC_0(&VAR_11->regs->mac_cfg[0]);
  VAR_7[0]->phydev->link = (VAR_12 & 0x1);
  VAR_7[0]->phydev->duplex = ((VAR_12 >> 4) & 0x1);
  if (((VAR_12 >> 2) & 0x3) == 2)
   VAR_7[0]->phydev->speed = 1000;
  else if (((VAR_12 >> 2) & 0x3) == 1)
   VAR_7[0]->phydev->speed = 100;
  else
   VAR_7[0]->phydev->speed = 10;
  FUNC_2(VAR_7[0]->netdev);
 }

 if (VAR_13 & VAR_4) {
  VAR_12 = FUNC_0(&VAR_11->regs->mac_cfg[1]);
  VAR_7[1]->phydev->link = (VAR_12 & 0x1);
  VAR_7[1]->phydev->duplex = ((VAR_12 >> 4) & 0x1);
  if (((VAR_12 >> 2) & 0x3) == 2)
   VAR_7[1]->phydev->speed = 1000;
  else if (((VAR_12 >> 2) & 0x3) == 1)
   VAR_7[1]->phydev->speed = 100;
  else
   VAR_7[1]->phydev->speed = 10;
  FUNC_2(VAR_7[1]->netdev);
 }

 if (VAR_13 & VAR_6) {
  VAR_12 = FUNC_0(&VAR_11->regs->mac_cfg[3]);
  VAR_7[3]->phydev->link = (VAR_12 & 0x1);
  VAR_7[3]->phydev->duplex = ((VAR_12 >> 4) & 0x1);
  if (((VAR_12 >> 2) & 0x3) == 2)
   VAR_7[3]->phydev->speed = 1000;
  else if (((VAR_12 >> 2) & 0x3) == 1)
   VAR_7[3]->phydev->speed = 100;
  else
   VAR_7[3]->phydev->speed = 10;
  FUNC_2(VAR_7[3]->netdev);
 }

 return (VAR_0);
}
