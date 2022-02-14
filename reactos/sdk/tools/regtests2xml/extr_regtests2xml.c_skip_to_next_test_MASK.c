
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4()
{
  static char VAR_3[] = "ROSREGTEST:";
  int VAR_4 = 0;

  while ((VAR_1 < VAR_2) && (!VAR_4))
    {
   FUNC_2();
      VAR_4 = 1;
   int VAR_5 = 0;
      while (1)
     {
    if (VAR_5 >= FUNC_3(VAR_3))
            {
              break;
            }
    if (FUNC_0(VAR_0[VAR_1]))
      {
              VAR_4 = 0;
     break;
      }
    if (VAR_0[VAR_1] != VAR_3[VAR_5])
            {
              VAR_4 = 0;
     break;
            }
          VAR_1++;
          VAR_5++;
     }
   if (!VAR_4)
        {
          FUNC_1();
        }
    }
  return VAR_4;
}
