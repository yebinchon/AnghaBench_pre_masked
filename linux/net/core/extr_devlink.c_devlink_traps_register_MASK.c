
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_trap {int dummy; } ;
struct devlink {int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int trap_action_set; int trap_init; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink*,struct devlink_trap const*,void*) ;
 int FUNC_1 (struct devlink*,struct devlink_trap const*) ;
 int FUNC_2 (struct devlink_trap const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct devlink *VAR_1,
      const struct devlink_trap *VAR_2,
      size_t VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6;

 if (!VAR_1->ops->trap_init || !VAR_1->ops->trap_action_set)
  return -VAR_0;

 FUNC_3(&VAR_1->lock);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  const struct devlink_trap *VAR_7 = &VAR_2[VAR_5];

  VAR_6 = FUNC_2(VAR_7);
  if (VAR_6)
   goto err_trap_verify;

  VAR_6 = FUNC_0(VAR_1, VAR_7, VAR_4);
  if (VAR_6)
   goto err_trap_register;
 }
 FUNC_4(&VAR_1->lock);

 return 0;

err_trap_register:
err_trap_verify:
 for (VAR_5--; VAR_5 >= 0; VAR_5--)
  FUNC_1(VAR_1, &VAR_2[VAR_5]);
 FUNC_4(&VAR_1->lock);
 return VAR_6;
}
