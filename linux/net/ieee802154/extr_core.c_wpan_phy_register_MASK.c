
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy {int dev; } ;
struct cfg802154_registered_device {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct cfg802154_registered_device* FUNC_4 (struct wpan_phy*) ;

int FUNC_5(struct wpan_phy *VAR_2)
{
 struct cfg802154_registered_device *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 FUNC_2();
 VAR_4 = FUNC_0(&VAR_2->dev);
 if (VAR_4) {
  FUNC_3();
  return VAR_4;
 }

 FUNC_1(&VAR_3->list, &VAR_0);
 VAR_1++;


 FUNC_3();



 return 0;
}
