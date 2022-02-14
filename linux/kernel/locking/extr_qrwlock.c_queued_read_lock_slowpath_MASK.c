
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qrwlock {int wait_lock; int cnts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(struct qrwlock *VAR_3)
{



 if (FUNC_6(FUNC_5())) {






  FUNC_3(&VAR_3->cnts, !(VAR_0 & VAR_2));
  return;
 }
 FUNC_4(VAR_1, &VAR_3->cnts);




 FUNC_0(&VAR_3->wait_lock);
 FUNC_2(VAR_1, &VAR_3->cnts);






 FUNC_3(&VAR_3->cnts, !(VAR_0 & VAR_2));




 FUNC_1(&VAR_3->wait_lock);
}
