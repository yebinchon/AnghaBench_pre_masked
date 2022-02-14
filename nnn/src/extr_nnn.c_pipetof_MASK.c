
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,scalar_t__,int *) ;
 int FUNC_1 (int *,char*,char*) ;
 char* VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(char *VAR_2, FILE *VAR_3)
{
 FILE *VAR_4 = FUNC_3(VAR_2, "r");

 if (VAR_4) {
  while (FUNC_0(VAR_1, VAR_0 - 1, VAR_4))
   FUNC_1(VAR_3, "%s", VAR_1);
  FUNC_2(VAR_4);
 }
}
