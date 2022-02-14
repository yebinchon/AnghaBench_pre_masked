
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wireless_dev {scalar_t__ current_bss; } ;
struct wiphy {int features; } ;
struct nlattr {int dummy; } ;
struct cfg80211_sched_scan_request {int flags; int * mac_addr_mask; int * mac_addr; } ;
struct cfg80211_scan_request {int flags; int * mac_addr_mask; int * mac_addr; } ;
typedef enum nl80211_feature_flags { ____Placeholder_nl80211_feature_flags } nl80211_feature_flags ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct wiphy*,int,int ,int ) ;
 int FUNC_1 (struct nlattr**,int *,int *) ;
 int FUNC_2 (struct nlattr*) ;

__attribute__((used)) static int
FUNC_3(struct wiphy *VAR_26, struct wireless_dev *VAR_27,
    void *VAR_28, struct nlattr **VAR_29,
    bool VAR_30)
{
 u8 *VAR_31, *VAR_32;
 u32 *VAR_33;
 enum nl80211_feature_flags VAR_34;

 if (!VAR_29[VAR_1])
  return 0;

 if (VAR_30) {
  struct cfg80211_sched_scan_request *VAR_35 = VAR_28;

  VAR_34 = VAR_27 ?
      VAR_14 :
      VAR_12;
  VAR_33 = &VAR_35->flags;
  VAR_31 = VAR_35->mac_addr;
  VAR_32 = VAR_35->mac_addr_mask;
 } else {
  struct cfg80211_scan_request *VAR_36 = VAR_28;

  VAR_34 = VAR_13;
  VAR_33 = &VAR_36->flags;
  VAR_31 = VAR_36->mac_addr;
  VAR_32 = VAR_36->mac_addr_mask;
 }

 *VAR_33 = FUNC_2(VAR_29[VAR_1]);

 if (((*VAR_33 & VAR_19) &&
      !(VAR_26->features & VAR_11)) ||
     !FUNC_0(VAR_26, *VAR_33,
         VAR_20,
         VAR_6) ||
     !FUNC_0(VAR_26, *VAR_33,
         VAR_18,
         VAR_5) ||
     !FUNC_0(VAR_26, *VAR_33,
         VAR_17,
         VAR_4) ||
     !FUNC_0(VAR_26, *VAR_33,
         VAR_16,
         VAR_3) ||
     !FUNC_0(VAR_26, *VAR_33,
         VAR_15,
         VAR_2) ||
     !FUNC_0(VAR_26, *VAR_33,
         VAR_22,
         VAR_7) ||
     !FUNC_0(VAR_26, *VAR_33,
         VAR_23,
         VAR_8) ||
     !FUNC_0(VAR_26, *VAR_33,
         VAR_25,
         VAR_10) ||
     !FUNC_0(VAR_26, *VAR_33,
         VAR_21,
         VAR_9))
  return -VAR_0;

 if (*VAR_33 & VAR_24) {
  int VAR_37;

  if (!(VAR_26->features & VAR_34) ||
      (VAR_27 && VAR_27->current_bss))
   return -VAR_0;

  VAR_37 = FUNC_1(VAR_29, VAR_31, VAR_32);
  if (VAR_37)
   return VAR_37;
 }

 return 0;
}
