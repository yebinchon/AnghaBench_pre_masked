
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 int FUNC_0 (struct ieee80211_sub_if_data*,struct sk_buff*,int const*,int) ;
 int FUNC_1 (struct sk_buff*,int const*,size_t) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_sub_if_data *VAR_0,
     struct sk_buff *VAR_1, const u8 *VAR_2,
     u16 VAR_3, bool VAR_4,
     const u8 *VAR_5,
     size_t VAR_6)
{
 if (VAR_3 == 0)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);

 if (VAR_6)
  FUNC_1(VAR_1, VAR_5, VAR_6);
}
