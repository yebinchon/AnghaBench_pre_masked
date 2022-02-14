
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {struct ieee80211_channel* chan; int width; } ;
struct wireless_dev {int iftype; TYPE_3__ chandef; int wiphy; int mesh_id_len; int beacon_interval; int cac_started; TYPE_2__* current_bss; int ibss_dfs_possible; int ibss_fixed; scalar_t__ netdev; } ;
struct ieee80211_channel {int dummy; } ;
typedef enum cfg80211_chan_mode { ____Placeholder_cfg80211_chan_mode } cfg80211_chan_mode ;
struct TYPE_4__ {struct ieee80211_channel* channel; } ;
struct TYPE_5__ {TYPE_1__ pub; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_3__*,int) ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5(struct wireless_dev *VAR_3,
          struct ieee80211_channel **VAR_4,
          enum cfg80211_chan_mode *VAR_5,
          u8 *VAR_6)
{
 int VAR_7;

 *VAR_4 = ((void*)0);
 *VAR_5 = VAR_2;

 FUNC_0(VAR_3);

 if (VAR_3->netdev && !FUNC_4(VAR_3->netdev))
  return;

 switch (VAR_3->iftype) {
 case 141:
  if (VAR_3->current_bss) {
   *VAR_4 = VAR_3->current_bss->pub.channel;
   *VAR_5 = (VAR_3->ibss_fixed &&
         !VAR_3->ibss_dfs_possible)
      ? VAR_1
      : VAR_0;



   if (VAR_3->ibss_dfs_possible)
    *VAR_6 |= FUNC_1(VAR_3->chandef.width);
   return;
  }
  break;
 case 131:
 case 134:
  if (VAR_3->current_bss) {
   *VAR_4 = VAR_3->current_bss->pub.channel;
   *VAR_5 = VAR_1;
   return;
  }
  break;
 case 140:
 case 132:
  if (VAR_3->cac_started) {
   *VAR_4 = VAR_3->chandef.chan;
   *VAR_5 = VAR_1;
   *VAR_6 |= FUNC_1(VAR_3->chandef.width);
  } else if (VAR_3->beacon_interval) {
   *VAR_4 = VAR_3->chandef.chan;
   *VAR_5 = VAR_1;

   VAR_7 = FUNC_3(VAR_3->wiphy,
           &VAR_3->chandef,
           VAR_3->iftype);
   FUNC_2(VAR_7 < 0);
   if (VAR_7 > 0)
    *VAR_6 |= FUNC_1(VAR_3->chandef.width);
  }
  return;
 case 138:
  if (VAR_3->mesh_id_len) {
   *VAR_4 = VAR_3->chandef.chan;
   *VAR_5 = VAR_1;

   VAR_7 = FUNC_3(VAR_3->wiphy,
           &VAR_3->chandef,
           VAR_3->iftype);
   FUNC_2(VAR_7 < 0);
   if (VAR_7 > 0)
    *VAR_6 |= FUNC_1(VAR_3->chandef.width);
  }
  return;
 case 135:
  if (VAR_3->chandef.chan) {
   *VAR_4 = VAR_3->chandef.chan;
   *VAR_5 = VAR_1;
   return;
  }
  break;
 case 137:
 case 139:
 case 129:
 case 133:
 case 136:

  return;
 case 130:
 case 128:
  FUNC_2(1);
 }
}
