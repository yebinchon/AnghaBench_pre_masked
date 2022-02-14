
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vif_params {int flags; scalar_t__ vht_mumimo_follow_addr; scalar_t__ vht_mumimo_groups; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ mntr; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; struct ieee80211_local* local; } ;
struct ieee80211_local {int monitor_sdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_sub_if_data*,int) ;
 int FUNC_1 (struct ieee80211_local*) ;
 scalar_t__ FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct vif_params*) ;
 struct ieee80211_sub_if_data* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_sub_if_data *VAR_4,
         struct vif_params *VAR_5)
{
 struct ieee80211_local *VAR_6 = VAR_4->local;
 struct ieee80211_sub_if_data *VAR_7;


 if (VAR_5->flags && FUNC_2(VAR_4)) {
  u32 VAR_8 = VAR_3 | VAR_2;
  if ((VAR_5->flags & VAR_8) != (VAR_4->u.mntr.flags & VAR_8))
   return -VAR_0;
 }


 VAR_7 = FUNC_4(VAR_6->monitor_sdata);

 if (!VAR_7 &&
     (VAR_5->vht_mumimo_groups || VAR_5->vht_mumimo_follow_addr))
  return -VAR_1;



 if (VAR_7)
  FUNC_3(VAR_7, VAR_5);

 if (VAR_5->flags) {
  if (FUNC_2(VAR_4)) {
   FUNC_0(VAR_4, -1);
   VAR_4->u.mntr.flags = VAR_5->flags;
   FUNC_0(VAR_4, 1);

   FUNC_1(VAR_6);
  } else {





   VAR_4->u.mntr.flags = VAR_5->flags;
  }
 }

 return 0;
}
