
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802154_sub_if_data {int dev; TYPE_1__* local; int list; } ;
struct TYPE_2__ {int iflist_mtx; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

void FUNC_6(struct ieee802154_sub_if_data *VAR_0)
{
 FUNC_0();

 FUNC_2(&VAR_0->local->iflist_mtx);
 FUNC_1(&VAR_0->list);
 FUNC_3(&VAR_0->local->iflist_mtx);

 FUNC_4();
 FUNC_5(VAR_0->dev);
}
