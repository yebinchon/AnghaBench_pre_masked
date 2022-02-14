
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct cake_sched_data {int flow_mode; int interval; int target; int buffer_config_limit; int rate_flags; int ack_filter; int tin_mode; int rate_overhead; int atm_mode; int rate_mpu; int fwmark_mask; int rate_bps; } ;
struct Qdisc {int dummy; } ;


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
 int VAR_25 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 struct cake_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_26, struct sk_buff *VAR_27)
{
 struct cake_sched_data *VAR_28 = FUNC_4(VAR_26);
 struct nlattr *VAR_29;

 VAR_29 = FUNC_1(VAR_27, VAR_25);
 if (!VAR_29)
  goto nla_put_failure;

 if (FUNC_3(VAR_27, VAR_10, VAR_28->rate_bps,
         VAR_19))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_12,
   VAR_28->flow_mode & VAR_5))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_21, VAR_28->interval))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_23, VAR_28->target))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_15, VAR_28->buffer_config_limit))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_9,
   !!(VAR_28->rate_flags & VAR_0)))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_14,
   !!(VAR_28->rate_flags & VAR_1)))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_7, VAR_28->ack_filter))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_17,
   !!(VAR_28->flow_mode & VAR_6)))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_11, VAR_28->tin_mode))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_24,
   !!(VAR_28->rate_flags & VAR_4)))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_18, VAR_28->rate_overhead))
  goto nla_put_failure;

 if (!(VAR_28->rate_flags & VAR_2))
  if (FUNC_2(VAR_27, VAR_20, 0))
   goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_8, VAR_28->atm_mode))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_16, VAR_28->rate_mpu))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_22,
   !!(VAR_28->rate_flags & VAR_3)))
  goto nla_put_failure;

 if (FUNC_2(VAR_27, VAR_13, VAR_28->fwmark_mask))
  goto nla_put_failure;

 return FUNC_0(VAR_27, VAR_29);

nla_put_failure:
 return -1;
}
