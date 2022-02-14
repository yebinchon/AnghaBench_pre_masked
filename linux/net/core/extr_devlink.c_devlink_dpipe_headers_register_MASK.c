
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink_dpipe_headers {int dummy; } ;
struct devlink {int lock; struct devlink_dpipe_headers* dpipe_headers; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct devlink *VAR_0,
       struct devlink_dpipe_headers *VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->dpipe_headers = VAR_1;
 FUNC_1(&VAR_0->lock);
 return 0;
}
