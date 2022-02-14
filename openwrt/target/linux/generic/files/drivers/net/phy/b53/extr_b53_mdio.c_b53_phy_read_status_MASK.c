
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int speed; int link; int attached_dev; int (* adjust_link ) (int ) ;int state; int duplex; struct b53_device* priv; } ;
struct b53_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct b53_device*) ;
 scalar_t__ FUNC_1 (struct b53_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_2)
{
 struct b53_device *VAR_3 = VAR_2->priv;

 if (FUNC_0(VAR_3) || FUNC_1(VAR_3))
  VAR_2->speed = 100;
 else
  VAR_2->speed = 1000;

 VAR_2->duplex = VAR_0;
 VAR_2->link = 1;
 VAR_2->state = VAR_1;

 FUNC_2(VAR_2->attached_dev);
 VAR_2->adjust_link(VAR_2->attached_dev);

 return 0;
}
