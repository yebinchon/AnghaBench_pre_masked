
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy {int transmit_power; } ;
struct ieee802154_local {int dummy; } ;
typedef int s32 ;


 int FUNC_0 () ;
 int FUNC_1 (struct ieee802154_local*,int ) ;
 struct ieee802154_local* FUNC_2 (struct wpan_phy*) ;

__attribute__((used)) static int
FUNC_3(struct wpan_phy *VAR_0, s32 VAR_1)
{
 struct ieee802154_local *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 FUNC_0();

 if (VAR_0->transmit_power == VAR_1)
  return 0;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3)
  VAR_0->transmit_power = VAR_1;

 return VAR_3;
}
