
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct TYPE_8__ {int func_lock; int function_inst_ids; } ;
struct TYPE_9__ {TYPE_3__ nan; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_5__* local; TYPE_1__ vif; } ;
struct cfg80211_nan_func {int instance_id; } ;
struct TYPE_7__ {scalar_t__ max_nan_de_entries; } ;
struct TYPE_10__ {TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct wireless_dev*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,struct ieee80211_sub_if_data*,struct cfg80211_nan_func*) ;
 int FUNC_3 (int *,struct cfg80211_nan_func*,int,scalar_t__,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct wiphy *VAR_4,
      struct wireless_dev *VAR_5,
      struct cfg80211_nan_func *VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;

 if (VAR_7->vif.type != VAR_3)
  return -VAR_1;

 if (!FUNC_5(VAR_7))
  return -VAR_0;

 FUNC_6(&VAR_7->u.nan.func_lock);

 VAR_8 = FUNC_3(&VAR_7->u.nan.function_inst_ids,
   VAR_6, 1, VAR_7->local->hw.max_nan_de_entries + 1,
   VAR_2);
 FUNC_7(&VAR_7->u.nan.func_lock);

 if (VAR_8 < 0)
  return VAR_8;

 VAR_6->instance_id = VAR_8;

 FUNC_1(VAR_6->instance_id == 0);

 VAR_8 = FUNC_2(VAR_7->local, VAR_7, VAR_6);
 if (VAR_8) {
  FUNC_6(&VAR_7->u.nan.func_lock);
  FUNC_4(&VAR_7->u.nan.function_inst_ids,
      VAR_6->instance_id);
  FUNC_7(&VAR_7->u.nan.func_lock);
 }

 return VAR_8;
}
