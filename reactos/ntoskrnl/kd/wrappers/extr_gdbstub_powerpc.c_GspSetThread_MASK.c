
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int * PETHREAD ;
typedef int* PCHAR ;


 int * VAR_0 ;
 int FUNC_0 (int*,int **) ;
 char* VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;

VOID
FUNC_4(PCHAR VAR_3)
{
  PETHREAD VAR_4;
  PCHAR VAR_5 = &VAR_3[1];

  switch (VAR_3[0])
  {
    case 'c':
      if (FUNC_0(VAR_5, &VAR_4))
        {
          VAR_1[0] = 'O';
          VAR_1[1] = 'K';

          if (((void*)0) != VAR_2)
            {
              FUNC_1(VAR_2);
            }
          VAR_2 = VAR_4;
          if (((void*)0) != VAR_2)
            {
              FUNC_2(VAR_2);
            }
        }
      else
        {
          VAR_1[0] = 'E';
        }
      break;
    case 'g':
      if (FUNC_0(VAR_5, &VAR_4))
        {
          VAR_1[0] = 'O';
          VAR_1[1] = 'K';

          if (((void*)0) != VAR_0)
            {
              FUNC_1(VAR_0);
            }

          if (VAR_4 == FUNC_3())
            {
              VAR_0 = ((void*)0);
              FUNC_1(VAR_4);
            }
          else
            {
              VAR_0 = VAR_4;
            }
        }
      else
        {
          VAR_1[0] = 'E';
        }
      break;
    default:
      break;
  }
}
