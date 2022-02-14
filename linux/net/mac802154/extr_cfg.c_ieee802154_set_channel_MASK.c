
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct wpan_phy {void* current_page; void* current_channel; } ;
struct ieee802154_local {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ieee802154_local*,void*,void*) ;
 struct ieee802154_local* FUNC_2 (struct wpan_phy*) ;

__attribute__((used)) static int
FUNC_3(struct wpan_phy *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct ieee802154_local *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 FUNC_0();

 if (VAR_0->current_page == VAR_1 &&
     VAR_0->current_channel == VAR_2)
  return 0;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 if (!VAR_4) {
  VAR_0->current_page = VAR_1;
  VAR_0->current_channel = VAR_2;
 }

 return VAR_4;
}
