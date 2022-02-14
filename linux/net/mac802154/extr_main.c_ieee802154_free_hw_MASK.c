
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_local {int phy; int iflist_mtx; int interfaces; } ;
struct ieee802154_hw {int dummy; } ;


 int FUNC_0 (int) ;
 struct ieee802154_local* FUNC_1 (struct ieee802154_hw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ieee802154_hw *VAR_0)
{
 struct ieee802154_local *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(!FUNC_2(&VAR_1->interfaces));

 FUNC_3(&VAR_1->iflist_mtx);

 FUNC_4(VAR_1->phy);
}
