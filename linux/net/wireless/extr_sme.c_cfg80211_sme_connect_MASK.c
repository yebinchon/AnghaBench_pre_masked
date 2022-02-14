
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef struct cfg80211_connect_params {scalar_t__ auth_type; int ie_len; int ie; struct cfg80211_connect_params const* bssid; } const cfg80211_connect_params ;
typedef struct cfg80211_connect_params u8 ;
struct wireless_dev {TYPE_3__* conn; int wiphy; int ssid_len; int ssid; TYPE_5__* current_bss; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct cfg80211_bss {int dummy; } ;
typedef enum nl80211_timeout_reason { ____Placeholder_nl80211_timeout_reason } nl80211_timeout_reason ;
struct TYPE_10__ {struct cfg80211_bss pub; } ;
struct TYPE_8__ {int ssid_len; int ssid; int auth_type; int ie; int ie_len; struct TYPE_8__* bssid; } ;
struct TYPE_9__ {int auto_auth; int prev_bssid_valid; int state; TYPE_2__* prev_bssid; TYPE_2__ params; int ie; TYPE_2__* bssid; } ;
struct TYPE_7__ {int assoc; int auth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct wireless_dev*,int*) ;
 int FUNC_2 (struct wireless_dev*) ;
 struct cfg80211_bss* FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (int ,struct cfg80211_bss*) ;
 int FUNC_5 (struct wireless_dev*) ;
 scalar_t__ FUNC_6 (struct wireless_dev*,int ,int ,int *,int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_3__* FUNC_9 (int,int ) ;
 int FUNC_10 (TYPE_2__*,struct cfg80211_connect_params const*,int) ;
 struct cfg80211_registered_device* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct wireless_dev *VAR_9,
    struct cfg80211_connect_params *VAR_10,
    const u8 *VAR_11)
{
 struct cfg80211_registered_device *VAR_12 = FUNC_11(VAR_9->wiphy);
 struct cfg80211_bss *VAR_13;
 int VAR_14;

 if (!VAR_12->ops->auth || !VAR_12->ops->assoc)
  return -VAR_4;

 if (VAR_9->current_bss) {
  FUNC_7(VAR_9->current_bss);
  FUNC_4(VAR_9->wiphy, &VAR_9->current_bss->pub);
  VAR_9->current_bss = ((void*)0);

  FUNC_5(VAR_9);
 }

 if (FUNC_0(VAR_9->conn))
  return -VAR_2;

 VAR_9->conn = FUNC_9(sizeof(*VAR_9->conn), VAR_6);
 if (!VAR_9->conn)
  return -VAR_3;




 FUNC_10(&VAR_9->conn->params, VAR_10, sizeof(*VAR_10));
 if (VAR_10->bssid) {
  VAR_9->conn->params.bssid = VAR_9->conn->bssid;
  FUNC_10(VAR_9->conn->bssid, VAR_10->bssid, VAR_5);
 }

 if (FUNC_6(VAR_9, VAR_10->ie, VAR_10->ie_len,
          &VAR_9->conn->ie,
          &VAR_9->conn->params.ie_len)) {
  FUNC_8(VAR_9->conn);
  VAR_9->conn = ((void*)0);
  return -VAR_3;
 }
 VAR_9->conn->params.ie = VAR_9->conn->ie;

 if (VAR_10->auth_type == VAR_7) {
  VAR_9->conn->auto_auth = 1;

  VAR_9->conn->params.auth_type =
   VAR_8;
 } else {
  VAR_9->conn->auto_auth = 0;
 }

 VAR_9->conn->params.ssid = VAR_9->ssid;
 VAR_9->conn->params.ssid_len = VAR_9->ssid_len;


 VAR_13 = FUNC_3(VAR_9);

 if (VAR_11) {
  FUNC_10(VAR_9->conn->prev_bssid, VAR_11, VAR_5);
  VAR_9->conn->prev_bssid_valid = 1;
 }


 if (VAR_13) {
  enum nl80211_timeout_reason VAR_15;

  VAR_14 = FUNC_1(VAR_9, &VAR_15);
  FUNC_4(VAR_9->wiphy, VAR_13);
 } else {

  VAR_14 = FUNC_2(VAR_9);






  if (VAR_14 == -VAR_1) {
   VAR_14 = 0;
   VAR_9->conn->state = VAR_0;
  }
 }

 if (VAR_14)
  FUNC_5(VAR_9);

 return VAR_14;
}
