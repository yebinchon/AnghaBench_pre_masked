
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; } ;
struct ieee802154_sub_if_data {int sec_mtx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct ieee802154_sub_if_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct net_device *VAR_1)
{
 struct ieee802154_sub_if_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1->type != VAR_0);

 FUNC_2(&VAR_2->sec_mtx);
}
