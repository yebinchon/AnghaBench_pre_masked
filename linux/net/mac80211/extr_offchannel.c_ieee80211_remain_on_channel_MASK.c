
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int mtx; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct ieee80211_channel*,unsigned int,int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct wiphy *VAR_1, struct wireless_dev *VAR_2,
    struct ieee80211_channel *VAR_3,
    unsigned int VAR_4, u64 *VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_0(VAR_2);
 struct ieee80211_local *VAR_7 = VAR_6->local;
 int VAR_8;

 FUNC_2(&VAR_7->mtx);
 VAR_8 = FUNC_1(VAR_7, VAR_6, VAR_3,
           VAR_4, VAR_5, ((void*)0),
           VAR_0);
 FUNC_3(&VAR_7->mtx);

 return VAR_8;
}
