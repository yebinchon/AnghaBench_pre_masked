
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct wireless_dev {size_t iftype; TYPE_7__* current_bss; TYPE_3__* wiphy; } ;
struct TYPE_12__ {scalar_t__ category; } ;
struct TYPE_13__ {TYPE_5__ action; } ;
struct ieee80211_mgmt {TYPE_6__ u; int frame_control; int sa; int bssid; int da; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct cfg80211_mgmt_tx_params {int len; scalar_t__ buf; } ;
struct TYPE_11__ {int bssid; } ;
struct TYPE_14__ {TYPE_4__ pub; } ;
struct TYPE_10__ {TYPE_2__* mgmt_stypes; } ;
struct TYPE_9__ {int tx; } ;
struct TYPE_8__ {int mgmt_tx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct cfg80211_registered_device*,struct wireless_dev*,struct cfg80211_mgmt_tx_params*,int *) ;
 int FUNC_6 (struct wireless_dev*) ;
 int FUNC_7 (struct wireless_dev*) ;
 int FUNC_8 (struct wireless_dev*) ;
 int FUNC_9 (int *,int ) ;

int FUNC_10(struct cfg80211_registered_device *VAR_7,
     struct wireless_dev *VAR_8,
     struct cfg80211_mgmt_tx_params *VAR_9, u64 *VAR_10)
{
 const struct ieee80211_mgmt *VAR_11;
 u16 VAR_12;

 if (!VAR_8->wiphy->mgmt_stypes)
  return -VAR_2;

 if (!VAR_7->ops->mgmt_tx)
  return -VAR_2;

 if (VAR_9->len < 24 + 1)
  return -VAR_0;

 VAR_11 = (const struct ieee80211_mgmt *)VAR_9->buf;

 if (!FUNC_3(VAR_11->frame_control))
  return -VAR_0;

 VAR_12 = FUNC_4(VAR_11->frame_control) & VAR_3;
 if (!(VAR_8->wiphy->mgmt_stypes[VAR_8->iftype].tx & FUNC_0(VAR_12 >> 4)))
  return -VAR_0;

 if (FUNC_2(VAR_11->frame_control) &&
     VAR_11->u.action.category != VAR_6) {
  int VAR_13 = 0;

  FUNC_7(VAR_8);

  switch (VAR_8->iftype) {
  case 136:
  case 128:
  case 131:
   if (!VAR_8->current_bss) {
    VAR_13 = -VAR_1;
    break;
   }

   if (!FUNC_1(VAR_8->current_bss->pub.bssid,
           VAR_11->bssid)) {
    VAR_13 = -VAR_1;
    break;
   }





   if (VAR_8->iftype == 136)
    break;


   if (!FUNC_1(VAR_8->current_bss->pub.bssid,
           VAR_11->da)) {
    VAR_13 = -VAR_1;
    break;
   }
   break;
  case 135:
  case 129:
  case 134:
   if (!FUNC_1(VAR_11->bssid, FUNC_6(VAR_8)))
    VAR_13 = -VAR_0;
   break;
  case 133:
   if (!FUNC_1(VAR_11->sa, VAR_11->bssid)) {
    VAR_13 = -VAR_0;
    break;
   }




   break;
  case 130:




  case 132:
  default:
   VAR_13 = -VAR_2;
   break;
  }
  FUNC_8(VAR_8);

  if (VAR_13)
   return VAR_13;
 }

 if (!FUNC_1(VAR_11->sa, FUNC_6(VAR_8))) {




  if (!FUNC_2(VAR_11->frame_control) ||
      VAR_11->u.action.category != VAR_6)
   return -VAR_0;
  if (!VAR_8->current_bss &&
      !FUNC_9(
       &VAR_7->wiphy,
       VAR_4))
   return -VAR_0;
  if (VAR_8->current_bss &&
      !FUNC_9(
       &VAR_7->wiphy,
       VAR_5))
   return -VAR_0;
 }


 return FUNC_5(VAR_7, VAR_8, VAR_9, VAR_10);
}
