
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct cfg80211_registered_device {int wiphy; } ;
struct cfg80211_bitrate_mask {TYPE_1__* control; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {size_t legacy; scalar_t__* vht_mcs; scalar_t__* ht_mcs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct cfg80211_registered_device *VAR_6,
       enum nl80211_band VAR_7,
       struct cfg80211_bitrate_mask *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 u32 VAR_12 = VAR_8->control[VAR_7].legacy;


 if (FUNC_1(VAR_12) > 1)
  return -VAR_0;

 VAR_9 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (FUNC_2(VAR_8->control[VAR_7].ht_mcs[VAR_11]) > 1) {
   return -VAR_0;
  } else if (VAR_8->control[VAR_7].ht_mcs[VAR_11]) {
   VAR_9++;
   if (VAR_9 > 1)
    return -VAR_0;
  }
  if (VAR_9 && VAR_12)
   return -VAR_0;
 }

 VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  if (FUNC_0(VAR_8->control[VAR_7].vht_mcs[VAR_11]) > 1) {
   return -VAR_0;
  } else if (VAR_8->control[VAR_7].vht_mcs[VAR_11]) {
   VAR_10++;
   if (VAR_10 > 1)
    return -VAR_0;
  }
  if (VAR_10 && VAR_12)
   return -VAR_0;
 }

 if ((VAR_9 && VAR_10) || (!VAR_12 && !VAR_9 && !VAR_10))
  return -VAR_0;

 if (VAR_12 &&
     !FUNC_3(&VAR_6->wiphy,
         VAR_3))
  return -VAR_0;
 if (VAR_9 &&
     !FUNC_3(&VAR_6->wiphy,
         VAR_2))
  return -VAR_0;
 if (VAR_10 &&
     !FUNC_3(&VAR_6->wiphy,
         VAR_4))
  return -VAR_0;

 return 0;
}
