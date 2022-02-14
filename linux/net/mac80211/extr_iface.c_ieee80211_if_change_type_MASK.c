
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use_4addr; } ;
struct TYPE_4__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; int vif; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int) ;
 scalar_t__ FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ieee80211_sub_if_data *VAR_1,
        enum nl80211_iftype VAR_2)
{
 int VAR_3;

 FUNC_0();

 if (VAR_2 == FUNC_5(&VAR_1->vif))
  return 0;

 if (FUNC_2(VAR_1)) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3)
   return VAR_3;
 } else {

  FUNC_4(VAR_1);
  FUNC_3(VAR_1, VAR_2);
 }


 if (VAR_2 == VAR_0)
  VAR_1->u.mgd.use_4addr = 0;

 return 0;
}
