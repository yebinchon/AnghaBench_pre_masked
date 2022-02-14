
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {scalar_t__ vht_supported; } ;
struct ieee80211_supported_band {TYPE_3__ vht_cap; } ;
struct ieee80211_if_managed {int tdls_wider_bw_prohibited; } ;
struct TYPE_5__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; struct ieee80211_local* local; } ;
struct TYPE_8__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {TYPE_4__ hw; } ;
struct TYPE_6__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211_supported_band* FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int * FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_sub_if_data *VAR_8,
      struct sk_buff *VAR_9)
{
 struct ieee80211_local *VAR_10 = VAR_8->local;
 struct ieee80211_if_managed *VAR_11 = &VAR_8->u.mgd;
 bool VAR_12 = VAR_10->hw.wiphy->features &
      VAR_0;
 bool VAR_13 = FUNC_1(&VAR_10->hw, VAR_2) &&
     !VAR_11->tdls_wider_bw_prohibited;
 bool VAR_14 = FUNC_1(&VAR_10->hw,
          VAR_1);
 struct ieee80211_supported_band *VAR_15 = FUNC_0(VAR_8);
 bool VAR_16 = VAR_15 && VAR_15->vht_cap.vht_supported;
 u8 *VAR_17 = FUNC_2(VAR_9, 10);

 *VAR_17++ = VAR_3;
 *VAR_17++ = 8;
 *VAR_17++ = 0x0;
 *VAR_17++ = 0x0;
 *VAR_17++ = 0x0;
 *VAR_17++ = (VAR_12 ? VAR_5 : 0) |
   (VAR_14 ? VAR_4 : 0);
 *VAR_17++ = VAR_6;
 *VAR_17++ = 0;
 *VAR_17++ = 0;
 *VAR_17++ = (VAR_16 && VAR_13) ? VAR_7 : 0;
}
