
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct devlink_health_reporter {int dump_ts; scalar_t__ dump_fmsg; int auto_recover; TYPE_1__* ops; int graceful_period; int recovery_count; int error_count; int health_state; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;
struct TYPE_2__ {scalar_t__ recover; int name; } ;


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
 scalar_t__ FUNC_0 (struct sk_buff*,struct devlink*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct sk_buff *VAR_11,
    struct devlink *VAR_12,
    struct devlink_health_reporter *VAR_13,
    enum devlink_command VAR_14, u32 VAR_15,
    u32 VAR_16, int VAR_17)
{
 struct nlattr *VAR_18;
 void *VAR_19;

 VAR_19 = FUNC_3(VAR_11, VAR_15, VAR_16, &VAR_10, VAR_17, VAR_14);
 if (!VAR_19)
  return -VAR_9;

 if (FUNC_0(VAR_11, VAR_12))
  goto genlmsg_cancel;

 VAR_18 = FUNC_6(VAR_11,
           VAR_0);
 if (!VAR_18)
  goto genlmsg_cancel;
 if (FUNC_7(VAR_11, VAR_5,
      VAR_13->ops->name))
  goto reporter_nest_cancel;
 if (FUNC_9(VAR_11, VAR_7,
         VAR_13->health_state))
  goto reporter_nest_cancel;
 if (FUNC_8(VAR_11, VAR_3,
         VAR_13->error_count, VAR_8))
  goto reporter_nest_cancel;
 if (FUNC_8(VAR_11, VAR_6,
         VAR_13->recovery_count, VAR_8))
  goto reporter_nest_cancel;
 if (VAR_13->ops->recover &&
     FUNC_8(VAR_11, VAR_4,
         VAR_13->graceful_period,
         VAR_8))
  goto reporter_nest_cancel;
 if (VAR_13->ops->recover &&
     FUNC_9(VAR_11, VAR_1,
         VAR_13->auto_recover))
  goto reporter_nest_cancel;
 if (VAR_13->dump_fmsg &&
     FUNC_8(VAR_11, VAR_2,
         FUNC_4(VAR_13->dump_ts),
         VAR_8))
  goto reporter_nest_cancel;

 FUNC_5(VAR_11, VAR_18);
 FUNC_2(VAR_11, VAR_19);
 return 0;

reporter_nest_cancel:
 FUNC_5(VAR_11, VAR_18);
genlmsg_cancel:
 FUNC_1(VAR_11, VAR_19);
 return -VAR_9;
}
