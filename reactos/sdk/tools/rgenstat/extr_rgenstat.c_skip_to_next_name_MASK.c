
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,char*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_3)
{
  while ((VAR_1 < VAR_2))
    {
      if (VAR_0[VAR_1] == '(')
        {
          return FUNC_0(VAR_1 - 1, VAR_3);
        }
      VAR_1++;
    }
  return 0;
}
