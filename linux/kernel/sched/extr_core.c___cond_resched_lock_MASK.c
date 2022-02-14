
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(spinlock_t *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = 0;

 FUNC_1(VAR_1);

 if (FUNC_5(VAR_1) || VAR_2) {
  FUNC_6(VAR_1);
  if (VAR_2)
   FUNC_2();
  else
   FUNC_0();
  VAR_3 = 1;
  FUNC_4(VAR_1);
 }
 return VAR_3;
}
