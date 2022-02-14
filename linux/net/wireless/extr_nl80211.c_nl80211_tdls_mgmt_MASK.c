
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct net_device {TYPE_2__* ops; TYPE_1__ wiphy; } ;
struct genl_info {scalar_t__* attrs; struct net_device** user_ptr; } ;
struct cfg80211_registered_device {TYPE_2__* ops; TYPE_1__ wiphy; } ;
struct TYPE_4__ {int tdls_mgmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct net_device*,struct net_device*,int *,int ,int ,int ,int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_10, struct genl_info *VAR_11)
{
 struct cfg80211_registered_device *VAR_12 = VAR_11->user_ptr[0];
 struct net_device *VAR_13 = VAR_11->user_ptr[1];
 u8 VAR_14, VAR_15;
 u32 VAR_16 = 0;
 u16 VAR_17;
 u8 *VAR_18;
 bool VAR_19;

 if (!(VAR_12->wiphy.flags & VAR_9) ||
     !VAR_12->ops->tdls_mgmt)
  return -VAR_1;

 if (!VAR_11->attrs[VAR_5] ||
     !VAR_11->attrs[VAR_4] ||
     !VAR_11->attrs[VAR_6] ||
     !VAR_11->attrs[VAR_2] ||
     !VAR_11->attrs[VAR_3])
  return -VAR_0;

 VAR_18 = FUNC_0(VAR_11->attrs[VAR_3]);
 VAR_14 = FUNC_4(VAR_11->attrs[VAR_5]);
 VAR_17 = FUNC_2(VAR_11->attrs[VAR_4]);
 VAR_15 = FUNC_4(VAR_11->attrs[VAR_6]);
 VAR_19 = FUNC_1(VAR_11->attrs[VAR_7]);
 if (VAR_11->attrs[VAR_8])
  VAR_16 =
   FUNC_3(VAR_11->attrs[VAR_8]);

 return FUNC_6(VAR_12, VAR_13, VAR_18, VAR_14,
         VAR_15, VAR_17, VAR_16,
         VAR_19,
         FUNC_0(VAR_11->attrs[VAR_2]),
         FUNC_5(VAR_11->attrs[VAR_2]));
}
