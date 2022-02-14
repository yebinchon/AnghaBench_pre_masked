
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct ieee80211_if_managed {TYPE_3__* tx_tspec; } ;
struct TYPE_4__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int wmm_acm; TYPE_2__ vif; TYPE_1__ u; } ;
struct TYPE_6__ {int admitted_time; size_t tsid; size_t up; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_sub_if_data* FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_5, struct net_device *VAR_6,
          u8 VAR_7, const u8 *VAR_8, u8 VAR_9,
          u16 VAR_10)
{
 struct ieee80211_sub_if_data *VAR_11 = FUNC_1(VAR_6);
 struct ieee80211_if_managed *VAR_12 = &VAR_11->u.mgd;
 int VAR_13 = VAR_4[VAR_9];

 if (VAR_11->vif.type != VAR_3)
  return -VAR_2;

 if (!(VAR_11->wmm_acm & FUNC_0(VAR_9)))
  return -VAR_1;

 if (VAR_12->tx_tspec[VAR_13].admitted_time)
  return -VAR_0;

 if (VAR_10) {
  VAR_12->tx_tspec[VAR_13].admitted_time = 32 * VAR_10;
  VAR_12->tx_tspec[VAR_13].tsid = VAR_7;
  VAR_12->tx_tspec[VAR_13].up = VAR_9;
 }

 return 0;
}
