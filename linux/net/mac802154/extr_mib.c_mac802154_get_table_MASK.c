
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ type; } ;
struct ieee802154_llsec_table {int dummy; } ;
struct TYPE_2__ {struct ieee802154_llsec_table table; } ;
struct ieee802154_sub_if_data {TYPE_1__ sec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct ieee802154_sub_if_data* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_1,
    struct ieee802154_llsec_table **VAR_2)
{
 struct ieee802154_sub_if_data *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_1->type != VAR_0);

 *VAR_2 = &VAR_3->sec.table;
}
