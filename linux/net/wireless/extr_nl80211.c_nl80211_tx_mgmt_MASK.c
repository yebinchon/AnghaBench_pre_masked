
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_4__ {int flags; scalar_t__ max_remain_on_channel_duration; } ;
struct wireless_dev {int iftype; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; scalar_t__* attrs; struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {int iftype; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct cfg80211_mgmt_tx_params {scalar_t__ wait; scalar_t__ len; int n_csa_offsets; scalar_t__* csa_offsets; int * chan; scalar_t__ dont_wait_for_ack; void* buf; scalar_t__ offchan; int no_cck; } ;
struct cfg80211_chan_def {int * chan; } ;
struct TYPE_3__ {int mgmt_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct wireless_dev*,struct wireless_dev*,struct cfg80211_mgmt_tx_params*,int *) ;
 int FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 int FUNC_4 (struct wireless_dev*,struct genl_info*,struct cfg80211_chan_def*) ;
 void* FUNC_5 (struct sk_buff*,int ,int ,int ,int ) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 void* FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct wireless_dev*) ;
 int FUNC_14 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_19, struct genl_info *VAR_20)
{
 struct cfg80211_registered_device *VAR_21 = VAR_20->user_ptr[0];
 struct wireless_dev *VAR_22 = VAR_20->user_ptr[1];
 struct cfg80211_chan_def VAR_23;
 int VAR_24;
 void *VAR_25 = ((void*)0);
 u64 VAR_26;
 struct sk_buff *VAR_27 = ((void*)0);
 struct cfg80211_mgmt_tx_params VAR_28 = {
  .dont_wait_for_ack =
   VAR_20->attrs[VAR_8],
 };

 if (!VAR_20->attrs[VAR_10])
  return -VAR_1;

 if (!VAR_21->ops->mgmt_tx)
  return -VAR_4;

 switch (VAR_22->iftype) {
 case 130:
  if (!VAR_20->attrs[VAR_14])
   return -VAR_1;
 case 128:
 case 136:
 case 131:
 case 135:
 case 134:
 case 133:
 case 129:
  break;
 case 132:
 default:
  return -VAR_4;
 }

 if (VAR_20->attrs[VAR_9]) {
  if (!(VAR_21->wiphy.flags & VAR_18))
   return -VAR_1;
  VAR_28.wait = FUNC_8(VAR_20->attrs[VAR_9]);





  if (VAR_28.wait < VAR_16 ||
      VAR_28.wait > VAR_21->wiphy.max_remain_on_channel_duration)
   return -VAR_1;
 }

 VAR_28.offchan = VAR_20->attrs[VAR_11];

 if (VAR_28.offchan && !(VAR_21->wiphy.flags & VAR_18))
  return -VAR_1;

 VAR_28.no_cck = FUNC_7(VAR_20->attrs[VAR_13]);




 VAR_23.chan = ((void*)0);
 if (VAR_20->attrs[VAR_14]) {
  VAR_24 = FUNC_4(VAR_21, VAR_20, &VAR_23);
  if (VAR_24)
   return VAR_24;
 }

 if (!VAR_23.chan && VAR_28.offchan)
  return -VAR_1;

 FUNC_13(VAR_22);
 if (VAR_28.offchan && !FUNC_1(VAR_22)) {
  FUNC_14(VAR_22);
  return -VAR_0;
 }
 FUNC_14(VAR_22);

 VAR_28.buf = FUNC_6(VAR_20->attrs[VAR_10]);
 VAR_28.len = FUNC_9(VAR_20->attrs[VAR_10]);

 if (VAR_20->attrs[VAR_7]) {
  int VAR_29 = FUNC_9(VAR_20->attrs[VAR_7]);
  int VAR_30;

  if (VAR_29 % sizeof(u16))
   return -VAR_1;

  VAR_28.n_csa_offsets = VAR_29 / sizeof(u16);
  VAR_28.csa_offsets =
   FUNC_6(VAR_20->attrs[VAR_7]);


  for (VAR_30 = 0; VAR_30 < VAR_28.n_csa_offsets; VAR_30++) {
   if (VAR_28.csa_offsets[VAR_30] >= VAR_28.len)
    return -VAR_1;
  }
 }

 if (!VAR_28.dont_wait_for_ack) {
  VAR_27 = FUNC_12(VAR_17, VAR_5);
  if (!VAR_27)
   return -VAR_3;

  VAR_25 = FUNC_5(VAR_27, VAR_20->snd_portid, VAR_20->snd_seq, 0,
         VAR_15);
  if (!VAR_25) {
   VAR_24 = -VAR_2;
   goto free_msg;
  }
 }

 VAR_28.chan = VAR_23.chan;
 VAR_24 = FUNC_0(VAR_21, VAR_22, &VAR_28, &VAR_26);
 if (VAR_24)
  goto free_msg;

 if (VAR_27) {
  if (FUNC_10(VAR_27, VAR_6, VAR_26,
          VAR_12))
   goto nla_put_failure;

  FUNC_2(VAR_27, VAR_25);
  return FUNC_3(VAR_27, VAR_20);
 }

 return 0;

 nla_put_failure:
 VAR_24 = -VAR_2;
 free_msg:
 FUNC_11(VAR_27);
 return VAR_24;
}
