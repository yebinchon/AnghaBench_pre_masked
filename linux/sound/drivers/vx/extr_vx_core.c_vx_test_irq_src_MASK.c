
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* Stat; } ;
struct vx_core {int lock; TYPE_1__ irq_rmh; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct vx_core*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct vx_core *VAR_1, unsigned int *VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_1->irq_rmh, VAR_0);
 FUNC_0(&VAR_1->lock);
 VAR_3 = FUNC_3(VAR_1, &VAR_1->irq_rmh);
 if (VAR_3 < 0)
  *VAR_2 = 0;
 else
  *VAR_2 = VAR_1->irq_rmh.Stat[0];
 FUNC_1(&VAR_1->lock);
 return VAR_3;
}
