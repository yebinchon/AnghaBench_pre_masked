
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int wrqu ;
struct TYPE_22__ {int sa_data; int sa_family; } ;
struct TYPE_21__ {int length; } ;
union iwreq_data {TYPE_2__ ap_addr; TYPE_1__ data; } ;
typedef scalar_t__ u8 ;
struct TYPE_23__ {int prev_bssid_valid; int prev_bssid; } ;
struct wireless_dev {scalar_t__ iftype; TYPE_7__* wiphy; TYPE_11__* current_bss; scalar_t__ conn_owner_nlportid; scalar_t__ ssid_len; int * connect_keys; int conn_bss_type; int ssid; TYPE_3__ wext; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_connect_resp_params {scalar_t__ status; TYPE_10__* bss; int bssid; int * resp_ie; int resp_ie_len; int * req_ie; int req_ie_len; } ;
struct TYPE_27__ {int flags; } ;
struct TYPE_26__ {TYPE_4__* ops; } ;
struct TYPE_25__ {int band; } ;
struct TYPE_24__ {int connect; } ;
struct TYPE_19__ {TYPE_5__* channel; } ;
struct TYPE_20__ {TYPE_10__ pub; } ;


 int VAR_0 ;
 int FUNC_0 (struct wireless_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_11__* FUNC_3 (TYPE_10__*) ;
 TYPE_10__* FUNC_4 (TYPE_7__*,int *,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (TYPE_7__*,TYPE_10__*) ;
 int FUNC_7 (struct wireless_dev*) ;
 int FUNC_8 (TYPE_11__*) ;
 int FUNC_9 (struct wireless_dev*) ;
 scalar_t__* FUNC_10 (TYPE_10__*,int ) ;
 int FUNC_11 (scalar_t__ const*) ;
 scalar_t__* FUNC_12 (scalar_t__ const*,scalar_t__ const,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (union iwreq_data*,int ,int) ;
 int FUNC_16 (TYPE_6__*,struct net_device*,struct cfg80211_connect_resp_params*,int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (TYPE_7__*,int ,scalar_t__ const*,scalar_t__ const) ;
 TYPE_6__* FUNC_20 (TYPE_7__*) ;
 int FUNC_21 (struct net_device*,int ,union iwreq_data*,int *) ;

void FUNC_22(struct net_device *VAR_13,
          struct cfg80211_connect_resp_params *VAR_14,
          bool VAR_15)
{
 struct wireless_dev *VAR_16 = VAR_13->ieee80211_ptr;
 const u8 *VAR_17;




 FUNC_0(VAR_16);

 if (FUNC_1(VAR_16->iftype != VAR_8 &&
      VAR_16->iftype != VAR_7)) {
  FUNC_6(VAR_16->wiphy, VAR_14->bss);
  return;
 }

 FUNC_16(FUNC_20(VAR_16->wiphy), VAR_13, VAR_14,
        VAR_3);
 if (!VAR_14->bss && (VAR_14->status == VAR_12)) {
  FUNC_2(!FUNC_20(VAR_16->wiphy)->ops->connect);
  VAR_14->bss = FUNC_4(VAR_16->wiphy, ((void*)0), VAR_14->bssid,
        VAR_16->ssid, VAR_16->ssid_len,
        VAR_16->conn_bss_type,
        VAR_4);
  if (VAR_14->bss)
   FUNC_5(FUNC_3(VAR_14->bss));
 }

 if (VAR_16->current_bss) {
  FUNC_8(VAR_16->current_bss);
  FUNC_6(VAR_16->wiphy, &VAR_16->current_bss->pub);
  VAR_16->current_bss = ((void*)0);
 }

 if (VAR_14->status != VAR_12) {
  FUNC_13(VAR_16->connect_keys);
  VAR_16->connect_keys = ((void*)0);
  VAR_16->ssid_len = 0;
  VAR_16->conn_owner_nlportid = 0;
  if (VAR_14->bss) {
   FUNC_8(FUNC_3(VAR_14->bss));
   FUNC_6(VAR_16->wiphy, VAR_14->bss);
  }
  FUNC_7(VAR_16);
  return;
 }

 if (FUNC_1(!VAR_14->bss))
  return;

 VAR_16->current_bss = FUNC_3(VAR_14->bss);

 if (!(VAR_16->wiphy->flags & VAR_10))
  FUNC_9(VAR_16);

 FUNC_17();
 VAR_17 = FUNC_10(VAR_14->bss, VAR_11);
 if (!VAR_17) {
  FUNC_18();
  return;
 }

 VAR_17 = FUNC_12(VAR_17, 2 + VAR_17[1], VAR_2);
 FUNC_18();

 if (!VAR_17)
  return;






 FUNC_19(VAR_16->wiphy, VAR_14->bss->channel->band,
       VAR_17 + 2, VAR_17[1]);
 FUNC_11(VAR_17);
}
