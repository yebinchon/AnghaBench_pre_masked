
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_8__ {scalar_t__ type; int addr; } ;
struct ieee80211_if_managed {TYPE_3__* assoc_data; TYPE_2__* auth_data; struct cfg80211_bss* associated; } ;
struct TYPE_5__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_4__ vif; TYPE_1__ u; } ;
struct ieee80211_hw {int dummy; } ;
struct cfg80211_bss {int channel; int bssid; } ;
struct TYPE_7__ {struct cfg80211_bss* bss; } ;
struct TYPE_6__ {struct cfg80211_bss* bss; } ;


 int const VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,int const) ;
 int VAR_3 ;
 int* FUNC_2 (struct cfg80211_bss*,int ) ;
 struct sk_buff* FUNC_3 (struct ieee80211_sub_if_data*,int ,int ,int ,int ,int const*,int,int *,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_7 (struct ieee80211_vif*) ;

struct sk_buff *FUNC_8(struct ieee80211_hw *VAR_4,
       struct ieee80211_vif *VAR_5)
{
 struct ieee80211_sub_if_data *VAR_6 = FUNC_7(VAR_5);
 struct ieee80211_if_managed *VAR_7 = &VAR_6->u.mgd;
 struct cfg80211_bss *VAR_8;
 struct sk_buff *VAR_9;
 const u8 *VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_6->vif.type != VAR_2))
  return ((void*)0);

 FUNC_6(VAR_6);

 if (VAR_7->associated)
  VAR_8 = VAR_7->associated;
 else if (VAR_7->auth_data)
  VAR_8 = VAR_7->auth_data->bss;
 else if (VAR_7->assoc_data)
  VAR_8 = VAR_7->assoc_data->bss;
 else
  return ((void*)0);

 FUNC_4();
 VAR_10 = FUNC_2(VAR_8, VAR_3);
 if (FUNC_1(!VAR_10 || VAR_10[1] > VAR_0,
        "invalid SSID element (len=%d)", VAR_10 ? VAR_10[1] : -1))
  VAR_11 = 0;
 else
  VAR_11 = VAR_10[1];

 VAR_9 = FUNC_3(VAR_6, VAR_6->vif.addr, VAR_8->bssid,
     (u32) -1, VAR_8->channel,
     VAR_10 + 2, VAR_11,
     ((void*)0), 0, VAR_1);
 FUNC_5();

 return VAR_9;
}
