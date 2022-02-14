
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct devlink {int lock; scalar_t__ snapshot_id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

u32 FUNC_2(struct devlink *VAR_0)
{
 u32 VAR_1;

 FUNC_0(&VAR_0->lock);
 VAR_1 = ++VAR_0->snapshot_id;
 FUNC_1(&VAR_0->lock);

 return VAR_1;
}
