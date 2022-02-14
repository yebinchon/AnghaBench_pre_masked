
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct cfg80211_nan_conf {int dummy; } ;
struct TYPE_4__ {struct cfg80211_nan_conf conf; } ;
struct TYPE_5__ {TYPE_1__ nan; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; TYPE_3__* local; } ;
struct TYPE_6__ {int chanctx_mtx; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (TYPE_3__*,struct ieee80211_sub_if_data*,struct cfg80211_nan_conf*) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,int *,int ,int ) ;
 int FUNC_3 (struct wireless_dev*,int) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_0,
          struct wireless_dev *VAR_1,
          struct cfg80211_nan_conf *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 FUNC_5(&VAR_3->local->chanctx_mtx);
 VAR_4 = FUNC_2(VAR_3, ((void*)0), 0, 0);
 FUNC_6(&VAR_3->local->chanctx_mtx);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_1, 1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3->local, VAR_3, VAR_2);
 if (VAR_4)
  FUNC_4(VAR_3);

 VAR_3->u.nan.conf = *VAR_2;

 return VAR_4;
}
