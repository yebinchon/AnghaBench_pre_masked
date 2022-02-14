
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_2__ mgd; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_3__ u; TYPE_1__ vif; } ;
struct ieee80211_local {int roc_list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_local *VAR_2,
          struct ieee80211_sub_if_data *VAR_3)
{
 if (!FUNC_0(VAR_3))
  return 0;

 if (!FUNC_1(&VAR_2->roc_list))
  return 0;

 if (VAR_3->vif.type == VAR_1 &&
     VAR_3->u.mgd.flags & VAR_0)
  return 0;

 return 1;
}
