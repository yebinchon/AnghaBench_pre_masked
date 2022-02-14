
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPLONG ;
typedef scalar_t__ LONG ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

void *
FUNC_4(void * VAR_5)
{
  int VAR_6;
  int VAR_7 = 0;

  while ((LONG)(size_t)VAR_5 >= (LONG)FUNC_0((LPLONG)&VAR_4))
    {
      VAR_6 = FUNC_3(&VAR_1);

      if (VAR_6 == VAR_0)
        {
          VAR_7++;
        }
      else if (VAR_6 != 0)
        {
          FUNC_2("Barrier failed: result = %s\n", VAR_2[VAR_6]);
          FUNC_1(VAR_3);
          return ((void*)0);
        }
    }

  return (void*)(size_t)VAR_7;
}
