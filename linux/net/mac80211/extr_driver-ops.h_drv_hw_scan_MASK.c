
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_scan_request {int dummy; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* hw_scan ) (int *,int *,struct ieee80211_scan_request*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *,struct ieee80211_scan_request*) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_local*,int) ;

__attribute__((used)) static inline int FUNC_5(struct ieee80211_local *VAR_1,
         struct ieee80211_sub_if_data *VAR_2,
         struct ieee80211_scan_request *VAR_3)
{
 int VAR_4;

 FUNC_1();

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_3(VAR_1, VAR_2);
 VAR_4 = VAR_1->ops->hw_scan(&VAR_1->hw, &VAR_2->vif, VAR_3);
 FUNC_4(VAR_1, VAR_4);
 return VAR_4;
}
