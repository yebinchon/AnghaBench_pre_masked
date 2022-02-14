
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_sub_if_data {int vif; } ;
struct ieee80211_local {int hw; TYPE_1__* ops; } ;
struct cfg80211_ftm_responder_stats {int dummy; } ;
struct TYPE_2__ {int (* get_ftm_responder_stats ) (int *,int *,struct cfg80211_ftm_responder_stats*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct cfg80211_ftm_responder_stats*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct cfg80211_ftm_responder_stats*) ;

__attribute__((used)) static inline int
FUNC_2(struct ieee80211_local *VAR_1,
       struct ieee80211_sub_if_data *VAR_2,
       struct cfg80211_ftm_responder_stats *VAR_3)
{
 u32 VAR_4 = -VAR_0;

 if (VAR_1->ops->get_ftm_responder_stats)
  VAR_4 = VAR_1->ops->get_ftm_responder_stats(&VAR_1->hw,
        &VAR_2->vif,
        VAR_3);
 FUNC_1(VAR_1, VAR_2, VAR_3);

 return VAR_4;
}
