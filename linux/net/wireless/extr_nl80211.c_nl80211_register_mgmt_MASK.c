
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wireless_dev {int iftype; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; int snd_portid; struct wireless_dev** user_ptr; } ;
struct cfg80211_registered_device {int iftype; TYPE_1__* ops; } ;
struct TYPE_2__ {int mgmt_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct wireless_dev*,int ,int,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_6, struct genl_info *VAR_7)
{
 struct cfg80211_registered_device *VAR_8 = VAR_7->user_ptr[0];
 struct wireless_dev *VAR_9 = VAR_7->user_ptr[1];
 u16 VAR_10 = VAR_2 | VAR_3;

 if (!VAR_7->attrs[VAR_4])
  return -VAR_0;

 if (VAR_7->attrs[VAR_5])
  VAR_10 = FUNC_2(VAR_7->attrs[VAR_5]);

 switch (VAR_9->iftype) {
 case 128:
 case 136:
 case 131:
 case 135:
 case 134:
 case 133:
 case 129:
 case 130:
  break;
 case 132:
 default:
  return -VAR_1;
 }


 if (!VAR_8->ops->mgmt_tx)
  return -VAR_1;

 return FUNC_0(VAR_9, VAR_7->snd_portid, VAR_10,
   FUNC_1(VAR_7->attrs[VAR_4]),
   FUNC_3(VAR_7->attrs[VAR_4]));
}
