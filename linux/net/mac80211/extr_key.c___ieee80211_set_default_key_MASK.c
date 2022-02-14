
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {int default_multicast_key; int local; TYPE_1__ vif; int default_unicast_key; int * keys; } ;
struct ieee80211_key {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ieee80211_sub_if_data*,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_key* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct ieee80211_key*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_sub_if_data *VAR_2,
     int VAR_3, bool VAR_4, bool VAR_5)
{
 struct ieee80211_key *VAR_6 = ((void*)0);

 FUNC_0(VAR_2->local);

 if (VAR_3 >= 0 && VAR_3 < VAR_1)
  VAR_6 = FUNC_4(VAR_2->local, VAR_2->keys[VAR_3]);

 if (VAR_4) {
  FUNC_5(VAR_2->default_unicast_key, VAR_6);
  FUNC_2(VAR_2);
  if (VAR_2->vif.type != VAR_0)
   FUNC_1(VAR_2->local, VAR_2, VAR_3);
 }

 if (VAR_5)
  FUNC_5(VAR_2->default_multicast_key, VAR_6);

 FUNC_3(VAR_2);
}
