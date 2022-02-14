
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_data {int dynticks; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct rcu_data* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct rcu_data *VAR_4 = FUNC_6(&VAR_3);
 int VAR_5;






 VAR_5 = FUNC_2(VAR_1, &VAR_4->dynticks);
 FUNC_1(FUNC_0(VAR_0) &&
       !(VAR_5 & VAR_1));
 if (VAR_5 & VAR_2) {
  FUNC_3(VAR_2, &VAR_4->dynticks);
  FUNC_5();

  FUNC_4();
 }
}
