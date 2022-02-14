
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_sub_if_data {int wdev; TYPE_2__* local; } ;
struct TYPE_3__ {int wiphy; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,char*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_sub_if_data *VAR_1)
{
 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_1, "failed to finalize CSA, disconnecting\n");
  FUNC_1(VAR_1->local->hw.wiphy, &VAR_1->wdev,
        VAR_0);
 }
}
