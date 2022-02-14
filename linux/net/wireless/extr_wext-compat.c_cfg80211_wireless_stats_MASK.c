
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wstats ;
typedef int u8 ;
struct wireless_dev {scalar_t__ iftype; TYPE_3__* current_bss; int wiphy; } ;
struct TYPE_12__ {int retries; int misc; } ;
struct TYPE_11__ {int level; int qual; int updated; } ;
struct station_info {int filled; int signal; int tx_failed; TYPE_6__ discard; int rx_dropped_misc; TYPE_5__ qual; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct iw_statistics {int filled; int signal; int tx_failed; TYPE_6__ discard; int rx_dropped_misc; TYPE_5__ qual; } ;
struct TYPE_10__ {int signal_type; } ;
struct cfg80211_registered_device {TYPE_4__ wiphy; TYPE_1__* ops; } ;
typedef int sinfo ;
struct TYPE_8__ {int bssid; } ;
struct TYPE_9__ {TYPE_2__ pub; } ;
struct TYPE_7__ {int get_station; } ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct station_info*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct station_info*,int ,int) ;
 scalar_t__ FUNC_4 (struct cfg80211_registered_device*,struct net_device*,int *,struct station_info*) ;
 int FUNC_5 (struct wireless_dev*) ;
 int FUNC_6 (struct wireless_dev*) ;
 struct cfg80211_registered_device* FUNC_7 (int ) ;

__attribute__((used)) static struct iw_statistics *FUNC_8(struct net_device *VAR_11)
{
 struct wireless_dev *VAR_12 = VAR_11->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_13 = FUNC_7(VAR_12->wiphy);

 static struct iw_statistics VAR_14;
 static struct station_info VAR_15 = {};
 u8 VAR_16[VAR_0];

 if (VAR_11->ieee80211_ptr->iftype != VAR_7)
  return ((void*)0);

 if (!VAR_13->ops->get_station)
  return ((void*)0);


 FUNC_5(VAR_12);
 if (!VAR_12->current_bss) {
  FUNC_6(VAR_12);
  return ((void*)0);
 }
 FUNC_2(VAR_16, VAR_12->current_bss->pub.bssid, VAR_0);
 FUNC_6(VAR_12);

 FUNC_3(&VAR_15, 0, sizeof(VAR_15));

 if (FUNC_4(VAR_13, VAR_11, VAR_16, &VAR_15))
  return ((void*)0);

 FUNC_3(&VAR_14, 0, sizeof(VAR_14));

 switch (VAR_13->wiphy.signal_type) {
 case 129:
  if (VAR_15.filled & FUNC_0(VAR_9)) {
   int VAR_17 = VAR_15.signal;
   VAR_14.qual.updated |= VAR_3;
   VAR_14.qual.updated |= VAR_6;
   VAR_14.qual.updated |= VAR_1;
   VAR_14.qual.level = VAR_17;
   if (VAR_17 < -110)
    VAR_17 = -110;
   else if (VAR_17 > -40)
    VAR_17 = -40;
   VAR_14.qual.qual = VAR_17 + 110;
   break;
  }

 case 128:
  if (VAR_15.filled & FUNC_0(VAR_9)) {
   VAR_14.qual.updated |= VAR_3;
   VAR_14.qual.updated |= VAR_6;
   VAR_14.qual.level = VAR_15.signal;
   VAR_14.qual.qual = VAR_15.signal;
   break;
  }

 default:
  VAR_14.qual.updated |= VAR_2;
  VAR_14.qual.updated |= VAR_5;
 }

 VAR_14.qual.updated |= VAR_4;
 if (VAR_15.filled & FUNC_0(VAR_8))
  VAR_14.discard.misc = VAR_15.rx_dropped_misc;
 if (VAR_15.filled & FUNC_0(VAR_10))
  VAR_14.discard.retries = VAR_15.tx_failed;

 FUNC_1(&VAR_15);

 return &VAR_14;
}
