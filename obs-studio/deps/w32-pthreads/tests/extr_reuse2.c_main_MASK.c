
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int x; int * p; } ;
typedef TYPE_1__ pthread_t ;
typedef int pthread_attr_t ;
typedef int LPLONG ;


 int FUNC_0 (int ,long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,unsigned int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,int ,int *) ;

int
FUNC_7()
{
  pthread_t VAR_4[VAR_0];
  pthread_attr_t VAR_5;
  int VAR_6;
  unsigned int VAR_7 = 0,
        VAR_8 = 0,
        VAR_9 = 0,
        VAR_10 = VAR_0;

  FUNC_2(FUNC_4(&VAR_5) == 0);
  FUNC_2(FUNC_5(&VAR_5, VAR_1) == 0);

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {
      while(FUNC_6(&VAR_4[VAR_6], &VAR_5, VAR_3, ((void*)0)) != 0)
        FUNC_1(1);
    }

  while (VAR_0 > FUNC_0((LPLONG)&VAR_2, 0L))
    FUNC_1(100);

  FUNC_1(100);





  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {
      if (VAR_4[VAR_6].p != ((void*)0))
        {
          unsigned int VAR_11, VAR_12;

          VAR_12 = VAR_4[VAR_6].x;

          for (VAR_11 = VAR_6+1; VAR_11 < VAR_0; VAR_11++)
            if (VAR_4[VAR_6].p == VAR_4[VAR_11].p)
              {
  if (VAR_4[VAR_6].x == VAR_4[VAR_11].x)
    VAR_7++;
                if (VAR_12 < VAR_4[VAR_11].x)
                  VAR_12 = VAR_4[VAR_11].x;
                VAR_4[VAR_11].p = ((void*)0);
              }

          if (VAR_10 > VAR_12)
            VAR_10 = VAR_12;

          if (VAR_9 < VAR_12)
            VAR_9 = VAR_12;
        }
    }

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    if (VAR_4[VAR_6].p != ((void*)0))
      VAR_8++;





  FUNC_3("For %d total threads:\n", VAR_0);
  FUNC_3("Non-unique IDs = %d\n", VAR_7);
  FUNC_3("Reuse maximum  = %d\n", VAR_9 + 1);
  FUNC_3("Reuse minimum  = %d\n", VAR_10 + 1);
  FUNC_3("Total handles  = %d\n", VAR_8);

  return 0;
}
