
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gprs_dev {int sk; struct net_device* dev; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gprs_dev *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;

 if (FUNC_1(VAR_0->sk))
  FUNC_0(VAR_1);
}
