
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_8__ {int sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
typedef int u8 ;
struct wireless_dev {scalar_t__ iftype; TYPE_2__* wiphy; TYPE_3__* current_bss; int ssid_len; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ieee80211_channel {int dummy; } ;
struct cfg80211_bss {int dummy; } ;
struct TYPE_10__ {int pub; } ;
struct TYPE_9__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 TYPE_3__* FUNC_1 (struct cfg80211_bss*) ;
 struct cfg80211_bss* FUNC_2 (TYPE_2__*,struct ieee80211_channel*,int const*,int *,int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct wireless_dev*) ;
 int FUNC_7 (int ,int const*,int ) ;
 int FUNC_8 (union iwreq_data*,int ,int) ;
 int FUNC_9 (int ,struct net_device*,int const*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct net_device*,int ,union iwreq_data*,int *) ;

void FUNC_12(struct net_device *VAR_7, const u8 *VAR_8,
       struct ieee80211_channel *VAR_9)
{
 struct wireless_dev *VAR_10 = VAR_7->ieee80211_ptr;
 struct cfg80211_bss *VAR_11;




 if (FUNC_0(VAR_10->iftype != VAR_4))
  return;

 if (!VAR_10->ssid_len)
  return;

 VAR_11 = FUNC_2(VAR_10->wiphy, VAR_9, VAR_8, ((void*)0), 0,
          VAR_2, VAR_3);

 if (FUNC_0(!VAR_11))
  return;

 if (VAR_10->current_bss) {
  FUNC_5(VAR_10->current_bss);
  FUNC_4(VAR_10->wiphy, &VAR_10->current_bss->pub);
 }

 FUNC_3(FUNC_1(VAR_11));
 VAR_10->current_bss = FUNC_1(VAR_11);

 if (!(VAR_10->wiphy->flags & VAR_6))
  FUNC_6(VAR_10);

 FUNC_9(FUNC_10(VAR_10->wiphy), VAR_7, VAR_8,
    VAR_1);





}
