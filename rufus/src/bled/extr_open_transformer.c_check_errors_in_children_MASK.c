
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;

void FUNC_2(int VAR_1)
{
 int VAR_2;

 if (!VAR_1) {

  if (FUNC_0(&VAR_2) < 0)

   return;
  goto check_status;
 }


 for (;;) {
  if (FUNC_1(&VAR_2) < 0)


   return;
 check_status:


  if (VAR_2 == 0)

   continue;



  VAR_0 = 1;
 }
}
