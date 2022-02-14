
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct wiphy {int n_iface_combinations; int software_iftypes; int interface_modes; struct ieee80211_iface_combination* iface_combinations; } ;
struct ieee80211_iface_combination {int max_interfaces; int num_different_channels; int n_limits; TYPE_1__* limits; scalar_t__ beacon_int_min_gcd; scalar_t__ radar_detect_widths; } ;
struct TYPE_2__ {int types; int max; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct wiphy *VAR_6)
{
 const struct ieee80211_iface_combination *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_6->n_iface_combinations; VAR_8++) {
  u32 VAR_10 = 0;
  u16 VAR_11 = 0;

  VAR_7 = &VAR_6->iface_combinations[VAR_8];





  if (FUNC_1((VAR_7->max_interfaces < 2) && !VAR_7->radar_detect_widths))
   return -VAR_1;


  if (FUNC_1(!VAR_7->num_different_channels))
   return -VAR_1;





  if (FUNC_1(VAR_7->num_different_channels >
    VAR_0))
   return -VAR_1;


  if (FUNC_1(VAR_7->radar_detect_widths &&
       (VAR_7->num_different_channels > 1)))
   return -VAR_1;

  if (FUNC_1(!VAR_7->n_limits))
   return -VAR_1;

  for (VAR_9 = 0; VAR_9 < VAR_7->n_limits; VAR_9++) {
   u16 VAR_12 = VAR_7->limits[VAR_9].types;


   if (FUNC_1(VAR_12 & VAR_11))
    return -VAR_1;
   VAR_11 |= VAR_12;

   if (FUNC_1(!VAR_7->limits[VAR_9].max))
    return -VAR_1;


   if (FUNC_1(VAR_6->software_iftypes & VAR_12))
    return -VAR_1;


   if (FUNC_1(VAR_12 & FUNC_0(VAR_4) &&
        VAR_7->limits[VAR_9].max > 1))
    return -VAR_1;


   if (FUNC_1(VAR_12 & FUNC_0(VAR_3) &&
        VAR_7->limits[VAR_9].max > 1))
    return -VAR_1;
   if (FUNC_1(VAR_12 & FUNC_0(VAR_2) &&
        VAR_7->beacon_int_min_gcd)) {
    return -VAR_1;
   }

   VAR_10 += VAR_7->limits[VAR_9].max;




   if (FUNC_1((VAR_6->interface_modes & VAR_12) != VAR_12))
    return -VAR_1;
  }


  if (FUNC_1(VAR_11 & FUNC_0(VAR_5)))
   return -VAR_1;



  if (FUNC_1(VAR_10 < VAR_7->max_interfaces))
   return -VAR_1;
 }

 return 0;
}
