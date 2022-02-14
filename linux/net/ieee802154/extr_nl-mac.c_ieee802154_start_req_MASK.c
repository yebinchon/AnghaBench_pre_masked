
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ieee802154_addr {scalar_t__ short_addr; void* pan_id; int mode; } ;
struct genl_info {scalar_t__* attrs; } ;
struct TYPE_2__ {int (* start_req ) (struct net_device*,struct ieee802154_addr*,void*,void*,void*,void*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct genl_info*) ;
 int FUNC_4 (struct net_device*,int ) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 void* FUNC_6 (scalar_t__) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct net_device*,struct ieee802154_addr*,void*,void*,void*,void*,int,int,int) ;

int FUNC_11(struct sk_buff *VAR_17, struct genl_info *VAR_18)
{
 struct net_device *VAR_19;
 struct ieee802154_addr VAR_20;

 u8 VAR_21, VAR_22, VAR_23;
 u8 VAR_24;
 int VAR_25, VAR_26, VAR_27;
 int VAR_28 = -VAR_0;

 if (!VAR_18->attrs[VAR_9] ||
     !VAR_18->attrs[VAR_11] ||
     !VAR_18->attrs[VAR_8] ||
     !VAR_18->attrs[VAR_7] ||
     !VAR_18->attrs[VAR_14] ||
     !VAR_18->attrs[VAR_13] ||
     !VAR_18->attrs[VAR_6] ||
     !VAR_18->attrs[VAR_10]
  )
  return -VAR_1;

 VAR_19 = FUNC_3(VAR_18);
 if (!VAR_19)
  return -VAR_2;

 if (FUNC_5(VAR_19))
  goto out;

 if (!FUNC_2(VAR_19)->start_req) {
  VAR_28 = -VAR_3;
  goto out;
 }

 VAR_20.mode = VAR_5;
 VAR_20.short_addr = FUNC_6(
   VAR_18->attrs[VAR_11]);
 VAR_20.pan_id = FUNC_6(
   VAR_18->attrs[VAR_9]);

 VAR_21 = FUNC_7(VAR_18->attrs[VAR_8]);
 VAR_22 = FUNC_7(VAR_18->attrs[VAR_7]);
 VAR_23 = FUNC_7(VAR_18->attrs[VAR_14]);
 VAR_25 = FUNC_7(VAR_18->attrs[VAR_13]);
 VAR_26 = FUNC_7(VAR_18->attrs[VAR_6]);
 VAR_27 = FUNC_7(VAR_18->attrs[VAR_10]);

 if (VAR_18->attrs[VAR_12])
  VAR_24 = FUNC_7(VAR_18->attrs[VAR_12]);
 else
  VAR_24 = 0;

 if (VAR_20.short_addr == FUNC_0(VAR_4)) {
  FUNC_4(VAR_19, VAR_15);
  FUNC_1(VAR_19);
  return -VAR_1;
 }

 FUNC_8();
 VAR_28 = FUNC_2(VAR_19)->start_req(VAR_19, &VAR_20, VAR_21, VAR_24,
  VAR_22, VAR_23, VAR_25, VAR_26, VAR_27);
 FUNC_9();




 FUNC_4(VAR_19, VAR_16);

out:
 FUNC_1(VAR_19);
 return VAR_28;
}
