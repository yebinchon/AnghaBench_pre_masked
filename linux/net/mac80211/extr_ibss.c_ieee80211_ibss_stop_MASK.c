
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_if_ibss {int csa_connection_drop_work; } ;
struct TYPE_2__ {struct ieee80211_if_ibss ibss; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ieee80211_sub_if_data *VAR_0)
{
 struct ieee80211_if_ibss *VAR_1 = &VAR_0->u.ibss;

 FUNC_0(&VAR_1->csa_connection_drop_work);
}
