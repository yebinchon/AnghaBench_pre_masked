
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vx_core {int clock_source; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_clock_source ) (struct vx_core*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vx_core*,int) ;
 int FUNC_3 (struct vx_core*,int) ;

__attribute__((used)) static void FUNC_4(struct vx_core *VAR_0, int VAR_1)
{

 FUNC_3(VAR_0, 1);
 FUNC_0(&VAR_0->lock);
 VAR_0->ops->set_clock_source(VAR_0, VAR_1);
 VAR_0->clock_source = VAR_1;
 FUNC_1(&VAR_0->lock);

 FUNC_3(VAR_0, 0);
}
