
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct bdi_writeback_congested {int state; } ;
typedef enum wb_congested_state { ____Placeholder_wb_congested_state } wb_congested_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct bdi_writeback_congested *VAR_4, int VAR_5)
{
 wait_queue_head_t *VAR_6 = &VAR_2[VAR_5];
 enum wb_congested_state VAR_7;

 VAR_7 = VAR_5 ? VAR_1 : VAR_0;
 if (FUNC_2(VAR_7, &VAR_4->state))
  FUNC_0(&VAR_3[VAR_5]);
 FUNC_1();
 if (FUNC_3(VAR_6))
  FUNC_4(VAR_6);
}
