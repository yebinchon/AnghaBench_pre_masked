
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_device {int free_work; int refcount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(struct rds_ib_device *VAR_1)
{
 FUNC_0(FUNC_3(&VAR_1->refcount) == 0);
 if (FUNC_2(&VAR_1->refcount))
  FUNC_1(VAR_0, &VAR_1->free_work);
}
