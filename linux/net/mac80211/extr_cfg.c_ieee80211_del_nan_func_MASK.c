
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct TYPE_6__ {int func_lock; } ;
struct TYPE_4__ {TYPE_3__ nan; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {int local; TYPE_1__ u; TYPE_2__ vif; } ;
struct cfg80211_nan_func {scalar_t__ instance_id; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,struct ieee80211_sub_if_data*,scalar_t__) ;
 struct cfg80211_nan_func* FUNC_2 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct wiphy *VAR_1,
      struct wireless_dev *VAR_2, u64 VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = FUNC_0(VAR_2);
 struct cfg80211_nan_func *VAR_5;
 u8 VAR_6 = 0;

 if (VAR_4->vif.type != VAR_0 ||
     !FUNC_3(VAR_4))
  return;

 FUNC_4(&VAR_4->u.nan.func_lock);

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5)
  VAR_6 = VAR_5->instance_id;

 FUNC_5(&VAR_4->u.nan.func_lock);

 if (VAR_6)
  FUNC_1(VAR_4->local, VAR_4, VAR_6);
}
