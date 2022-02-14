
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ mntr; } ;
struct ieee80211_sub_if_data {int flags; TYPE_4__ vif; TYPE_2__ u; } ;
struct ieee80211_local {int hw; TYPE_3__* ops; } ;
struct TYPE_7__ {int (* add_interface ) (int *,TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_local*,int) ;

int FUNC_6(struct ieee80211_local *VAR_6,
        struct ieee80211_sub_if_data *VAR_7)
{
 int VAR_8;

 FUNC_2();

 if (FUNC_0(VAR_7->vif.type == VAR_3 ||
      (VAR_7->vif.type == VAR_4 &&
       !FUNC_1(&VAR_6->hw, VAR_5) &&
       !(VAR_7->u.mntr.flags & VAR_2))))
  return -VAR_0;

 FUNC_4(VAR_6, VAR_7);
 VAR_8 = VAR_6->ops->add_interface(&VAR_6->hw, &VAR_7->vif);
 FUNC_5(VAR_6, VAR_8);

 if (VAR_8 == 0)
  VAR_7->flags |= VAR_1;

 return VAR_8;
}
