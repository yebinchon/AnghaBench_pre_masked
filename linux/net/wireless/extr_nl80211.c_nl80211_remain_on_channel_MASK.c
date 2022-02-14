
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int flags; scalar_t__ max_remain_on_channel_duration; } ;
struct wireless_dev {int chandef; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; int * attrs; struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {int chandef; TYPE_2__ wiphy; TYPE_1__* ops; } ;
typedef struct cfg80211_chan_def {int chan; } const cfg80211_chan_def ;
struct TYPE_3__ {int remain_on_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct cfg80211_chan_def const* FUNC_0 (int *,struct cfg80211_chan_def const*) ;
 int FUNC_1 (int *,struct cfg80211_chan_def const*) ;
 int FUNC_2 (struct wireless_dev*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (struct sk_buff*,struct genl_info*) ;
 int FUNC_5 (struct wireless_dev*,struct genl_info*,struct cfg80211_chan_def const*) ;
 void* FUNC_6 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct wireless_dev*,struct wireless_dev*,int ,scalar_t__,int *) ;
 int FUNC_12 (struct wireless_dev*) ;
 int FUNC_13 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_14,
         struct genl_info *VAR_15)
{
 struct cfg80211_registered_device *VAR_16 = VAR_15->user_ptr[0];
 struct wireless_dev *VAR_17 = VAR_15->user_ptr[1];
 struct cfg80211_chan_def VAR_18;
 const struct cfg80211_chan_def *VAR_19;
 struct sk_buff *VAR_20;
 void *VAR_21;
 u64 VAR_22;
 u32 VAR_23;
 int VAR_24;

 if (!VAR_15->attrs[VAR_9] ||
     !VAR_15->attrs[VAR_7])
  return -VAR_1;

 VAR_23 = FUNC_7(VAR_15->attrs[VAR_7]);

 if (!VAR_16->ops->remain_on_channel ||
     !(VAR_16->wiphy.flags & VAR_13))
  return -VAR_4;





 if (VAR_23 < VAR_11 ||
     VAR_23 > VAR_16->wiphy.max_remain_on_channel_duration)
  return -VAR_1;

 VAR_24 = FUNC_5(VAR_16, VAR_15, &VAR_18);
 if (VAR_24)
  return VAR_24;

 FUNC_12(VAR_17);
 if (!FUNC_2(VAR_17) &&
     !FUNC_1(&VAR_17->chandef, &VAR_18)) {
  VAR_19 = FUNC_0(&VAR_17->chandef,
            &VAR_18);
  if (VAR_19 != &VAR_18) {
   FUNC_13(VAR_17);
   return -VAR_0;
  }
 }
 FUNC_13(VAR_17);

 VAR_20 = FUNC_10(VAR_12, VAR_5);
 if (!VAR_20)
  return -VAR_3;

 VAR_21 = FUNC_6(VAR_20, VAR_15->snd_portid, VAR_15->snd_seq, 0,
        VAR_10);
 if (!VAR_21) {
  VAR_24 = -VAR_2;
  goto free_msg;
 }

 VAR_24 = FUNC_11(VAR_16, VAR_17, VAR_18.chan,
         VAR_23, &VAR_22);

 if (VAR_24)
  goto free_msg;

 if (FUNC_8(VAR_20, VAR_6, VAR_22,
         VAR_8))
  goto nla_put_failure;

 FUNC_3(VAR_20, VAR_21);

 return FUNC_4(VAR_20, VAR_15);

 nla_put_failure:
 VAR_24 = -VAR_2;
 free_msg:
 FUNC_9(VAR_20);
 return VAR_24;
}
