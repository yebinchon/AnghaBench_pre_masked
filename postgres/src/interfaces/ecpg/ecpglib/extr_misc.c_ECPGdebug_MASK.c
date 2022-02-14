
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;

void
FUNC_3(int VAR_4, FILE *VAR_5)
{




 if (VAR_4 > 100)
 {
  VAR_2 = 1;
  VAR_3 = VAR_4 - 100;
 }
 else
  VAR_3 = VAR_4;

 VAR_1 = VAR_5;

 FUNC_0("ECPGdebug: set to %d\n", VAR_3);




}
