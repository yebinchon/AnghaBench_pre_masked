
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* mgd_prepare_tx ) (int *,TYPE_2__*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_5 (struct ieee80211_local*) ;

__attribute__((used)) static inline void FUNC_6(struct ieee80211_local *VAR_1,
          struct ieee80211_sub_if_data *VAR_2,
          u16 VAR_3)
{
 FUNC_2();

 if (!FUNC_1(VAR_2))
  return;
 FUNC_0(VAR_2->vif.type != VAR_0);

 FUNC_4(VAR_1, VAR_2, VAR_3);
 if (VAR_1->ops->mgd_prepare_tx)
  VAR_1->ops->mgd_prepare_tx(&VAR_1->hw, &VAR_2->vif, VAR_3);
 FUNC_5(VAR_1);
}
