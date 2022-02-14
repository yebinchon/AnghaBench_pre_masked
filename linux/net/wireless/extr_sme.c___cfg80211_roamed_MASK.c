
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_10__ {int sa_data; int sa_family; } ;
struct TYPE_9__ {int length; } ;
union iwreq_data {TYPE_2__ ap_addr; TYPE_1__ data; } ;
struct TYPE_11__ {int prev_bssid_valid; int prev_bssid; } ;
struct wireless_dev {scalar_t__ iftype; int wiphy; int netdev; TYPE_3__ wext; TYPE_4__* current_bss; } ;
struct cfg80211_roam_info {TYPE_5__* bss; int * resp_ie; int resp_ie_len; int * req_ie; int req_ie_len; } ;
struct TYPE_13__ {int bssid; } ;
struct TYPE_12__ {TYPE_5__ pub; } ;


 int VAR_0 ;
 int FUNC_0 (struct wireless_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_4__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (union iwreq_data*,int ,int) ;
 int FUNC_8 (int ,int ,struct cfg80211_roam_info*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,union iwreq_data*,int *) ;

void FUNC_11(struct wireless_dev *VAR_8,
         struct cfg80211_roam_info *VAR_9)
{



 FUNC_0(VAR_8);

 if (FUNC_1(VAR_8->iftype != VAR_6 &&
      VAR_8->iftype != VAR_5))
  goto out;

 if (FUNC_1(!VAR_8->current_bss))
  goto out;

 FUNC_5(VAR_8->current_bss);
 FUNC_4(VAR_8->wiphy, &VAR_8->current_bss->pub);
 VAR_8->current_bss = ((void*)0);

 if (FUNC_1(!VAR_9->bss))
  return;

 FUNC_3(FUNC_2(VAR_9->bss));
 VAR_8->current_bss = FUNC_2(VAR_9->bss);

 FUNC_8(FUNC_9(VAR_8->wiphy),
       VAR_8->netdev, VAR_9, VAR_2);
 return;
out:
 FUNC_4(VAR_8->wiphy, VAR_9->bss);
}
