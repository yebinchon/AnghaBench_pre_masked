
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_6__ {scalar_t__ tsf_bssid; scalar_t__ scan_start_tsf; } ;
struct cfg80211_scan_request {int n_ssids; int n_channels; TYPE_3__ info; scalar_t__ flags; scalar_t__ ie; int ie_len; TYPE_2__** channels; TYPE_1__* ssids; } ;
struct cfg80211_registered_device {struct cfg80211_scan_request* scan_req; } ;
struct TYPE_5__ {scalar_t__ center_freq; } ;
struct TYPE_4__ {scalar_t__ ssid; int ssid_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_9,
    struct cfg80211_registered_device *VAR_10)
{
 struct cfg80211_scan_request *VAR_11 = VAR_10->scan_req;
 struct nlattr *VAR_12;
 int VAR_13;

 if (FUNC_0(!VAR_11))
  return 0;

 VAR_12 = FUNC_2(VAR_9, VAR_5);
 if (!VAR_12)
  goto nla_put_failure;
 for (VAR_13 = 0; VAR_13 < VAR_11->n_ssids; VAR_13++) {
  if (FUNC_3(VAR_9, VAR_13, VAR_11->ssids[VAR_13].ssid_len, VAR_11->ssids[VAR_13].ssid))
   goto nla_put_failure;
 }
 FUNC_1(VAR_9, VAR_12);

 VAR_12 = FUNC_2(VAR_9, VAR_4);
 if (!VAR_12)
  goto nla_put_failure;
 for (VAR_13 = 0; VAR_13 < VAR_11->n_channels; VAR_13++) {
  if (FUNC_4(VAR_9, VAR_13, VAR_11->channels[VAR_13]->center_freq))
   goto nla_put_failure;
 }
 FUNC_1(VAR_9, VAR_12);

 if (VAR_11->ie &&
     FUNC_3(VAR_9, VAR_2, VAR_11->ie_len, VAR_11->ie))
  goto nla_put_failure;

 if (VAR_11->flags &&
     FUNC_4(VAR_9, VAR_3, VAR_11->flags))
  goto nla_put_failure;

 if (VAR_11->info.scan_start_tsf &&
     (FUNC_5(VAR_9, VAR_6,
          VAR_11->info.scan_start_tsf, VAR_8) ||
      FUNC_3(VAR_9, VAR_7, VAR_1,
       VAR_11->info.tsf_bssid)))
  goto nla_put_failure;

 return 0;
 nla_put_failure:
 return -VAR_0;
}
