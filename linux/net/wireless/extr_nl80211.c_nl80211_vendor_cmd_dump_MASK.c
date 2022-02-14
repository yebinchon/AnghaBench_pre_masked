
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wireless_dev {int netdev; } ;
struct wiphy_vendor_command {int flags; int (* dumpit ) (TYPE_2__*,struct wireless_dev*,struct sk_buff*,void*,int,unsigned long*) ;} ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {unsigned int* args; TYPE_1__* nlh; int skb; } ;
struct TYPE_5__ {struct wiphy_vendor_command* vendor_commands; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; int wiphy_idx; } ;
struct TYPE_6__ {int portid; } ;
struct TYPE_4__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,struct netlink_callback*,struct cfg80211_registered_device**,struct wireless_dev**) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_2__*,struct wireless_dev*,struct sk_buff*,void*,int,unsigned long*) ;
 int FUNC_12 (struct wireless_dev*) ;
 int FUNC_13 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_13,
       struct netlink_callback *VAR_14)
{
 struct cfg80211_registered_device *VAR_15;
 struct wireless_dev *VAR_16;
 unsigned int VAR_17;
 const struct wiphy_vendor_command *VAR_18;
 void *VAR_19;
 int VAR_20;
 int VAR_21;
 struct nlattr *VAR_22;

 FUNC_9();
 VAR_21 = FUNC_3(VAR_13, VAR_14, &VAR_15, &VAR_16);
 if (VAR_21)
  goto out;

 VAR_17 = VAR_14->args[2];
 VAR_19 = (void *)VAR_14->args[3];
 VAR_20 = VAR_14->args[4];
 VAR_18 = &VAR_15->wiphy.vendor_commands[VAR_17];

 if (VAR_18->flags & (VAR_12 |
      VAR_10)) {
  if (!VAR_16) {
   VAR_21 = -VAR_0;
   goto out;
  }
  if (VAR_18->flags & VAR_10 &&
      !VAR_16->netdev) {
   VAR_21 = -VAR_0;
   goto out;
  }

  if (VAR_18->flags & VAR_11) {
   if (!FUNC_13(VAR_16)) {
    VAR_21 = -VAR_1;
    goto out;
   }
  }
 }

 while (1) {
  void *VAR_23 = FUNC_4(VAR_13, FUNC_0(VAR_14->skb).portid,
        VAR_14->nlh->nlmsg_seq, VAR_9,
        VAR_8);
  if (!VAR_23)
   break;

  if (FUNC_7(VAR_13, VAR_7, VAR_15->wiphy_idx) ||
      (VAR_16 && FUNC_8(VAR_13, VAR_6,
            FUNC_12(VAR_16),
            VAR_4))) {
   FUNC_1(VAR_13, VAR_23);
   break;
  }

  VAR_22 = FUNC_6(VAR_13,
          VAR_5);
  if (!VAR_22) {
   FUNC_1(VAR_13, VAR_23);
   break;
  }

  VAR_21 = VAR_18->dumpit(&VAR_15->wiphy, VAR_16, VAR_13, VAR_19, VAR_20,
       (unsigned long *)&VAR_14->args[5]);
  FUNC_5(VAR_13, VAR_22);

  if (VAR_21 == -VAR_2 || VAR_21 == -VAR_3) {
   FUNC_1(VAR_13, VAR_23);
   break;
  } else if (VAR_21) {
   FUNC_1(VAR_13, VAR_23);
   goto out;
  }

  FUNC_2(VAR_13, VAR_23);
 }

 VAR_21 = VAR_13->len;
 out:
 FUNC_10();
 return VAR_21;
}
