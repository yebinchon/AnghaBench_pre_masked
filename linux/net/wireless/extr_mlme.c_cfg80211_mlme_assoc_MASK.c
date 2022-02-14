
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {TYPE_2__* current_bss; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_7__ {int vht_capa_mod_mask; int ht_capa_mod_mask; } ;
struct cfg80211_registered_device {TYPE_3__ wiphy; } ;
struct cfg80211_assoc_request {int bss; int vht_capa_mask; int ht_capa_mask; int prev_bssid; } ;
struct TYPE_5__ {int bssid; } ;
struct TYPE_6__ {TYPE_1__ pub; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,struct ieee80211_channel*,int const*,int const*,int,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct cfg80211_registered_device*,struct net_device*,struct cfg80211_assoc_request*) ;

int FUNC_9(struct cfg80211_registered_device *VAR_4,
   struct net_device *VAR_5,
   struct ieee80211_channel *VAR_6,
   const u8 *VAR_7,
   const u8 *VAR_8, int VAR_9,
   struct cfg80211_assoc_request *VAR_10)
{
 struct wireless_dev *VAR_11 = VAR_5->ieee80211_ptr;
 int VAR_12;

 FUNC_0(VAR_11);

 if (VAR_11->current_bss &&
     (!VAR_10->prev_bssid || !FUNC_7(VAR_11->current_bss->pub.bssid,
         VAR_10->prev_bssid)))
  return -VAR_0;

 FUNC_4(&VAR_10->ht_capa_mask,
      VAR_4->wiphy.ht_capa_mod_mask);
 FUNC_5(&VAR_10->vht_capa_mask,
       VAR_4->wiphy.vht_capa_mod_mask);

 VAR_10->bss = FUNC_2(&VAR_4->wiphy, VAR_6, VAR_7, VAR_8, VAR_9,
        VAR_2,
        VAR_3);
 if (!VAR_10->bss)
  return -VAR_1;

 VAR_12 = FUNC_8(VAR_4, VAR_5, VAR_10);
 if (!VAR_12)
  FUNC_3(FUNC_1(VAR_10->bss));
 else
  FUNC_6(&VAR_4->wiphy, VAR_10->bss);

 return VAR_12;
}
