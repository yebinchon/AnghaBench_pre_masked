
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int link; int attached_dev; int (* adjust_link ) (int ) ;int state; int duplex; int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct phy_device *VAR_3)
{
 VAR_3->speed = VAR_2;
 VAR_3->duplex = VAR_0;
 VAR_3->link = 1;

 VAR_3->state = VAR_1;
 FUNC_0(VAR_3->attached_dev);
 VAR_3->adjust_link(VAR_3->attached_dev);

 return 0;
}
