
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {int netdev; } ;
struct station_info {int dummy; } ;
struct sk_buff {int len; } ;
struct netlink_callback {int* args; TYPE_2__* nlh; int skb; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
typedef int sinfo ;
struct TYPE_6__ {int portid; } ;
struct TYPE_5__ {int nlmsg_seq; } ;
struct TYPE_4__ {int dump_station; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct station_info*,int ,int) ;
 int FUNC_2 (struct netlink_callback*,struct cfg80211_registered_device**,struct wireless_dev**) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ,int ,struct cfg80211_registered_device*,int ,int *,struct station_info*) ;
 int FUNC_4 (struct cfg80211_registered_device*,int ,int,int *,struct station_info*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_6,
    struct netlink_callback *VAR_7)
{
 struct station_info VAR_8;
 struct cfg80211_registered_device *VAR_9;
 struct wireless_dev *VAR_10;
 u8 VAR_11[VAR_3];
 int VAR_12 = VAR_7->args[2];
 int VAR_13;

 FUNC_5();
 VAR_13 = FUNC_2(VAR_7, &VAR_9, &VAR_10);
 if (VAR_13)
  goto out_err;

 if (!VAR_10->netdev) {
  VAR_13 = -VAR_0;
  goto out_err;
 }

 if (!VAR_9->ops->dump_station) {
  VAR_13 = -VAR_2;
  goto out_err;
 }

 while (1) {
  FUNC_1(&VAR_8, 0, sizeof(VAR_8));
  VAR_13 = FUNC_4(VAR_9, VAR_10->netdev, VAR_12,
     VAR_11, &VAR_8);
  if (VAR_13 == -VAR_1)
   break;
  if (VAR_13)
   goto out_err;

  if (FUNC_3(VAR_6, VAR_4,
    FUNC_0(VAR_7->skb).portid,
    VAR_7->nlh->nlmsg_seq, VAR_5,
    VAR_9, VAR_10->netdev, VAR_11,
    &VAR_8) < 0)
   goto out;

  VAR_12++;
 }

 out:
 VAR_7->args[2] = VAR_12;
 VAR_13 = VAR_6->len;
 out_err:
 FUNC_6();

 return VAR_13;
}
