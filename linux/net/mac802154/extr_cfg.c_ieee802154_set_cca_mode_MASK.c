
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy_cca {int dummy; } ;
struct wpan_phy {struct wpan_phy_cca cca; } ;
struct ieee802154_local {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ieee802154_local*,struct wpan_phy_cca const*) ;
 scalar_t__ FUNC_2 (struct wpan_phy_cca*,struct wpan_phy_cca const*) ;
 struct ieee802154_local* FUNC_3 (struct wpan_phy*) ;

__attribute__((used)) static int
FUNC_4(struct wpan_phy *VAR_0,
   const struct wpan_phy_cca *VAR_1)
{
 struct ieee802154_local *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_0();

 if (FUNC_2(&VAR_0->cca, VAR_1))
  return 0;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3)
  VAR_0->cca = *VAR_1;

 return VAR_3;
}
