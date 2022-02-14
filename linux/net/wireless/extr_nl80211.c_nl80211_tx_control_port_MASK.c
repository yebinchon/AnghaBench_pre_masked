
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wireless_dev {int iftype; int current_bss; } ;
struct sk_buff {int dummy; } ;
struct net_device {TYPE_1__* ops; int wiphy; struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {int * attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; int wiphy; struct wireless_dev* ieee80211_ptr; } ;
struct TYPE_2__ {int tx_control_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct genl_info*,char*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;






 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (struct net_device*,struct net_device*,int const*,size_t,int *,int ,int) ;
 int FUNC_7 (struct wireless_dev*) ;
 int FUNC_8 (struct wireless_dev*) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 struct cfg80211_registered_device *VAR_10 = VAR_9->user_ptr[0];
 struct net_device *VAR_11 = VAR_9->user_ptr[1];
 struct wireless_dev *VAR_12 = VAR_11->ieee80211_ptr;
 const u8 *VAR_13;
 size_t VAR_14;
 u8 *VAR_15;
 u16 VAR_16;
 bool VAR_17;
 int VAR_18;

 if (!FUNC_9(&VAR_10->wiphy,
         VAR_7))
  return -VAR_2;

 if (!VAR_10->ops->tx_control_port)
  return -VAR_2;

 if (!VAR_9->attrs[VAR_5] ||
     !VAR_9->attrs[VAR_6] ||
     !VAR_9->attrs[VAR_3]) {
  FUNC_0(VAR_9, "Frame, MAC or ethertype missing");
  return -VAR_0;
 }

 FUNC_7(VAR_12);

 switch (VAR_12->iftype) {
 case 132:
 case 129:
 case 131:
  break;
 case 133:
 case 128:
 case 130:
  if (VAR_12->current_bss)
   break;
  VAR_18 = -VAR_1;
  goto out;
 default:
  VAR_18 = -VAR_2;
  goto out;
 }

 FUNC_8(VAR_12);

 VAR_13 = FUNC_2(VAR_9->attrs[VAR_5]);
 VAR_14 = FUNC_5(VAR_9->attrs[VAR_5]);
 VAR_15 = FUNC_2(VAR_9->attrs[VAR_6]);
 VAR_16 = FUNC_4(VAR_9->attrs[VAR_3]);
 VAR_17 =
  FUNC_3(VAR_9->attrs[VAR_4]);

 return FUNC_6(VAR_10, VAR_11, VAR_13, VAR_14,
        VAR_15, FUNC_1(VAR_16), VAR_17);

 out:
 FUNC_8(VAR_12);
 return VAR_18;
}
