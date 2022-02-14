
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {int event_lock; int event_list; int wiphy; int conn_bss_type; int ssid_len; int ssid; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {int event_work; } ;
struct cfg80211_internal_bss {int ts; int list; } ;
struct TYPE_4__ {int kek_len; int pmk_len; int erp_next_seq_num; scalar_t__ update_erp_next_seq_num; int * pmkid; int * pmk; int * kek; } ;
struct TYPE_5__ {int req_ie_len; int resp_ie_len; int timeout_reason; int status; struct cfg80211_bss* bss; TYPE_1__ fils; int * resp_ie; int * req_ie; int * bssid; } ;
struct cfg80211_event {int list; TYPE_2__ cr; int type; } ;
struct TYPE_6__ {int kek_len; int pmk_len; int erp_next_seq_num; scalar_t__ update_erp_next_seq_num; scalar_t__ pmkid; scalar_t__ pmk; scalar_t__ kek; } ;
struct cfg80211_connect_resp_params {int req_ie_len; int resp_ie_len; int timeout_reason; int status; struct cfg80211_bss* bss; TYPE_3__ fils; scalar_t__ resp_ie; scalar_t__ req_ie; scalar_t__ bssid; } ;
struct cfg80211_bss {int bssid; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cfg80211_internal_bss* FUNC_0 (struct cfg80211_bss*) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct cfg80211_internal_bss*,int,int ) ;
 struct cfg80211_bss* FUNC_2 (int ,int *,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct cfg80211_internal_bss*) ;
 int FUNC_4 (int ,struct cfg80211_bss*) ;
 int VAR_4 ;
 struct cfg80211_event* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (void*,scalar_t__,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 struct cfg80211_registered_device* FUNC_12 (int ) ;

void FUNC_13(struct net_device *VAR_5,
      struct cfg80211_connect_resp_params *VAR_6,
      gfp_t VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_5->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_9 = FUNC_12(VAR_8->wiphy);
 struct cfg80211_event *VAR_10;
 unsigned long VAR_11;
 u8 *VAR_12;

 if (VAR_6->bss) {
  struct cfg80211_internal_bss *VAR_13 = FUNC_0(VAR_6->bss);

  if (FUNC_7(&VAR_13->list)) {
   struct cfg80211_bss *VAR_14 = ((void*)0), *VAR_15 = VAR_6->bss;

   VAR_14 = FUNC_2(VAR_8->wiphy, ((void*)0),
       VAR_6->bss->bssid,
       VAR_8->ssid, VAR_8->ssid_len,
       VAR_8->conn_bss_type,
       VAR_2);
   if (VAR_14) {



    VAR_6->bss = VAR_14;
   } else {
    FUNC_1(VAR_9, VAR_13, 0,
          VAR_13->ts);
   }

   FUNC_4(VAR_8->wiphy, VAR_15);
  }
 }

 VAR_10 = FUNC_5(sizeof(*VAR_10) + (VAR_6->bssid ? VAR_0 : 0) +
       VAR_6->req_ie_len + VAR_6->resp_ie_len +
       VAR_6->fils.kek_len + VAR_6->fils.pmk_len +
       (VAR_6->fils.pmkid ? VAR_3 : 0), VAR_7);
 if (!VAR_10) {
  FUNC_4(VAR_8->wiphy, VAR_6->bss);
  return;
 }

 VAR_10->type = VAR_1;
 VAR_12 = ((u8 *)VAR_10) + sizeof(*VAR_10);
 if (VAR_6->bssid) {
  VAR_10->cr.bssid = VAR_12;
  FUNC_8((void *)VAR_10->cr.bssid, VAR_6->bssid, VAR_0);
  VAR_12 += VAR_0;
 }
 if (VAR_6->req_ie_len) {
  VAR_10->cr.req_ie = VAR_12;
  VAR_10->cr.req_ie_len = VAR_6->req_ie_len;
  FUNC_8((void *)VAR_10->cr.req_ie, VAR_6->req_ie,
         VAR_6->req_ie_len);
  VAR_12 += VAR_6->req_ie_len;
 }
 if (VAR_6->resp_ie_len) {
  VAR_10->cr.resp_ie = VAR_12;
  VAR_10->cr.resp_ie_len = VAR_6->resp_ie_len;
  FUNC_8((void *)VAR_10->cr.resp_ie, VAR_6->resp_ie,
         VAR_6->resp_ie_len);
  VAR_12 += VAR_6->resp_ie_len;
 }
 if (VAR_6->fils.kek_len) {
  VAR_10->cr.fils.kek = VAR_12;
  VAR_10->cr.fils.kek_len = VAR_6->fils.kek_len;
  FUNC_8((void *)VAR_10->cr.fils.kek, VAR_6->fils.kek,
         VAR_6->fils.kek_len);
  VAR_12 += VAR_6->fils.kek_len;
 }
 if (VAR_6->fils.pmk_len) {
  VAR_10->cr.fils.pmk = VAR_12;
  VAR_10->cr.fils.pmk_len = VAR_6->fils.pmk_len;
  FUNC_8((void *)VAR_10->cr.fils.pmk, VAR_6->fils.pmk,
         VAR_6->fils.pmk_len);
  VAR_12 += VAR_6->fils.pmk_len;
 }
 if (VAR_6->fils.pmkid) {
  VAR_10->cr.fils.pmkid = VAR_12;
  FUNC_8((void *)VAR_10->cr.fils.pmkid, VAR_6->fils.pmkid,
         VAR_3);
  VAR_12 += VAR_3;
 }
 VAR_10->cr.fils.update_erp_next_seq_num = VAR_6->fils.update_erp_next_seq_num;
 if (VAR_6->fils.update_erp_next_seq_num)
  VAR_10->cr.fils.erp_next_seq_num = VAR_6->fils.erp_next_seq_num;
 if (VAR_6->bss)
  FUNC_3(FUNC_0(VAR_6->bss));
 VAR_10->cr.bss = VAR_6->bss;
 VAR_10->cr.status = VAR_6->status;
 VAR_10->cr.timeout_reason = VAR_6->timeout_reason;

 FUNC_10(&VAR_8->event_lock, VAR_11);
 FUNC_6(&VAR_10->list, &VAR_8->event_list);
 FUNC_11(&VAR_8->event_lock, VAR_11);
 FUNC_9(VAR_4, &VAR_9->event_work);
}
