
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; struct devlink** user_ptr; } ;
struct devlink_health_reporter {int auto_recover; int graceful_period; TYPE_1__* ops; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int recover; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct devlink_health_reporter* FUNC_0 (struct devlink*,struct genl_info*) ;
 int FUNC_1 (struct devlink_health_reporter*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct sk_buff *VAR_4,
     struct genl_info *VAR_5)
{
 struct devlink *VAR_6 = VAR_5->user_ptr[0];
 struct devlink_health_reporter *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_5);
 if (!VAR_7)
  return -VAR_2;

 if (!VAR_7->ops->recover &&
     (VAR_5->attrs[VAR_1] ||
      VAR_5->attrs[VAR_0])) {
  VAR_8 = -VAR_3;
  goto out;
 }

 if (VAR_5->attrs[VAR_1])
  VAR_7->graceful_period =
   FUNC_2(VAR_5->attrs[VAR_1]);

 if (VAR_5->attrs[VAR_0])
  VAR_7->auto_recover =
   FUNC_3(VAR_5->attrs[VAR_0]);

 FUNC_1(VAR_7);
 return 0;
out:
 FUNC_1(VAR_7);
 return VAR_8;
}
