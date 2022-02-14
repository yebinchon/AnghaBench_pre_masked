
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
 int FUNC_0 (struct ieee80211_sub_if_data*,struct sk_buff*,int const*,int,int const*,size_t,int,struct cfg80211_chan_def*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct sk_buff*,int const*,int ,int,int const*,size_t) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct sk_buff*,int const*,int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*,int const*,int,int const*,size_t) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct sk_buff*,int const*,int,int,int const*,size_t) ;
 int FUNC_5 (struct sk_buff*,int const*,size_t) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_sub_if_data *VAR_0,
       struct sk_buff *VAR_1, const u8 *VAR_2,
       u8 VAR_3, u16 VAR_4,
       bool VAR_5, const u8 *VAR_6,
       size_t VAR_7, u8 VAR_8,
       struct cfg80211_chan_def *VAR_9)
{
 switch (VAR_3) {
 case 130:
 case 129:
 case 135:
  if (VAR_4 == 0)
   FUNC_4(VAR_0, VAR_1, VAR_2,
          VAR_3,
          VAR_5,
          VAR_6,
          VAR_7);
  break;
 case 131:
  if (VAR_4 == 0)
   FUNC_3(VAR_0, VAR_1, VAR_2,
        VAR_5, VAR_6,
        VAR_7);
  break;
 case 128:
 case 132:
  if (VAR_7)
   FUNC_5(VAR_1, VAR_6, VAR_7);
  if (VAR_4 == 0 || VAR_3 == 128)
   FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5);
  break;
 case 134:
  FUNC_0(VAR_0, VAR_1, VAR_2,
             VAR_5, VAR_6,
             VAR_7,
             VAR_8, VAR_9);
  break;
 case 133:
  FUNC_1(VAR_0, VAR_1, VAR_2,
       VAR_4,
       VAR_5, VAR_6,
       VAR_7);
  break;
 }

}
