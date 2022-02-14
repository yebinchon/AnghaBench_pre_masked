
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int flags; } ;
struct net_device {TYPE_4__* ieee80211_ptr; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct key_parse {int type; int idx; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_4__* ieee80211_ptr; TYPE_2__ wiphy; TYPE_1__* ops; } ;
struct TYPE_9__ {int default_key; int default_mgmt_key; } ;
struct TYPE_10__ {TYPE_3__ wext; } ;
struct TYPE_7__ {int del_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct genl_info*,struct key_parse*) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct net_device*,struct net_device*,int,int,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct cfg80211_registered_device *VAR_9 = VAR_8->user_ptr[0];
 int VAR_10;
 struct net_device *VAR_11 = VAR_8->user_ptr[1];
 u8 *VAR_12 = ((void*)0);
 struct key_parse VAR_13;

 VAR_10 = FUNC_1(VAR_8, &VAR_13);
 if (VAR_10)
  return VAR_10;

 if (VAR_8->attrs[VAR_3])
  VAR_12 = FUNC_2(VAR_8->attrs[VAR_3]);

 if (VAR_13.type == -1) {
  if (VAR_12)
   VAR_13.type = VAR_5;
  else
   VAR_13.type = VAR_4;
 }


 if (VAR_13.type != VAR_5 &&
     VAR_13.type != VAR_4)
  return -VAR_0;

 if (!VAR_9->ops->del_key)
  return -VAR_2;

 FUNC_4(VAR_11->ieee80211_ptr);
 VAR_10 = FUNC_0(VAR_11->ieee80211_ptr);

 if (VAR_13.type == VAR_4 && VAR_12 &&
     !(VAR_9->wiphy.flags & VAR_6))
  VAR_10 = -VAR_1;

 if (!VAR_10)
  VAR_10 = FUNC_3(VAR_9, VAR_11, VAR_13.idx,
       VAR_13.type == VAR_5,
       VAR_12);
 FUNC_5(VAR_11->ieee80211_ptr);

 return VAR_10;
}
