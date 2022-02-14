
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, int VAR_1)
{
 int VAR_2;
 char *VAR_3 = FUNC_3(VAR_0, '/');

 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_3(VAR_0, '\\');

 if (VAR_3 != ((void*)0))
  VAR_3++;
 else
  VAR_3 = VAR_0;

 for (VAR_2 = 0; VAR_2 < 10000; VAR_2++)
 {
  FILE *VAR_4;
  FUNC_2(VAR_3, "tmp%04d", VAR_2);
  VAR_4 = FUNC_1(VAR_0, "r");
  if (VAR_4 == ((void*)0))
   return 1;
  FUNC_0(VAR_4);
 }

 return 0;
}
