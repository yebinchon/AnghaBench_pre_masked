
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_local {int phy; int workqueue; int tasklet; } ;
struct ieee802154_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ieee802154_local* FUNC_2 (struct ieee802154_hw*) ;
 int FUNC_3 (struct ieee802154_local*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct ieee802154_hw *VAR_0)
{
 struct ieee802154_local *VAR_1 = FUNC_2(VAR_0);

 FUNC_6(&VAR_1->tasklet);
 FUNC_1(VAR_1->workqueue);

 FUNC_4();

 FUNC_3(VAR_1);

 FUNC_5();

 FUNC_0(VAR_1->workqueue);
 FUNC_7(VAR_1->phy);
}
