
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_data {scalar_t__ dynticks_nmi_nesting; int dynticks_nesting; int dynticks; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct rcu_data*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 struct rcu_data* FUNC_11 (int *) ;
 int FUNC_12 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_13(bool VAR_4)
{
 struct rcu_data *VAR_5 = FUNC_11(&VAR_3);

 FUNC_2(VAR_5->dynticks_nmi_nesting != VAR_1);
 FUNC_3(VAR_5->dynticks_nmi_nesting, 0);
 FUNC_2(FUNC_0(VAR_0) &&
       VAR_5->dynticks_nesting == 0);
 if (VAR_5->dynticks_nesting != 1) {
  VAR_5->dynticks_nesting--;
  return;
 }

 FUNC_6();
 FUNC_12(FUNC_1("Start"), VAR_5->dynticks_nesting, 0, VAR_5->dynticks);
 FUNC_2(FUNC_0(VAR_0) && !VAR_4 && !FUNC_5(VAR_2));
 VAR_5 = FUNC_11(&VAR_3);
 FUNC_4(VAR_5);
 FUNC_10();
 FUNC_9(VAR_2);
 FUNC_3(VAR_5->dynticks_nesting, 0);
 FUNC_7();
 FUNC_8();
}
