
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_trap {int dummy; } ;
struct devlink {int lock; } ;


 int FUNC_0 (struct devlink*,struct devlink_trap const*) ;
 int FUNC_1 (struct devlink*,struct devlink_trap const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

void FUNC_5(struct devlink *VAR_0,
         const struct devlink_trap *VAR_1,
         size_t VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_0->lock);



 for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--)
  FUNC_0(VAR_0, &VAR_1[VAR_3]);
 FUNC_4();
 for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--)
  FUNC_1(VAR_0, &VAR_1[VAR_3]);
 FUNC_3(&VAR_0->lock);
}
