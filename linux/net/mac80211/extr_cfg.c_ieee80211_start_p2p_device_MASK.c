
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct ieee80211_sub_if_data {TYPE_1__* local; } ;
struct TYPE_2__ {int chanctx_mtx; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int *,int ,int ) ;
 int FUNC_2 (struct wireless_dev*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_0,
          struct wireless_dev *VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 FUNC_3(&VAR_2->local->chanctx_mtx);
 VAR_3 = FUNC_1(VAR_2, ((void*)0), 0, 0);
 FUNC_4(&VAR_2->local->chanctx_mtx);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_2(VAR_1, 1);
}
