
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct devlink_param {int dummy; } ;
struct devlink {int lock; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int FUNC_0 (struct devlink*,unsigned int,struct list_head*,struct devlink_param const*,int) ;
 int FUNC_1 (struct devlink*,unsigned int,struct list_head*,struct devlink_param const*,int) ;
 int FUNC_2 (struct devlink_param const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct devlink *VAR_0,
         unsigned int VAR_1,
         struct list_head *VAR_2,
         const struct devlink_param *VAR_3,
         size_t VAR_4,
         enum devlink_command VAR_5,
         enum devlink_command VAR_6)
{
 const struct devlink_param *VAR_7 = VAR_3;
 int VAR_8;
 int VAR_9;

 FUNC_3(&VAR_0->lock);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++, VAR_7++) {
  VAR_9 = FUNC_2(VAR_7);
  if (VAR_9)
   goto rollback;

  VAR_9 = FUNC_0(VAR_0, VAR_1,
       VAR_2, VAR_7, VAR_5);
  if (VAR_9)
   goto rollback;
 }

 FUNC_4(&VAR_0->lock);
 return 0;

rollback:
 if (!VAR_8)
  goto unlock;
 for (VAR_7--; VAR_8 > 0; VAR_8--, VAR_7--)
  FUNC_1(VAR_0, VAR_1, VAR_2,
          VAR_7, VAR_6);
unlock:
 FUNC_4(&VAR_0->lock);
 return VAR_9;
}
