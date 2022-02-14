
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ieee80211_ptr; } ;
struct genl_info {scalar_t__ snd_portid; int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ieee80211_ptr; } ;
struct TYPE_3__ {scalar_t__ conn_owner_nlportid; scalar_t__ iftype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct net_device*,struct net_device*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct cfg80211_registered_device *VAR_9 = VAR_8->user_ptr[0];
 struct net_device *VAR_10 = VAR_8->user_ptr[1];
 u16 VAR_11;
 int VAR_12;

 if (VAR_10->ieee80211_ptr->conn_owner_nlportid &&
     VAR_10->ieee80211_ptr->conn_owner_nlportid != VAR_8->snd_portid)
  return -VAR_2;

 if (!VAR_8->attrs[VAR_3])
  VAR_11 = VAR_6;
 else
  VAR_11 = FUNC_1(VAR_8->attrs[VAR_3]);

 if (VAR_11 == 0)
  return -VAR_0;

 if (VAR_10->ieee80211_ptr->iftype != VAR_5 &&
     VAR_10->ieee80211_ptr->iftype != VAR_4)
  return -VAR_1;

 FUNC_2(VAR_10->ieee80211_ptr);
 VAR_12 = FUNC_0(VAR_9, VAR_10, VAR_11, 1);
 FUNC_3(VAR_10->ieee80211_ptr);
 return VAR_12;
}
