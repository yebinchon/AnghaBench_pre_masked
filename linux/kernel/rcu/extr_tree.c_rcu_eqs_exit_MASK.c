
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_data {long dynticks_nesting; int dynticks_nmi_nesting; int dynticks; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (long,int) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_3 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct rcu_data* FUNC_9 (int *) ;
 int FUNC_10 (int ,long,int,int ) ;

__attribute__((used)) static void FUNC_11(bool VAR_4)
{
 struct rcu_data *VAR_5;
 long VAR_6;

 FUNC_5();
 VAR_5 = FUNC_9(&VAR_3);
 VAR_6 = VAR_5->dynticks_nesting;
 FUNC_2(FUNC_0(VAR_0) && VAR_6 < 0);
 if (VAR_6) {
  VAR_5->dynticks_nesting++;
  return;
 }
 FUNC_8();
 FUNC_7();
 FUNC_6();
 FUNC_10(FUNC_1("End"), VAR_5->dynticks_nesting, 1, VAR_5->dynticks);
 FUNC_2(FUNC_0(VAR_0) && !VAR_4 && !FUNC_4(VAR_2));
 FUNC_3(VAR_5->dynticks_nesting, 1);
 FUNC_2(VAR_5->dynticks_nmi_nesting);
 FUNC_3(VAR_5->dynticks_nmi_nesting, VAR_1);
}
