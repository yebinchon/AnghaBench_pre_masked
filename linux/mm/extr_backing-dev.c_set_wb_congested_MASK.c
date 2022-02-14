
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdi_writeback_congested {int state; } ;
typedef enum wb_congested_state { ____Placeholder_wb_congested_state } wb_congested_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * VAR_2 ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct bdi_writeback_congested *VAR_3, int VAR_4)
{
 enum wb_congested_state VAR_5;

 VAR_5 = VAR_4 ? VAR_1 : VAR_0;
 if (!FUNC_1(VAR_5, &VAR_3->state))
  FUNC_0(&VAR_2[VAR_4]);
}
