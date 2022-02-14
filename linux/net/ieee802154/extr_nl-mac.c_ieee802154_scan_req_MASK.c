
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_2__ {int (* scan_req ) (struct net_device*,scalar_t__,int ,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct genl_info*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct net_device*,scalar_t__,int ,scalar_t__,scalar_t__) ;

int FUNC_6(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct net_device *VAR_9;
 int VAR_10 = -VAR_2;
 u8 VAR_11;
 u32 VAR_12;
 u8 VAR_13;
 u8 VAR_14;

 if (!VAR_8->attrs[VAR_6] ||
     !VAR_8->attrs[VAR_3] ||
     !VAR_8->attrs[VAR_4])
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8);
 if (!VAR_9)
  return -VAR_1;
 if (!FUNC_1(VAR_9)->scan_req)
  goto out;

 VAR_11 = FUNC_4(VAR_8->attrs[VAR_6]);
 VAR_12 = FUNC_3(VAR_8->attrs[VAR_3]);
 VAR_13 = FUNC_4(VAR_8->attrs[VAR_4]);

 if (VAR_8->attrs[VAR_5])
  VAR_14 = FUNC_4(VAR_8->attrs[VAR_5]);
 else
  VAR_14 = 0;

 VAR_10 = FUNC_1(VAR_9)->scan_req(VAR_9, VAR_11, VAR_12,
       VAR_14, VAR_13);

out:
 FUNC_0(VAR_9);
 return VAR_10;
}
