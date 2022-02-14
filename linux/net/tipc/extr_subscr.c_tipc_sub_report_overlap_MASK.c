
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_subscr {int dummy; } ;
struct TYPE_2__ {struct tipc_subscr s; } ;
struct tipc_subscription {int lock; TYPE_1__ evt; } ;
struct tipc_name_seq {void* upper; void* lower; void* type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tipc_name_seq*,scalar_t__,scalar_t__) ;
 void* FUNC_3 (struct tipc_subscr*,void*) ;
 int FUNC_4 (struct tipc_subscription*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_5(struct tipc_subscription *VAR_5,
        u32 VAR_6, u32 VAR_7,
        u32 VAR_8, u32 VAR_9, u32 VAR_10,
        u32 VAR_11, int VAR_12)
{
 struct tipc_subscr *VAR_13 = &VAR_5->evt.s;
 u32 VAR_14 = FUNC_3(VAR_13, VAR_14);
 struct tipc_name_seq VAR_15;

 VAR_15.type = FUNC_3(VAR_13, VAR_15.type);
 VAR_15.lower = FUNC_3(VAR_13, VAR_15.lower);
 VAR_15.upper = FUNC_3(VAR_13, VAR_15.upper);

 if (!FUNC_2(&VAR_15, VAR_6, VAR_7))
  return;

 if (!VAR_12 && !(VAR_14 & VAR_3))
  return;
 if (VAR_14 & VAR_1 && VAR_11 == VAR_0)
  return;
 if (VAR_14 & VAR_2 && VAR_11 != VAR_0)
  return;
 FUNC_0(&VAR_5->lock);
 FUNC_4(VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_9, VAR_10);
 FUNC_1(&VAR_5->lock);
}
