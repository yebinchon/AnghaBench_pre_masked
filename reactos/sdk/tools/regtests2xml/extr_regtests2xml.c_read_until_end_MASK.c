
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int *,size_t) ;

__attribute__((used)) static int
FUNC_3(char* VAR_3)
{
  int VAR_4 = VAR_1;
  while ((VAR_1 < VAR_2))
    {
      if (FUNC_0(VAR_0[VAR_1]))
        {
    FUNC_2(VAR_3, &VAR_0[VAR_4], VAR_1 - VAR_4);
    VAR_3[VAR_1 - VAR_4] = 0;
    FUNC_1();
          return 1;
        }
      VAR_1++;
    }
  return 0;
}
