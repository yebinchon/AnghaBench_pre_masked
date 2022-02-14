
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int PLONG ;
typedef int * PETHREAD ;
typedef int * PCHAR ;
typedef scalar_t__ HANDLE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int **) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,char*) ;

BOOLEAN
FUNC_4(PCHAR VAR_2,
  PETHREAD *VAR_3)
{
  PETHREAD VAR_4 = ((void*)0);

  if (FUNC_3 (VAR_2, "-1") == 0)
    {

      VAR_4 = ((void*)0);
    }
  else
    {
      ULONG VAR_5;
      HANDLE VAR_6;
      PCHAR VAR_7 = &VAR_2[0];

      FUNC_0(&VAR_7, (PLONG) &VAR_5);
      VAR_6 = (HANDLE)VAR_5;

      if (!FUNC_1(FUNC_2(VAR_6, &VAR_4)))
        {
          *VAR_3 = ((void*)0);
          return VAR_0;
        }
    }
  *VAR_3 = VAR_4;
  return VAR_1;
}
