
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1()
{
  while ((VAR_1 < VAR_2))
    {
      if (VAR_0[VAR_1] == '*')
        {
          if ((VAR_1 + 1 < VAR_2))
            {
              if (VAR_0[VAR_1 + 1] == '/')
                {
                  FUNC_0();
                  return;
                }
            }
        }
      VAR_1++;
    }
}
