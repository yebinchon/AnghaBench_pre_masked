
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wiphy {int dummy; } ;
struct ieee80211_ht_operation {int primary_chan; } ;
struct ieee80211_channel {int flags; int band; } ;
typedef enum nl80211_bss_scan_width { ____Placeholder_nl80211_bss_scan_width } nl80211_bss_scan_width ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_0 (int ,int const*,size_t) ;
 int FUNC_1 (int,int ) ;
 struct ieee80211_channel* FUNC_2 (struct wiphy*,int ) ;

__attribute__((used)) static struct ieee80211_channel *
FUNC_3(struct wiphy *VAR_6, const u8 *VAR_7, size_t VAR_8,
    struct ieee80211_channel *VAR_9,
    enum nl80211_bss_scan_width VAR_10)
{
 const u8 *VAR_11;
 u32 VAR_12;
 int VAR_13 = -1;
 struct ieee80211_channel *VAR_14;

 VAR_11 = FUNC_0(VAR_4, VAR_7, VAR_8);
 if (VAR_11 && VAR_11[1] == 1) {
  VAR_13 = VAR_11[2];
 } else {
  VAR_11 = FUNC_0(VAR_5, VAR_7, VAR_8);
  if (VAR_11 && VAR_11[1] >= sizeof(struct ieee80211_ht_operation)) {
   struct ieee80211_ht_operation *VAR_15 = (void *)(VAR_11 + 2);

   VAR_13 = VAR_15->primary_chan;
  }
 }

 if (VAR_13 < 0) {

  return VAR_9;
 }

 VAR_12 = FUNC_1(VAR_13, VAR_9->band);
 VAR_14 = FUNC_2(VAR_6, VAR_12);
 if (!VAR_14) {
  if (VAR_9->band == VAR_1) {






   return ((void*)0);
  }


  return VAR_9;
 }

 if (VAR_10 == VAR_2 ||
     VAR_10 == VAR_3) {





  return VAR_9;
 }





 if (VAR_14->flags & VAR_0)
  return ((void*)0);
 return VAR_14;
}
