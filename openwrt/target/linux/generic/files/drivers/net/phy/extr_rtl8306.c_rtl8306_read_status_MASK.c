
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_dev {int dummy; } ;
struct rtl_priv {struct switch_dev dev; } ;
struct TYPE_2__ {int addr; } ;
struct phy_device {int link; int attached_dev; int (* adjust_link ) (int ) ;int state; void* duplex; void* speed; TYPE_1__ mdio; struct rtl_priv* priv; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct switch_dev*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct phy_device *VAR_9)
{
 struct rtl_priv *VAR_10 = VAR_9->priv;
 struct switch_dev *VAR_11 = &VAR_10->dev;

 if (VAR_9->mdio.addr == 4) {

  VAR_9->speed = FUNC_3(VAR_11, FUNC_0(4, VAR_6)) ? VAR_8 : VAR_7;
  VAR_9->duplex = FUNC_3(VAR_11, FUNC_0(4, VAR_0)) ? VAR_1 : VAR_2;
  VAR_9->link = !!FUNC_3(VAR_11, FUNC_0(4, VAR_3));
 } else {

  VAR_9->speed = VAR_8;
  VAR_9->duplex = VAR_1;
  VAR_9->link = 1;
 }





 if (VAR_9->link) {
  VAR_9->state = VAR_5;
  FUNC_2(VAR_9->attached_dev);
  VAR_9->adjust_link(VAR_9->attached_dev);
 } else {
  VAR_9->state = VAR_4;
  FUNC_1(VAR_9->attached_dev);
  VAR_9->adjust_link(VAR_9->attached_dev);
 }

 return 0;
}
