
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
struct TYPE_5__ {int erp_next_seq_num; scalar_t__ update_erp_next_seq_num; scalar_t__ pmkid; scalar_t__ pmk_len; scalar_t__ pmk; scalar_t__ kek_len; scalar_t__ kek; } ;
struct cfg80211_roam_info {int bss; TYPE_2__ fils; scalar_t__ resp_ie_len; scalar_t__ resp_ie; scalar_t__ req_ie_len; scalar_t__ req_ie; int bssid; int channel; } ;
struct cfg80211_registered_device {int event_work; } ;
struct TYPE_4__ {int erp_next_seq_num; scalar_t__ update_erp_next_seq_num; int * pmkid; int * pmk; scalar_t__ pmk_len; int * kek; scalar_t__ kek_len; } ;
struct TYPE_6__ {int bss; TYPE_1__ fils; int * resp_ie; scalar_t__ resp_ie_len; int * req_ie; scalar_t__ req_ie_len; } ;
struct cfg80211_event {int list; TYPE_3__ rm; int type; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 struct cfg80211_event* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (void*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct cfg80211_registered_device* FUNC_9 (int ) ;

void FUNC_10(struct net_device *VAR_4, struct cfg80211_roam_info *VAR_5,
       gfp_t VAR_6)
{
 struct wireless_dev *VAR_7 = VAR_4->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_8 = FUNC_9(VAR_7->wiphy);
 struct cfg80211_event *VAR_9;
 unsigned long VAR_10;
 u8 *VAR_11;

 if (!VAR_5->bss) {
  VAR_5->bss = FUNC_1(VAR_7->wiphy, VAR_5->channel,
          VAR_5->bssid, VAR_7->ssid,
          VAR_7->ssid_len,
          VAR_7->conn_bss_type,
          VAR_1);
 }

 if (FUNC_0(!VAR_5->bss))
  return;

 VAR_9 = FUNC_3(sizeof(*VAR_9) + VAR_5->req_ie_len + VAR_5->resp_ie_len +
       VAR_5->fils.kek_len + VAR_5->fils.pmk_len +
       (VAR_5->fils.pmkid ? VAR_2 : 0), VAR_6);
 if (!VAR_9) {
  FUNC_2(VAR_7->wiphy, VAR_5->bss);
  return;
 }

 VAR_9->type = VAR_0;
 VAR_11 = ((u8 *)VAR_9) + sizeof(*VAR_9);
 if (VAR_5->req_ie_len) {
  VAR_9->rm.req_ie = VAR_11;
  VAR_9->rm.req_ie_len = VAR_5->req_ie_len;
  FUNC_5((void *)VAR_9->rm.req_ie, VAR_5->req_ie, VAR_5->req_ie_len);
  VAR_11 += VAR_5->req_ie_len;
 }
 if (VAR_5->resp_ie_len) {
  VAR_9->rm.resp_ie = VAR_11;
  VAR_9->rm.resp_ie_len = VAR_5->resp_ie_len;
  FUNC_5((void *)VAR_9->rm.resp_ie, VAR_5->resp_ie,
         VAR_5->resp_ie_len);
  VAR_11 += VAR_5->resp_ie_len;
 }
 if (VAR_5->fils.kek_len) {
  VAR_9->rm.fils.kek = VAR_11;
  VAR_9->rm.fils.kek_len = VAR_5->fils.kek_len;
  FUNC_5((void *)VAR_9->rm.fils.kek, VAR_5->fils.kek,
         VAR_5->fils.kek_len);
  VAR_11 += VAR_5->fils.kek_len;
 }
 if (VAR_5->fils.pmk_len) {
  VAR_9->rm.fils.pmk = VAR_11;
  VAR_9->rm.fils.pmk_len = VAR_5->fils.pmk_len;
  FUNC_5((void *)VAR_9->rm.fils.pmk, VAR_5->fils.pmk,
         VAR_5->fils.pmk_len);
  VAR_11 += VAR_5->fils.pmk_len;
 }
 if (VAR_5->fils.pmkid) {
  VAR_9->rm.fils.pmkid = VAR_11;
  FUNC_5((void *)VAR_9->rm.fils.pmkid, VAR_5->fils.pmkid,
         VAR_2);
  VAR_11 += VAR_2;
 }
 VAR_9->rm.fils.update_erp_next_seq_num = VAR_5->fils.update_erp_next_seq_num;
 if (VAR_5->fils.update_erp_next_seq_num)
  VAR_9->rm.fils.erp_next_seq_num = VAR_5->fils.erp_next_seq_num;
 VAR_9->rm.bss = VAR_5->bss;

 FUNC_7(&VAR_7->event_lock, VAR_10);
 FUNC_4(&VAR_9->list, &VAR_7->event_list);
 FUNC_8(&VAR_7->event_lock, VAR_10);
 FUNC_6(VAR_3, &VAR_8->event_work);
}
