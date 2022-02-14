
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k_itimer {int rcu; int sigq; int it_pid; int t_hash; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct k_itimer *VAR_2, int VAR_3)
{
 if (VAR_3) {
  unsigned long VAR_4;
  FUNC_4(&VAR_0, VAR_4);
  FUNC_1(&VAR_2->t_hash);
  FUNC_5(&VAR_0, VAR_4);
 }
 FUNC_2(VAR_2->it_pid);
 FUNC_3(VAR_2->sigq);
 FUNC_0(&VAR_2->rcu, VAR_1);
}
