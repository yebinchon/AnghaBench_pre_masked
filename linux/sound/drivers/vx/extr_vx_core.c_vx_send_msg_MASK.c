
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_rmh {int dummy; } ;
struct vx_core {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vx_core*,struct vx_rmh*) ;

int FUNC_3(struct vx_core *VAR_0, struct vx_rmh *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->lock);
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_0->lock);
 return VAR_2;
}
