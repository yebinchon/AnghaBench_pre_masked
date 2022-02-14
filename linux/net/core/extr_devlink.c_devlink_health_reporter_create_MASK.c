
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct devlink_health_reporter_ops {int recover; int name; } ;
struct devlink_health_reporter {int auto_recover; int list; int refcount; int dump_lock; scalar_t__ graceful_period; struct devlink* devlink; struct devlink_health_reporter_ops const* ops; void* priv; } ;
struct devlink {int reporters_lock; int reporter_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct devlink_health_reporter* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct devlink*,int ) ;
 struct devlink_health_reporter* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

struct devlink_health_reporter *
FUNC_9(struct devlink *VAR_4,
          const struct devlink_health_reporter_ops *VAR_5,
          u64 VAR_6, bool VAR_7,
          void *VAR_8)
{
 struct devlink_health_reporter *VAR_9;

 FUNC_6(&VAR_4->reporters_lock);
 if (FUNC_2(VAR_4, VAR_5->name)) {
  VAR_9 = FUNC_0(-VAR_0);
  goto unlock;
 }

 if (FUNC_1(VAR_7 && !VAR_5->recover) ||
     FUNC_1(VAR_6 && !VAR_5->recover)) {
  VAR_9 = FUNC_0(-VAR_1);
  goto unlock;
 }

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  VAR_9 = FUNC_0(-VAR_2);
  goto unlock;
 }

 VAR_9->priv = VAR_8;
 VAR_9->ops = VAR_5;
 VAR_9->devlink = VAR_4;
 VAR_9->graceful_period = VAR_6;
 VAR_9->auto_recover = VAR_7;
 FUNC_5(&VAR_9->dump_lock);
 FUNC_8(&VAR_9->refcount, 1);
 FUNC_4(&VAR_9->list, &VAR_4->reporter_list);
unlock:
 FUNC_7(&VAR_4->reporters_lock);
 return VAR_9;
}
