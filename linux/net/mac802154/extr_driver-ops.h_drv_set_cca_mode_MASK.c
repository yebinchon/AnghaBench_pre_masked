
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpan_phy_cca {int dummy; } ;
struct ieee802154_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_cca_mode ) (int *,struct wpan_phy_cca const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct wpan_phy_cca const*) ;
 int FUNC_3 (struct ieee802154_local*,int) ;
 int FUNC_4 (struct ieee802154_local*,struct wpan_phy_cca const*) ;

__attribute__((used)) static inline int FUNC_5(struct ieee802154_local *VAR_1,
       const struct wpan_phy_cca *VAR_2)
{
 int VAR_3;

 FUNC_1();

 if (!VAR_1->ops->set_cca_mode) {
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_4(VAR_1, VAR_2);
 VAR_3 = VAR_1->ops->set_cca_mode(&VAR_1->hw, VAR_2);
 FUNC_3(VAR_1, VAR_3);
 return VAR_3;
}
