
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,struct sk_buff*,int,int,int) ;
 int* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_sub_if_data *VAR_1,
     struct sk_buff *VAR_2)
{




 u8 VAR_3;
 u8 *VAR_4 = FUNC_1(VAR_2, 2);

 *VAR_4++ = VAR_0;







 VAR_3 = FUNC_0(VAR_1, VAR_2, 2412, 2472, 5);


 VAR_3 += FUNC_0(VAR_1, VAR_2, 5000, 5825, 20);


 *VAR_4 = 2 * VAR_3;
}
