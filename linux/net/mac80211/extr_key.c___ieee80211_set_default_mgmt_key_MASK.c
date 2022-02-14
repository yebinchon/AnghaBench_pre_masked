
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sub_if_data {int default_mgmt_key; int * keys; int local; } ;
struct ieee80211_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_key* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct ieee80211_key*) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_sub_if_data *VAR_2, int VAR_3)
{
 struct ieee80211_key *VAR_4 = ((void*)0);

 FUNC_0(VAR_2->local);

 if (VAR_3 >= VAR_0 &&
     VAR_3 < VAR_0 + VAR_1)
  VAR_4 = FUNC_2(VAR_2->local, VAR_2->keys[VAR_3]);

 FUNC_3(VAR_2->default_mgmt_key, VAR_4);

 FUNC_1(VAR_2);
}
