
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {int mesh_id_up_len; int ssid; int owner_nlportid; } ;
struct vif_params {int use_4addr; int macaddr; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; scalar_t__* attrs; struct cfg80211_registered_device** user_ptr; } ;
struct TYPE_4__ {int features; } ;
struct cfg80211_registered_device {TYPE_2__ wiphy; TYPE_1__* ops; } ;
typedef int params ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
struct TYPE_3__ {int add_virtual_intf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct wireless_dev*) ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;



 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct wireless_dev*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct cfg80211_registered_device*) ;
 int FUNC_5 (TYPE_2__*,int,int,int ) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_7 (struct sk_buff*,struct genl_info*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct vif_params*,int ,int) ;
 int FUNC_11 (struct cfg80211_registered_device*,int,struct genl_info*,struct vif_params*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ,int ,struct cfg80211_registered_device*,struct wireless_dev*,int ) ;
 int FUNC_13 (struct cfg80211_registered_device*,int *,int,int) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ,scalar_t__,int ) ;
 int FUNC_19 (struct sk_buff*) ;
 struct sk_buff* FUNC_20 (int ,int ) ;
 struct wireless_dev* FUNC_21 (struct cfg80211_registered_device*,int ,int ,int,struct vif_params*) ;
 int FUNC_22 (struct wireless_dev*) ;
 int FUNC_23 (struct wireless_dev*) ;

__attribute__((used)) static int FUNC_24(struct sk_buff *VAR_21, struct genl_info *VAR_22)
{
 struct cfg80211_registered_device *VAR_23 = VAR_22->user_ptr[0];
 struct vif_params VAR_24;
 struct wireless_dev *VAR_25;
 struct sk_buff *VAR_26;
 int VAR_27;
 enum nl80211_iftype VAR_28 = VAR_19;


 FUNC_4(VAR_23);

 FUNC_10(&VAR_24, 0, sizeof(VAR_24));

 if (!VAR_22->attrs[VAR_12])
  return -VAR_1;

 if (VAR_22->attrs[VAR_13])
  VAR_28 = FUNC_15(VAR_22->attrs[VAR_13]);

 if (!VAR_23->ops->add_virtual_intf)
  return -VAR_4;

 if ((VAR_28 == 128 || VAR_28 == 129 ||
      VAR_23->wiphy.features & VAR_18) &&
     VAR_22->attrs[VAR_14]) {
  FUNC_18(VAR_24.macaddr, VAR_22->attrs[VAR_14],
      VAR_6);
  if (!FUNC_8(VAR_24.macaddr))
   return -VAR_0;
 }

 if (VAR_22->attrs[VAR_11]) {
  VAR_24.use_4addr = !!FUNC_16(VAR_22->attrs[VAR_11]);
  VAR_27 = FUNC_13(VAR_23, ((void*)0), VAR_24.use_4addr, VAR_28);
  if (VAR_27)
   return VAR_27;
 }

 if (!FUNC_5(&VAR_23->wiphy, VAR_28, VAR_24.use_4addr, 0))
  return -VAR_4;

 VAR_27 = FUNC_11(VAR_23, VAR_28, VAR_22, &VAR_24);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_26 = FUNC_20(VAR_20, VAR_7);
 if (!VAR_26)
  return -VAR_3;

 VAR_25 = FUNC_21(VAR_23,
    FUNC_14(VAR_22->attrs[VAR_12]),
    VAR_10, VAR_28, &VAR_24);
 if (FUNC_3(!VAR_25)) {
  FUNC_19(VAR_26);
  return -VAR_5;
 } else if (FUNC_1(VAR_25)) {
  FUNC_19(VAR_26);
  return FUNC_2(VAR_25);
 }

 if (VAR_22->attrs[VAR_16])
  VAR_25->owner_nlportid = VAR_22->snd_portid;

 switch (VAR_28) {
 case 130:
  if (!VAR_22->attrs[VAR_15])
   break;
  FUNC_22(VAR_25);
  FUNC_0(VAR_9 !=
        VAR_8);
  VAR_25->mesh_id_up_len =
   FUNC_17(VAR_22->attrs[VAR_15]);
  FUNC_9(VAR_25->ssid, FUNC_14(VAR_22->attrs[VAR_15]),
         VAR_25->mesh_id_up_len);
  FUNC_23(VAR_25);
  break;
 case 129:
 case 128:




  FUNC_6(VAR_23, VAR_25);
  break;
 default:
  break;
 }

 if (FUNC_12(VAR_26, VAR_22->snd_portid, VAR_22->snd_seq, 0,
          VAR_23, VAR_25, VAR_17) < 0) {
  FUNC_19(VAR_26);
  return -VAR_2;
 }

 return FUNC_7(VAR_26, VAR_22);
}
