
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct sta_info {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int dummy; } ;


 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sta_info*,int ) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_4 (struct wiphy*,struct net_device*,int const*,int ,int ,int ,int ,int,int const*,size_t,int ,int *) ;
 int FUNC_5 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct ieee80211_sub_if_data*,char*,int) ;
 struct sta_info* FUNC_9 (struct ieee80211_sub_if_data*,int const*) ;

__attribute__((used)) static int
FUNC_10(struct wiphy *VAR_2, struct net_device *VAR_3,
        const u8 *VAR_4, u8 VAR_5, u8 VAR_6,
        u16 VAR_7, u32 VAR_8,
        bool VAR_9, const u8 *VAR_10,
        size_t VAR_11)
{
 struct ieee80211_sub_if_data *VAR_12 = FUNC_0(VAR_3);
 struct ieee80211_local *VAR_13 = VAR_12->local;
 struct sta_info *VAR_14;
 int VAR_15;







 FUNC_3(VAR_13, VAR_12,
      VAR_0);
 FUNC_2(VAR_13, VAR_12, 0);

 VAR_15 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_7,
           VAR_8, VAR_9,
           VAR_10, VAR_11, 0,
           ((void*)0));
 if (VAR_15 < 0)
  FUNC_8(VAR_12, "Failed sending TDLS teardown packet %d\n",
     VAR_15);





 FUNC_6();
 VAR_14 = FUNC_9(VAR_12, VAR_4);
 if (VAR_14)
  FUNC_1(VAR_14, VAR_1);
 FUNC_7();

 FUNC_5(VAR_13, VAR_12,
      VAR_0);

 return 0;
}
