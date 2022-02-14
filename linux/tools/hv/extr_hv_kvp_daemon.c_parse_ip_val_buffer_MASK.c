
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, int *VAR_1,
    char *VAR_2, int VAR_3)
{
 char *VAR_4;
 char *VAR_5;






 VAR_5 = VAR_0 + *VAR_1;

 VAR_4 = FUNC_0(VAR_5, ';');
 if (VAR_4)
  *VAR_4 = 0;
 else
  VAR_4 = VAR_5 + FUNC_2(VAR_5);

 if (FUNC_2(VAR_5) != 0) {
  int VAR_6 = 0;



  while (VAR_5[VAR_6] == ' ')
   VAR_6++;

  if ((VAR_4 - VAR_5) <= VAR_3) {
   FUNC_1(VAR_2, (VAR_5 + VAR_6));
   *VAR_1 += (VAR_4 - VAR_5) + 1;
   return 1;
  }
 }
 return 0;
}
