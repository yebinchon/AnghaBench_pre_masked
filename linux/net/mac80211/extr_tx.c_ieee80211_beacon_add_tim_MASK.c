
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ps_data {int dummy; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int tim_lock; scalar_t__ tim_in_locked_section; } ;


 int FUNC_0 (struct ieee80211_sub_if_data*,struct ps_data*,struct sk_buff*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_sub_if_data *VAR_0,
        struct ps_data *VAR_1, struct sk_buff *VAR_2,
        bool VAR_3)
{
 struct ieee80211_local *VAR_4 = VAR_0->local;
 if (VAR_4->tim_in_locked_section) {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 } else {
  FUNC_1(&VAR_4->tim_lock);
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_2(&VAR_4->tim_lock);
 }

 return 0;
}
