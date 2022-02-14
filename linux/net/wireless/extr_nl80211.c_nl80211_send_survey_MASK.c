
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct survey_info {int filled; int time_bss_rx; int time_scan; int time_tx; int time_rx; int time_ext_busy; int time_busy; int time; int noise; TYPE_1__* channel; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; } ;
struct TYPE_2__ {int center_freq; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int,int ) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_25, u32 VAR_26, u32 VAR_27,
          int VAR_28, struct net_device *VAR_29,
          bool VAR_30,
          struct survey_info *VAR_31)
{
 void *VAR_32;
 struct nlattr *VAR_33;


 if (!VAR_31->channel && !VAR_30)
  return 0;

 VAR_32 = FUNC_2(VAR_25, VAR_26, VAR_27, VAR_28,
        VAR_4);
 if (!VAR_32)
  return -VAR_1;

 if (FUNC_6(VAR_25, VAR_2, VAR_29->ifindex))
  goto nla_put_failure;

 VAR_33 = FUNC_4(VAR_25, VAR_3);
 if (!VAR_33)
  goto nla_put_failure;

 if (VAR_31->channel &&
     FUNC_6(VAR_25, VAR_5,
   VAR_31->channel->center_freq))
  goto nla_put_failure;

 if ((VAR_31->filled & VAR_17) &&
     FUNC_8(VAR_25, VAR_7, VAR_31->noise))
  goto nla_put_failure;
 if ((VAR_31->filled & VAR_16) &&
     FUNC_5(VAR_25, VAR_6))
  goto nla_put_failure;
 if ((VAR_31->filled & VAR_18) &&
     FUNC_7(VAR_25, VAR_9,
   VAR_31->time, VAR_8))
  goto nla_put_failure;
 if ((VAR_31->filled & VAR_20) &&
     FUNC_7(VAR_25, VAR_11,
         VAR_31->time_busy, VAR_8))
  goto nla_put_failure;
 if ((VAR_31->filled & VAR_21) &&
     FUNC_7(VAR_25, VAR_12,
         VAR_31->time_ext_busy, VAR_8))
  goto nla_put_failure;
 if ((VAR_31->filled & VAR_22) &&
     FUNC_7(VAR_25, VAR_13,
         VAR_31->time_rx, VAR_8))
  goto nla_put_failure;
 if ((VAR_31->filled & VAR_24) &&
     FUNC_7(VAR_25, VAR_15,
         VAR_31->time_tx, VAR_8))
  goto nla_put_failure;
 if ((VAR_31->filled & VAR_23) &&
     FUNC_7(VAR_25, VAR_14,
         VAR_31->time_scan, VAR_8))
  goto nla_put_failure;
 if ((VAR_31->filled & VAR_19) &&
     FUNC_7(VAR_25, VAR_10,
         VAR_31->time_bss_rx, VAR_8))
  goto nla_put_failure;

 FUNC_3(VAR_25, VAR_33);

 FUNC_1(VAR_25, VAR_32);
 return 0;

 nla_put_failure:
 FUNC_0(VAR_25, VAR_32);
 return -VAR_0;
}
