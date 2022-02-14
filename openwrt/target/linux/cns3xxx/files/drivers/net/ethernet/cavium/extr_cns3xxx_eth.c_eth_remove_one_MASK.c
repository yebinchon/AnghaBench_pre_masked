
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw {int dummy; } ;
struct port {int phydev; struct net_device* netdev; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct sw*) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* VAR_0 ;
 struct sw* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 struct port** VAR_1 ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_5(VAR_2);
 struct sw *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 FUNC_1(VAR_4);
 for (VAR_5 = 3; VAR_5 >= 0; VAR_5--) {
  if (VAR_1[VAR_5]) {
   struct port *VAR_6 = VAR_1[VAR_5];
   struct net_device *VAR_7 = VAR_6->netdev;
   FUNC_6(VAR_7);
   FUNC_4(VAR_6->phydev);
   VAR_1[VAR_5] = 0;
   FUNC_2(VAR_7);
  }
 }

 FUNC_2(VAR_0);
 FUNC_0();

 return 0;
}
