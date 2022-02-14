
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct ieee80211_sub_if_data*,int const*,int const*,int ,struct ieee80211_channel*,int const*,size_t,int *,int ,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_sub_if_data *VAR_1,
       const u8 *VAR_2, const u8 *VAR_3,
       const u8 *VAR_4, size_t VAR_5,
       struct ieee80211_channel *VAR_6)
{
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, (u32)-1, VAR_6,
     VAR_4, VAR_5, ((void*)0), 0,
     VAR_0);
 if (VAR_7)
  FUNC_1(VAR_1, VAR_7);
}
