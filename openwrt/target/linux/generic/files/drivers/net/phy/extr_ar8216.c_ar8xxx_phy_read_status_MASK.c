
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_port_link {int speed; scalar_t__ duplex; int link; } ;
struct TYPE_2__ {int addr; } ;
struct phy_device {scalar_t__ state; int link; int attached_dev; int (* adjust_link ) (int ) ;int duplex; int speed; TYPE_1__ mdio; struct ar8xxx_priv* priv; } ;
struct ar8xxx_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (struct ar8xxx_priv*,int ,struct switch_port_link*) ;
 int FUNC_1 (struct ar8xxx_priv*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct phy_device *VAR_7)
{
 struct ar8xxx_priv *VAR_8 = VAR_7->priv;
 struct switch_port_link VAR_9;


 if (VAR_7->state == VAR_2)
  FUNC_1(VAR_8);

 if (VAR_7->mdio.addr != 0)
  return FUNC_2(VAR_7);

 FUNC_0(VAR_8, VAR_7->mdio.addr, &VAR_9);
 VAR_7->link = !!VAR_9.link;
 if (!VAR_7->link)
  return 0;

 switch (VAR_9.speed) {
 case 130:
  VAR_7->speed = VAR_4;
  break;
 case 129:
  VAR_7->speed = VAR_5;
  break;
 case 128:
  VAR_7->speed = VAR_6;
  break;
 default:
  VAR_7->speed = 0;
 }
 VAR_7->duplex = VAR_9.duplex ? VAR_0 : VAR_1;

 VAR_7->state = VAR_3;
 FUNC_3(VAR_7->attached_dev);
 if (VAR_7->adjust_link)
  VAR_7->adjust_link(VAR_7->attached_dev);

 return 0;
}
