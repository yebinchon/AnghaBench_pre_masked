
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_1(char VAR_3, char* VAR_4)
{
  int VAR_5 = VAR_1;
  while ((VAR_1 < VAR_2))
    {
      if (VAR_0[VAR_1] == VAR_3)
        {
    FUNC_0(VAR_4, &VAR_0[VAR_5], VAR_1 - VAR_5);
    VAR_4[VAR_1 - VAR_5] = 0;
          return 1;
        }
      VAR_1++;
    }
  return 0;
}
