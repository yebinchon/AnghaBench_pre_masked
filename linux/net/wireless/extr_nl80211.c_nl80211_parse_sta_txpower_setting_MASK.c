
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int power; int type; } ;
struct station_parameters {int sta_modify_mask; TYPE_2__ txpwr; } ;
struct genl_info {scalar_t__* attrs; struct cfg80211_registered_device** user_ptr; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_3__ {int set_tx_power; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct genl_info *VAR_7,
          struct station_parameters *VAR_8)
{
 struct cfg80211_registered_device *VAR_9 = VAR_7->user_ptr[0];
 int VAR_10;

 if (VAR_7->attrs[VAR_3]) {
  if (!VAR_9->ops->set_tx_power ||
      !FUNC_2(&VAR_9->wiphy,
      VAR_4))
   return -VAR_1;

  VAR_10 = VAR_3;
  VAR_8->txpwr.type = FUNC_1(VAR_7->attrs[VAR_10]);

  if (VAR_8->txpwr.type == VAR_5) {
   VAR_10 = VAR_2;

   if (VAR_7->attrs[VAR_10])
    VAR_8->txpwr.power =
     FUNC_0(VAR_7->attrs[VAR_10]);
   else
    return -VAR_0;
  }
  VAR_8->sta_modify_mask |= VAR_6;
 }

 return 0;
}
