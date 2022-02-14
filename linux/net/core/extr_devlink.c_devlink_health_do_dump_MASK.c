
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_health_reporter {int dump_ts; scalar_t__ dump_fmsg; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dump ) (struct devlink_health_reporter*,scalar_t__,void*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct devlink_health_reporter*) ;
 int VAR_1 ;
 int FUNC_4 (struct devlink_health_reporter*,scalar_t__,void*) ;

__attribute__((used)) static int FUNC_5(struct devlink_health_reporter *VAR_2,
      void *VAR_3)
{
 int VAR_4;

 if (!VAR_2->ops->dump)
  return 0;

 if (VAR_2->dump_fmsg)
  return 0;

 VAR_2->dump_fmsg = FUNC_0();
 if (!VAR_2->dump_fmsg) {
  VAR_4 = -VAR_0;
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_2->dump_fmsg);
 if (VAR_4)
  goto dump_err;

 VAR_4 = VAR_2->ops->dump(VAR_2, VAR_2->dump_fmsg,
      VAR_3);
 if (VAR_4)
  goto dump_err;

 VAR_4 = FUNC_1(VAR_2->dump_fmsg);
 if (VAR_4)
  goto dump_err;

 VAR_2->dump_ts = VAR_1;

 return 0;

dump_err:
 FUNC_3(VAR_2);
 return VAR_4;
}
