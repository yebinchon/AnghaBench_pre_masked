
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct genl_info {scalar_t__ snd_portid; scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct TYPE_5__ {scalar_t__ conn_owner_nlportid; scalar_t__ iftype; } ;
struct TYPE_4__ {int disassoc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct net_device*,struct net_device*,int const*,int const*,int,scalar_t__,int) ;
 int * FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct cfg80211_registered_device *VAR_11 = VAR_10->user_ptr[0];
 struct net_device *VAR_12 = VAR_10->user_ptr[1];
 const u8 *VAR_13 = ((void*)0), *VAR_14;
 int VAR_15 = 0, VAR_16;
 u16 VAR_17;
 bool VAR_18;

 if (VAR_12->ieee80211_ptr->conn_owner_nlportid &&
     VAR_12->ieee80211_ptr->conn_owner_nlportid != VAR_10->snd_portid)
  return -VAR_2;

 if (!VAR_10->attrs[VAR_5])
  return -VAR_0;

 if (!VAR_10->attrs[VAR_6])
  return -VAR_0;

 if (!VAR_11->ops->disassoc)
  return -VAR_1;

 if (VAR_12->ieee80211_ptr->iftype != VAR_8 &&
     VAR_12->ieee80211_ptr->iftype != VAR_7)
  return -VAR_1;

 VAR_14 = FUNC_1(VAR_10->attrs[VAR_5]);

 VAR_17 = FUNC_2(VAR_10->attrs[VAR_6]);
 if (VAR_17 == 0) {

  return -VAR_0;
 }

 if (VAR_10->attrs[VAR_3]) {
  VAR_13 = FUNC_1(VAR_10->attrs[VAR_3]);
  VAR_15 = FUNC_3(VAR_10->attrs[VAR_3]);
 }

 VAR_18 = !!VAR_10->attrs[VAR_4];

 FUNC_4(VAR_12->ieee80211_ptr);
 VAR_16 = FUNC_0(VAR_11, VAR_12, VAR_14, VAR_13, VAR_15, VAR_17,
         VAR_18);
 FUNC_5(VAR_12->ieee80211_ptr);
 return VAR_16;
}
