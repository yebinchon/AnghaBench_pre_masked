
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 long FUNC_5 (int ,int,long) ;

bool FUNC_6(signed long VAR_4)
{
 signed long VAR_5;





 if (FUNC_1(&VAR_1))
  return 0;
 VAR_0 = 1;
 FUNC_2(&VAR_1);

 VAR_5 = FUNC_5(VAR_3,
   !FUNC_0(&VAR_2), VAR_4);
 if (VAR_5 <= 0) {
  FUNC_3();
  return 0;
 }
 FUNC_4("OOM killer disabled.\n");

 return 1;
}
