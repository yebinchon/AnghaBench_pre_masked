
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

void *
FUNC_6(void * VAR_7)
{
  int VAR_8 = FUNC_3(&VAR_1);

  FUNC_0(FUNC_4(&VAR_3) == 0);

  if (VAR_8 == VAR_0)
    {
      VAR_5++;
    }
  else if (0 == VAR_8)
    {
      VAR_4++;
    }
  else
    {
      FUNC_2("Barrier wait failed: error = %s\n", VAR_2[VAR_8]);
      FUNC_1(VAR_6);
      return ((void*)0);
    }
  FUNC_0(FUNC_5(&VAR_3) == 0);

  return ((void*)0);
}
