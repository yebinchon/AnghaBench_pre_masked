
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct net_device {scalar_t__ type; } ;
struct ieee802154_sub_if_data {struct ieee802154_local* local; } ;
struct ieee802154_local {TYPE_1__* phy; } ;
struct TYPE_2__ {void* current_page; void* current_channel; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 struct ieee802154_sub_if_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ieee802154_local*,void*,void*) ;
 int FUNC_4 (char*) ;

void FUNC_5(struct net_device *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct ieee802154_sub_if_data *VAR_4 = FUNC_2(VAR_1);
 struct ieee802154_local *VAR_5 = VAR_4->local;
 int VAR_6;

 FUNC_0();

 FUNC_1(VAR_1->type != VAR_0);

 VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3);
 if (VAR_6) {
  FUNC_4("set_channel failed\n");
 } else {
  VAR_5->phy->current_channel = VAR_3;
  VAR_5->phy->current_page = VAR_2;
 }
}
