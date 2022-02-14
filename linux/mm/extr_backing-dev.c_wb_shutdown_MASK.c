
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdi_writeback {int work_list; int dwork; int work_lock; int state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bdi_writeback*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct bdi_writeback *VAR_2)
{

 FUNC_5(&VAR_2->work_lock);
 if (!FUNC_7(VAR_0, &VAR_2->state)) {
  FUNC_6(&VAR_2->work_lock);
  return;
 }
 FUNC_6(&VAR_2->work_lock);

 FUNC_1(VAR_2);





 FUNC_4(VAR_1, &VAR_2->dwork, 0);
 FUNC_2(&VAR_2->dwork);
 FUNC_0(!FUNC_3(&VAR_2->work_list));
}
