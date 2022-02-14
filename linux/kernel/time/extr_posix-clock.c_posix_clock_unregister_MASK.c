
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_clock {int zombie; int kref; int rwsem; int cdev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct posix_clock *VAR_1)
{
 FUNC_0(&VAR_1->cdev);

 FUNC_1(&VAR_1->rwsem);
 VAR_1->zombie = 1;
 FUNC_3(&VAR_1->rwsem);

 FUNC_2(&VAR_1->kref, VAR_0);
}
