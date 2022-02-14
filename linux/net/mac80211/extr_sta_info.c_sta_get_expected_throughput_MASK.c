
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sta_info {int rate_ctrl_priv; struct ieee80211_sub_if_data* sdata; } ;
struct rate_control_ref {TYPE_1__* ops; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {struct rate_control_ref* rate_ctrl; } ;
struct TYPE_2__ {int (* get_expected_throughput ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_local*,struct sta_info*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sta_info*,int ) ;

u32 FUNC_3(struct sta_info *VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2 = VAR_1->sdata;
 struct ieee80211_local *VAR_3 = VAR_2->local;
 struct rate_control_ref *VAR_4 = ((void*)0);
 u32 VAR_5 = 0;

 if (FUNC_2(VAR_1, VAR_0))
  VAR_4 = VAR_3->rate_ctrl;


 if (VAR_4 && VAR_4->ops->get_expected_throughput)
  VAR_5 = VAR_4->ops->get_expected_throughput(VAR_1->rate_ctrl_priv);
 else
  VAR_5 = FUNC_0(VAR_3, VAR_1);

 return VAR_5;
}
