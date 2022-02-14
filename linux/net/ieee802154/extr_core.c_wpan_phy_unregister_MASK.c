
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy {int dev; } ;
struct cfg802154_registered_device {int opencount; int list; int wpan_dev_list; int dev_wait; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 struct cfg802154_registered_device* FUNC_8 (struct wpan_phy*) ;

void FUNC_9(struct wpan_phy *VAR_1)
{
 struct cfg802154_registered_device *VAR_2 = FUNC_8(VAR_1);

 FUNC_7(VAR_2->dev_wait, ({
  int VAR_3;
  FUNC_4();
  VAR_3 = VAR_2->opencount;
  FUNC_5();
  VAR_3 == 0; }));

 FUNC_4();



 FUNC_0(!FUNC_3(&VAR_2->wpan_dev_list));




 FUNC_2(&VAR_2->list);
 FUNC_6();

 VAR_0++;

 FUNC_1(&VAR_1->dev);

 FUNC_5();
}
