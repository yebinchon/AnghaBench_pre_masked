
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {TYPE_2__* conn; int conn_bss_type; int wiphy; } ;
struct cfg80211_registered_device {int conn_work; } ;
struct cfg80211_bss {int channel; int bssid; } ;
struct TYPE_3__ {int channel; int bssid; int privacy; int ssid_len; int ssid; } ;
struct TYPE_4__ {int state; TYPE_1__ params; int bssid; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct cfg80211_bss* FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 struct cfg80211_registered_device* FUNC_5 (int ) ;

__attribute__((used)) static struct cfg80211_bss *FUNC_6(struct wireless_dev *VAR_2)
{
 struct cfg80211_registered_device *VAR_3 = FUNC_5(VAR_2->wiphy);
 struct cfg80211_bss *VAR_4;

 FUNC_0(VAR_2);

 VAR_4 = FUNC_2(VAR_2->wiphy, VAR_2->conn->params.channel,
          VAR_2->conn->params.bssid,
          VAR_2->conn->params.ssid,
          VAR_2->conn->params.ssid_len,
          VAR_2->conn_bss_type,
          FUNC_1(VAR_2->conn->params.privacy));
 if (!VAR_4)
  return ((void*)0);

 FUNC_3(VAR_2->conn->bssid, VAR_4->bssid, VAR_1);
 VAR_2->conn->params.bssid = VAR_2->conn->bssid;
 VAR_2->conn->params.channel = VAR_4->channel;
 VAR_2->conn->state = VAR_0;
 FUNC_4(&VAR_3->conn_work);

 return VAR_4;
}
