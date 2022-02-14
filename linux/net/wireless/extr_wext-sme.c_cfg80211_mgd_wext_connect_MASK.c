
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int bg_scan_period; int privacy; int ssid_len; int ie_len; int ie; } ;
struct TYPE_6__ {int default_key; TYPE_4__ connect; int * prev_bssid; scalar_t__ prev_bssid_valid; TYPE_3__* keys; int ie_len; int ie; } ;
struct wireless_dev {TYPE_2__ wext; int netdev; } ;
struct cfg80211_registered_device {int dummy; } ;
struct cfg80211_cached_keys {int * data; TYPE_1__* params; } ;
struct TYPE_7__ {int def; } ;
struct TYPE_5__ {int key; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct cfg80211_registered_device*,int ,TYPE_4__*,struct cfg80211_cached_keys*,int const*) ;
 struct cfg80211_cached_keys* FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (struct cfg80211_cached_keys*) ;
 int FUNC_5 (int ) ;

int FUNC_6(struct cfg80211_registered_device *VAR_3,
         struct wireless_dev *VAR_4)
{
 struct cfg80211_cached_keys *VAR_5 = ((void*)0);
 const u8 *VAR_6 = ((void*)0);
 int VAR_7, VAR_8;

 FUNC_0();
 FUNC_1(VAR_4);

 if (!FUNC_5(VAR_4->netdev))
  return 0;

 VAR_4->wext.connect.ie = VAR_4->wext.ie;
 VAR_4->wext.connect.ie_len = VAR_4->wext.ie_len;


 VAR_4->wext.connect.bg_scan_period = -1;

 if (VAR_4->wext.keys) {
  VAR_4->wext.keys->def = VAR_4->wext.default_key;
  if (VAR_4->wext.default_key != -1)
   VAR_4->wext.connect.privacy = 1;
 }

 if (!VAR_4->wext.connect.ssid_len)
  return 0;

 if (VAR_4->wext.keys && VAR_4->wext.keys->def != -1) {
  VAR_5 = FUNC_3(VAR_4->wext.keys, sizeof(*VAR_5), VAR_2);
  if (!VAR_5)
   return -VAR_1;
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   VAR_5->params[VAR_8].key = VAR_5->data[VAR_8];
 }

 if (VAR_4->wext.prev_bssid_valid)
  VAR_6 = VAR_4->wext.prev_bssid;

 VAR_7 = FUNC_2(VAR_3, VAR_4->netdev,
          &VAR_4->wext.connect, VAR_5, VAR_6);
 if (VAR_7)
  FUNC_4(VAR_5);

 return VAR_7;
}
