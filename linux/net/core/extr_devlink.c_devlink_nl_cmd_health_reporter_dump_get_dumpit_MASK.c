
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {scalar_t__* args; int extack; } ;
struct devlink_health_reporter {scalar_t__ dump_ts; int dump_lock; int dump_fmsg; TYPE_1__* ops; } ;
struct TYPE_2__ {int dump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct sk_buff*,struct netlink_callback*,int ) ;
 int FUNC_2 (struct devlink_health_reporter*,int *) ;
 struct devlink_health_reporter* FUNC_3 (struct netlink_callback*) ;
 int FUNC_4 (struct devlink_health_reporter*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct sk_buff *VAR_4,
            struct netlink_callback *VAR_5)
{
 struct devlink_health_reporter *VAR_6;
 u64 VAR_7 = VAR_5->args[0];
 int VAR_8;

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6)
  return -VAR_2;

 if (!VAR_6->ops->dump) {
  VAR_8 = -VAR_3;
  goto out;
 }
 FUNC_5(&VAR_6->dump_lock);
 if (!VAR_7) {
  VAR_8 = FUNC_2(VAR_6, ((void*)0));
  if (VAR_8)
   goto unlock;
  VAR_5->args[1] = VAR_6->dump_ts;
 }
 if (!VAR_6->dump_fmsg || VAR_5->args[1] != VAR_6->dump_ts) {
  FUNC_0(VAR_5->extack, "Dump trampled, please retry");
  VAR_8 = -VAR_1;
  goto unlock;
 }

 VAR_8 = FUNC_1(VAR_6->dump_fmsg, VAR_4, VAR_5,
      VAR_0);
unlock:
 FUNC_6(&VAR_6->dump_lock);
out:
 FUNC_4(VAR_6);
 return VAR_8;
}
