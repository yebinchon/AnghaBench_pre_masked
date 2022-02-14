
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
struct mpath_info {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ieee80211_ptr; TYPE_1__* ops; } ;
typedef int pinfo ;
struct TYPE_4__ {scalar_t__ iftype; } ;
struct TYPE_3__ {int get_mpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,struct genl_info*) ;
 int FUNC_1 (struct mpath_info*,int ,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,int ,struct net_device*,int *,int *,struct mpath_info*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net_device*,struct net_device*,int *,int *,struct mpath_info*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_9, struct genl_info *VAR_10)
{
 struct cfg80211_registered_device *VAR_11 = VAR_10->user_ptr[0];
 int VAR_12;
 struct net_device *VAR_13 = VAR_10->user_ptr[1];
 struct mpath_info VAR_14;
 struct sk_buff *VAR_15;
 u8 *VAR_16 = ((void*)0);
 u8 VAR_17[VAR_4];

 FUNC_1(&VAR_14, 0, sizeof(VAR_14));

 if (!VAR_10->attrs[VAR_6])
  return -VAR_0;

 VAR_16 = FUNC_3(VAR_10->attrs[VAR_6]);

 if (!VAR_11->ops->get_mpp)
  return -VAR_3;

 if (VAR_13->ieee80211_ptr->iftype != VAR_7)
  return -VAR_3;

 VAR_12 = FUNC_6(VAR_11, VAR_13, VAR_16, VAR_17, &VAR_14);
 if (VAR_12)
  return VAR_12;

 VAR_15 = FUNC_5(VAR_8, VAR_5);
 if (!VAR_15)
  return -VAR_2;

 if (FUNC_2(VAR_15, VAR_10->snd_portid, VAR_10->snd_seq, 0,
          VAR_13, VAR_16, VAR_17, &VAR_14) < 0) {
  FUNC_4(VAR_15);
  return -VAR_1;
 }

 return FUNC_0(VAR_15, VAR_10);
}
