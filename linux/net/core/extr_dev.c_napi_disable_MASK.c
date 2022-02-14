
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct napi_struct {int state; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct napi_struct *VAR_3)
{
 FUNC_2();
 FUNC_4(VAR_0, &VAR_3->state);

 while (FUNC_5(VAR_2, &VAR_3->state))
  FUNC_3(1);
 while (FUNC_5(VAR_1, &VAR_3->state))
  FUNC_3(1);

 FUNC_1(&VAR_3->timer);

 FUNC_0(VAR_0, &VAR_3->state);
}
