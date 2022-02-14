
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int ieee80211_ptr; TYPE_1__* ops; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {int ieee80211_ptr; TYPE_1__* ops; } ;
struct cfg80211_qos_map {int num_des; TYPE_2__* up; TYPE_2__* dscp_exception; } ;
struct cfg80211_dscp_exception {int dummy; } ;
struct TYPE_4__ {int up; } ;
struct TYPE_3__ {int set_qos_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct cfg80211_qos_map*) ;
 struct cfg80211_qos_map* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_2__*,int*,int) ;
 int FUNC_3 (int ) ;
 int* FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct net_device*,struct net_device*,struct cfg80211_qos_map*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_7,
          struct genl_info *VAR_8)
{
 struct cfg80211_registered_device *VAR_9 = VAR_8->user_ptr[0];
 struct cfg80211_qos_map *VAR_10 = ((void*)0);
 struct net_device *VAR_11 = VAR_8->user_ptr[1];
 u8 *VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;

 if (!VAR_9->ops->set_qos_map)
  return -VAR_2;

 if (VAR_8->attrs[VAR_6]) {
  VAR_12 = FUNC_4(VAR_8->attrs[VAR_6]);
  VAR_13 = FUNC_5(VAR_8->attrs[VAR_6]);

  if (VAR_13 % 2 || VAR_13 < VAR_5 ||
      VAR_13 > VAR_4)
   return -VAR_0;

  VAR_10 = FUNC_1(sizeof(struct cfg80211_qos_map), VAR_3);
  if (!VAR_10)
   return -VAR_1;

  VAR_14 = (VAR_13 - VAR_5) >> 1;
  if (VAR_14) {
   VAR_15 = VAR_14 *
    sizeof(struct cfg80211_dscp_exception);
   FUNC_2(VAR_10->dscp_exception, VAR_12, VAR_15);
   VAR_10->num_des = VAR_14;
   for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
    if (VAR_10->dscp_exception[VAR_16].up > 7) {
     FUNC_0(VAR_10);
     return -VAR_0;
    }
   }
   VAR_12 += VAR_15;
  }
  FUNC_2(VAR_10->up, VAR_12, VAR_5);
 }

 FUNC_7(VAR_11->ieee80211_ptr);
 VAR_17 = FUNC_3(VAR_11->ieee80211_ptr);
 if (!VAR_17)
  VAR_17 = FUNC_6(VAR_9, VAR_11, VAR_10);
 FUNC_8(VAR_11->ieee80211_ptr);

 FUNC_0(VAR_10);
 return VAR_17;
}
