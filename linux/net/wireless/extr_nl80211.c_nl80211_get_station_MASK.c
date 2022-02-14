
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct station_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; } ;
struct genl_info {int snd_seq; int snd_portid; int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
typedef int sinfo ;
struct TYPE_2__ {int get_station; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct station_info*) ;
 int FUNC_1 (struct sk_buff*,struct genl_info*) ;
 int FUNC_2 (struct station_info*,int ,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ,int ,struct net_device*,struct net_device*,int *,struct station_info*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct net_device*,struct net_device*,int *,struct station_info*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 struct cfg80211_registered_device *VAR_10 = VAR_9->user_ptr[0];
 struct net_device *VAR_11 = VAR_9->user_ptr[1];
 struct station_info VAR_12;
 struct sk_buff *VAR_13;
 u8 *VAR_14 = ((void*)0);
 int VAR_15;

 FUNC_2(&VAR_12, 0, sizeof(VAR_12));

 if (!VAR_9->attrs[VAR_5])
  return -VAR_0;

 VAR_14 = FUNC_4(VAR_9->attrs[VAR_5]);

 if (!VAR_10->ops->get_station)
  return -VAR_3;

 VAR_15 = FUNC_7(VAR_10, VAR_11, VAR_14, &VAR_12);
 if (VAR_15)
  return VAR_15;

 VAR_13 = FUNC_6(VAR_7, VAR_4);
 if (!VAR_13) {
  FUNC_0(&VAR_12);
  return -VAR_2;
 }

 if (FUNC_3(VAR_13, VAR_6,
     VAR_9->snd_portid, VAR_9->snd_seq, 0,
     VAR_10, VAR_11, VAR_14, &VAR_12) < 0) {
  FUNC_5(VAR_13);
  return -VAR_1;
 }

 return FUNC_1(VAR_13, VAR_9);
}
