
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smcd_dev {int dev; int list; } ;
struct TYPE_2__ {int lock; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct smcd_dev *VAR_1)
{
 FUNC_2(&VAR_0.lock);
 FUNC_1(&VAR_1->list, &VAR_0.list);
 FUNC_3(&VAR_0.lock);

 return FUNC_0(&VAR_1->dev);
}
