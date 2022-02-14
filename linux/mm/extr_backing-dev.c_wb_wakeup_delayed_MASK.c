
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdi_writeback {int work_lock; int dwork; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int ,int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(struct bdi_writeback *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_2 * 10);
 FUNC_2(&VAR_3->work_lock);
 if (FUNC_4(VAR_0, &VAR_3->state))
  FUNC_1(VAR_1, &VAR_3->dwork, VAR_4);
 FUNC_3(&VAR_3->work_lock);
}
