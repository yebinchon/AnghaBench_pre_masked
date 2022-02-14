
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vif_params {int flags; int const* vht_mumimo_groups; void* vht_mumimo_follow_addr; } ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_2__ {int features; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int const FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(struct cfg80211_registered_device *VAR_10,
         enum nl80211_iftype VAR_11,
         struct genl_info *VAR_12,
         struct vif_params *VAR_13)
{
 bool VAR_14 = 0;
 int VAR_15;

 if (VAR_12->attrs[VAR_3]) {
  if (VAR_11 != VAR_8)
   return -VAR_0;

  VAR_15 = FUNC_2(VAR_12->attrs[VAR_3],
       &VAR_13->flags);
  if (VAR_15)
   return VAR_15;

  VAR_14 = 1;
 }

 if (VAR_13->flags & VAR_2 &&
     !(VAR_10->wiphy.features & VAR_7))
  return -VAR_1;

 if (VAR_12->attrs[VAR_5]) {
  const u8 *VAR_16;
  u32 VAR_17 = VAR_6;

  if (VAR_11 != VAR_8)
   return -VAR_0;

  if (!FUNC_3(&VAR_10->wiphy, VAR_17))
   return -VAR_1;

  VAR_16 =
   FUNC_1(VAR_12->attrs[VAR_5]);


  if ((VAR_16[0] & FUNC_0(0)) ||
      (VAR_16[VAR_9 - 1] & FUNC_0(7)))
   return -VAR_0;

  VAR_13->vht_mumimo_groups = VAR_16;
  VAR_14 = 1;
 }

 if (VAR_12->attrs[VAR_4]) {
  u32 VAR_18 = VAR_6;

  if (VAR_11 != VAR_8)
   return -VAR_0;

  if (!FUNC_3(&VAR_10->wiphy, VAR_18))
   return -VAR_1;

  VAR_13->vht_mumimo_follow_addr =
   FUNC_1(VAR_12->attrs[VAR_4]);
  VAR_14 = 1;
 }

 return VAR_14 ? 1 : 0;
}
