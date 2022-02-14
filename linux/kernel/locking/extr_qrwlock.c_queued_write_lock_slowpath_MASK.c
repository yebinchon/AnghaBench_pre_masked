
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qrwlock {int wait_lock; int cnts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct qrwlock *VAR_3)
{

 FUNC_0(&VAR_3->wait_lock);


 if (!FUNC_6(&VAR_3->cnts) &&
     (FUNC_3(&VAR_3->cnts, 0, VAR_1) == 0))
  goto unlock;


 FUNC_2(VAR_2, &VAR_3->cnts);


 do {
  FUNC_5(&VAR_3->cnts, VAR_0 == VAR_2);
 } while (FUNC_4(&VAR_3->cnts, VAR_2,
     VAR_1) != VAR_2);
unlock:
 FUNC_1(&VAR_3->wait_lock);
}
