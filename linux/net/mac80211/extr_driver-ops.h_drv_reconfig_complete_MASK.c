
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int hw; TYPE_1__* ops; } ;
typedef enum ieee80211_reconfig_type { ____Placeholder_ieee80211_reconfig_type } ieee80211_reconfig_type ;
struct TYPE_2__ {int (* reconfig_complete ) (int *,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ieee80211_local*,int) ;
 int FUNC_3 (struct ieee80211_local*) ;

__attribute__((used)) static inline void
FUNC_4(struct ieee80211_local *VAR_0,
        enum ieee80211_reconfig_type VAR_1)
{
 FUNC_0();

 FUNC_2(VAR_0, VAR_1);
 if (VAR_0->ops->reconfig_complete)
  VAR_0->ops->reconfig_complete(&VAR_0->hw, VAR_1);
 FUNC_3(VAR_0);
}
