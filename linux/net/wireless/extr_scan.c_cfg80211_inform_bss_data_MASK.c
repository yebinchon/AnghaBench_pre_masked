
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct cfg80211_non_tx_bss {struct cfg80211_bss* tx_bss; } ;
struct cfg80211_inform_bss {int dummy; } ;
struct cfg80211_bss {int dummy; } ;
typedef int gfp_t ;
typedef enum cfg80211_bss_frame_type { ____Placeholder_cfg80211_bss_frame_type } cfg80211_bss_frame_type ;


 struct cfg80211_bss* FUNC_0 (struct wiphy*,struct cfg80211_inform_bss*,int,int const*,int ,int ,int ,int const*,size_t,int *,int ) ;
 int FUNC_1 (struct wiphy*,struct cfg80211_inform_bss*,int,int const*,int ,int ,int const*,size_t,struct cfg80211_non_tx_bss*,int ) ;

struct cfg80211_bss *
FUNC_2(struct wiphy *VAR_0,
    struct cfg80211_inform_bss *VAR_1,
    enum cfg80211_bss_frame_type VAR_2,
    const u8 *VAR_3, u64 VAR_4, u16 VAR_5,
    u16 VAR_6, const u8 *VAR_7, size_t VAR_8,
    gfp_t VAR_9)
{
 struct cfg80211_bss *VAR_10;
 struct cfg80211_non_tx_bss VAR_11;

 VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6, VAR_7,
           VAR_8, ((void*)0), VAR_9);
 if (!VAR_10)
  return ((void*)0);
 VAR_11.tx_bss = VAR_10;
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
       VAR_6, VAR_7, VAR_8, &VAR_11,
       VAR_9);
 return VAR_10;
}
