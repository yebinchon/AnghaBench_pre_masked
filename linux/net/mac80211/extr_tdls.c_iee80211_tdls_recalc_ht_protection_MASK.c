
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {scalar_t__ ht_supported; } ;
struct TYPE_7__ {TYPE_1__ ht_cap; } ;
struct sta_info {TYPE_2__ sta; } ;
struct TYPE_8__ {int ht_operation_mode; } ;
struct TYPE_9__ {TYPE_3__ bss_conf; } ;
struct ieee80211_if_managed {int flags; } ;
struct TYPE_10__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_4__ vif; TYPE_5__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_sub_if_data *VAR_5,
       struct sta_info *VAR_6)
{
 struct ieee80211_if_managed *VAR_7 = &VAR_5->u.mgd;
 bool VAR_8;
 u16 VAR_9 = VAR_3 |
    VAR_1 |
    VAR_2;
 u16 VAR_10;


 if (!(VAR_7->flags & VAR_4))
  return;

 VAR_8 = (VAR_6 && VAR_6->sta.ht_cap.ht_supported) ||
    FUNC_0(VAR_5);

 VAR_10 = VAR_5->vif.bss_conf.ht_operation_mode;

 if (VAR_8)
  VAR_10 |= VAR_9;
 else
  VAR_10 &= ~VAR_9;

 if (VAR_10 == VAR_5->vif.bss_conf.ht_operation_mode)
  return;

 VAR_5->vif.bss_conf.ht_operation_mode = VAR_10;
 FUNC_1(VAR_5, VAR_0);
}
