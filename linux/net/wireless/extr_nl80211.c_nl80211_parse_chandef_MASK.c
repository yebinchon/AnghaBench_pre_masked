
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u32 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct genl_info {struct nlattr** attrs; struct netlink_ext_ack* extack; } ;
struct TYPE_8__ {int flags; } ;
struct cfg80211_registered_device {TYPE_3__ wiphy; } ;
struct TYPE_6__ {void* channels; void* bw_config; } ;
struct cfg80211_chan_def {scalar_t__ width; void* center_freq1; TYPE_1__ edmg; void* center_freq2; TYPE_2__* chan; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;




 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct netlink_ext_ack*,struct nlattr*,char*) ;
 int VAR_12 ;
 int FUNC_2 (struct cfg80211_chan_def*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,struct cfg80211_chan_def*,int) ;
 int FUNC_4 (struct cfg80211_chan_def*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,void*) ;
 int FUNC_6 (struct cfg80211_chan_def*,int ,int) ;
 void* FUNC_7 (struct nlattr*) ;
 void* FUNC_8 (struct nlattr*) ;

int FUNC_9(struct cfg80211_registered_device *VAR_13,
     struct genl_info *VAR_14,
     struct cfg80211_chan_def *VAR_15)
{
 struct netlink_ext_ack *VAR_16 = VAR_14->extack;
 struct nlattr **VAR_17 = VAR_14->attrs;
 u32 VAR_18;

 if (!VAR_17[VAR_8])
  return -VAR_0;

 VAR_18 = FUNC_7(VAR_17[VAR_8]);

 FUNC_6(VAR_15, 0, sizeof(*VAR_15));

 VAR_15->chan = FUNC_5(&VAR_13->wiphy, VAR_18);
 VAR_15->width = VAR_10;
 VAR_15->center_freq1 = VAR_18;
 VAR_15->center_freq2 = 0;


 if (!VAR_15->chan || VAR_15->chan->flags & VAR_1) {
  FUNC_1(VAR_16, VAR_17[VAR_8],
        "Channel is disabled");
  return -VAR_0;
 }

 if (VAR_17[VAR_5]) {
  enum nl80211_channel_type VAR_19;

  VAR_19 = FUNC_7(VAR_17[VAR_5]);

  switch (VAR_19) {
  case 128:
  case 131:
  case 129:
  case 130:
   FUNC_2(VAR_15, VAR_15->chan,
      VAR_19);

   if (VAR_17[VAR_2] &&
       VAR_15->center_freq1 != FUNC_7(VAR_17[VAR_2])) {
    FUNC_1(VAR_16,
          VAR_17[VAR_2],
          "bad center frequency 1");
    return -VAR_0;
   }

   if (VAR_17[VAR_3] &&
       FUNC_7(VAR_17[VAR_3])) {
    FUNC_1(VAR_16,
          VAR_17[VAR_3],
          "center frequency 2 can't be used");
    return -VAR_0;
   }
   break;
  default:
   FUNC_1(VAR_16,
         VAR_17[VAR_5],
         "invalid channel type");
   return -VAR_0;
  }
 } else if (VAR_17[VAR_4]) {
  VAR_15->width =
   FUNC_7(VAR_17[VAR_4]);
  if (VAR_17[VAR_2])
   VAR_15->center_freq1 =
    FUNC_7(VAR_17[VAR_2]);
  if (VAR_17[VAR_3])
   VAR_15->center_freq2 =
    FUNC_7(VAR_17[VAR_3]);
 }

 if (VAR_14->attrs[VAR_7]) {
  VAR_15->edmg.channels =
        FUNC_8(VAR_14->attrs[VAR_7]);

  if (VAR_14->attrs[VAR_6])
   VAR_15->edmg.bw_config =
       FUNC_8(VAR_14->attrs[VAR_6]);
 } else {
  VAR_15->edmg.bw_config = 0;
  VAR_15->edmg.channels = 0;
 }

 if (!FUNC_4(VAR_15)) {
  FUNC_0(VAR_16, "invalid channel definition");
  return -VAR_0;
 }

 if (!FUNC_3(&VAR_13->wiphy, VAR_15,
         VAR_1)) {
  FUNC_0(VAR_16, "(extension) channel is disabled");
  return -VAR_0;
 }

 if ((VAR_15->width == VAR_11 ||
      VAR_15->width == VAR_9) &&
     !(VAR_13->wiphy.flags & VAR_12)) {
  FUNC_0(VAR_16, "5/10 MHz not supported");
  return -VAR_0;
 }

 return 0;
}
