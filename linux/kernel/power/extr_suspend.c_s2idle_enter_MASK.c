
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(void)
{
 FUNC_9(FUNC_0("machine_suspend"), VAR_0, 1);

 FUNC_6(&VAR_4);
 if (FUNC_4())
  goto out;

 VAR_5 = VAR_1;
 FUNC_7(&VAR_4);

 FUNC_3();
 FUNC_2();


 FUNC_10();

 FUNC_8(VAR_6,
      VAR_5 == VAR_3);

 FUNC_1();
 FUNC_5();

 FUNC_6(&VAR_4);

 out:
 VAR_5 = VAR_2;
 FUNC_7(&VAR_4);

 FUNC_9(FUNC_0("machine_suspend"), VAR_0, 0);
}
