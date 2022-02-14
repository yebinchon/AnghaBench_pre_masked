
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_sb {int list; } ;
struct devlink {int lock; } ;


 int FUNC_0 (int) ;
 struct devlink_sb* FUNC_1 (struct devlink*,unsigned int) ;
 int FUNC_2 (struct devlink_sb*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct devlink *VAR_0, unsigned int VAR_1)
{
 struct devlink_sb *VAR_2;

 FUNC_4(&VAR_0->lock);
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(!VAR_2);
 FUNC_3(&VAR_2->list);
 FUNC_5(&VAR_0->lock);
 FUNC_2(VAR_2);
}
