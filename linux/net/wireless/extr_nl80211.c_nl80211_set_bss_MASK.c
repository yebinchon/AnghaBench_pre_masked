
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {scalar_t__ iftype; } ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int features; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; TYPE_2__* ops; TYPE_1__ wiphy; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {struct wireless_dev* ieee80211_ptr; TYPE_2__* ops; TYPE_1__ wiphy; } ;
struct bss_parameters {int use_cts_prot; int use_short_preamble; int use_short_slot_time; int ap_isolate; int ht_opmode; int p2p_ctwindow; int p2p_opp_ps; int basic_rates_len; int basic_rates; } ;
typedef int params ;
struct TYPE_4__ {int change_bss; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (struct bss_parameters*,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct net_device*,struct net_device*,struct bss_parameters*) ;
 int FUNC_6 (struct wireless_dev*) ;
 int FUNC_7 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_14, struct genl_info *VAR_15)
{
 struct cfg80211_registered_device *VAR_16 = VAR_15->user_ptr[0];
 struct net_device *VAR_17 = VAR_15->user_ptr[1];
 struct wireless_dev *VAR_18 = VAR_17->ieee80211_ptr;
 struct bss_parameters VAR_19;
 int VAR_20;

 FUNC_0(&VAR_19, 0, sizeof(VAR_19));

 VAR_19.use_cts_prot = -1;
 VAR_19.use_short_preamble = -1;
 VAR_19.use_short_slot_time = -1;
 VAR_19.ap_isolate = -1;
 VAR_19.ht_opmode = -1;
 VAR_19.p2p_ctwindow = -1;
 VAR_19.p2p_opp_ps = -1;

 if (VAR_15->attrs[VAR_4])
  VAR_19.use_cts_prot =
      FUNC_3(VAR_15->attrs[VAR_4]);
 if (VAR_15->attrs[VAR_6])
  VAR_19.use_short_preamble =
      FUNC_3(VAR_15->attrs[VAR_6]);
 if (VAR_15->attrs[VAR_7])
  VAR_19.use_short_slot_time =
      FUNC_3(VAR_15->attrs[VAR_7]);
 if (VAR_15->attrs[VAR_3]) {
  VAR_19.basic_rates =
   FUNC_1(VAR_15->attrs[VAR_3]);
  VAR_19.basic_rates_len =
   FUNC_4(VAR_15->attrs[VAR_3]);
 }
 if (VAR_15->attrs[VAR_2])
  VAR_19.ap_isolate = !!FUNC_3(VAR_15->attrs[VAR_2]);
 if (VAR_15->attrs[VAR_5])
  VAR_19.ht_opmode =
   FUNC_2(VAR_15->attrs[VAR_5]);

 if (VAR_15->attrs[VAR_8]) {
  if (VAR_17->ieee80211_ptr->iftype != VAR_13)
   return -VAR_0;
  VAR_19.p2p_ctwindow =
   FUNC_3(VAR_15->attrs[VAR_8]);
  if (VAR_19.p2p_ctwindow != 0 &&
      !(VAR_16->wiphy.features & VAR_10))
   return -VAR_0;
 }

 if (VAR_15->attrs[VAR_9]) {
  u8 VAR_21;

  if (VAR_17->ieee80211_ptr->iftype != VAR_13)
   return -VAR_0;
  VAR_21 = FUNC_3(VAR_15->attrs[VAR_9]);
  VAR_19.p2p_opp_ps = VAR_21;
  if (VAR_19.p2p_opp_ps &&
      !(VAR_16->wiphy.features & VAR_11))
   return -VAR_0;
 }

 if (!VAR_16->ops->change_bss)
  return -VAR_1;

 if (VAR_17->ieee80211_ptr->iftype != VAR_12 &&
     VAR_17->ieee80211_ptr->iftype != VAR_13)
  return -VAR_1;

 FUNC_6(VAR_18);
 VAR_20 = FUNC_5(VAR_16, VAR_17, &VAR_19);
 FUNC_7(VAR_18);

 return VAR_20;
}
