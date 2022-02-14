
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {scalar_t__ iftype; int netdev; } ;
struct sk_buff {int len; } ;
struct netlink_callback {int* args; TYPE_2__* nlh; int skb; } ;
struct mpath_info {int dummy; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_6__ {int portid; } ;
struct TYPE_5__ {int nlmsg_seq; } ;
struct TYPE_4__ {int dump_mpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct netlink_callback*,struct cfg80211_registered_device**,struct wireless_dev**) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,int ,int ,int *,int *,struct mpath_info*) ;
 int FUNC_3 (struct cfg80211_registered_device*,int ,int,int *,int *,struct mpath_info*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_5,
       struct netlink_callback *VAR_6)
{
 struct mpath_info VAR_7;
 struct cfg80211_registered_device *VAR_8;
 struct wireless_dev *VAR_9;
 u8 VAR_10[VAR_2];
 u8 VAR_11[VAR_2];
 int VAR_12 = VAR_6->args[2];
 int VAR_13;

 FUNC_4();
 VAR_13 = FUNC_1(VAR_6, &VAR_8, &VAR_9);
 if (VAR_13)
  goto out_err;

 if (!VAR_8->ops->dump_mpp) {
  VAR_13 = -VAR_1;
  goto out_err;
 }

 if (VAR_9->iftype != VAR_3) {
  VAR_13 = -VAR_1;
  goto out_err;
 }

 while (1) {
  VAR_13 = FUNC_3(VAR_8, VAR_9->netdev, VAR_12, VAR_10,
        VAR_11, &VAR_7);
  if (VAR_13 == -VAR_0)
   break;
  if (VAR_13)
   goto out_err;

  if (FUNC_2(VAR_5, FUNC_0(VAR_6->skb).portid,
           VAR_6->nlh->nlmsg_seq, VAR_4,
           VAR_9->netdev, VAR_10, VAR_11,
           &VAR_7) < 0)
   goto out;

  VAR_12++;
 }

 out:
 VAR_6->args[2] = VAR_12;
 VAR_13 = VAR_5->len;
 out_err:
 FUNC_5();
 return VAR_13;
}
