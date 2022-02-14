
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq {int calc_load_update; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (long,int *) ;
 long FUNC_1 (struct rq*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;

void FUNC_3(struct rq *VAR_3)
{
 long VAR_4;

 if (FUNC_2(VAR_2, VAR_3->calc_load_update))
  return;

 VAR_4 = FUNC_1(VAR_3, 0);
 if (VAR_4)
  FUNC_0(VAR_4, &VAR_1);

 VAR_3->calc_load_update += VAR_0;
}
