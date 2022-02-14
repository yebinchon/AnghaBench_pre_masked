
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;

int
FUNC_11()
{
  int VAR_9;
  int VAR_10 = 0;
  pthread_t VAR_11[VAR_0];

  FUNC_0(FUNC_4(&VAR_5, ((void*)0), VAR_0/2) == 0);

  for (VAR_9 = 1; VAR_9 < VAR_0/2; VAR_9++)
    {
      VAR_1[VAR_9] = VAR_8[VAR_9] = VAR_7[VAR_9] = 0;
      FUNC_0(FUNC_6(&VAR_11[VAR_9], ((void*)0), VAR_4, (void *)&VAR_1[VAR_9]) == 0);
    }





  FUNC_0(FUNC_8(&VAR_3, VAR_2) == 0);

  (void) FUNC_5(&VAR_5);




  VAR_1[0] = 0;
  FUNC_10((void *) &VAR_1[0]);





  for (VAR_9 = VAR_0/2; VAR_9 < VAR_0; VAR_9++)
    {
      VAR_1[VAR_9] = VAR_8[VAR_9] = VAR_7[VAR_9] = 0;
      FUNC_0(FUNC_6(&VAR_11[VAR_9], ((void*)0), VAR_4, (void *)&VAR_1[VAR_9]) == 0);
    }




  for (VAR_9 = 1; VAR_9 < VAR_0; VAR_9++)
    {
 FUNC_0(FUNC_7(VAR_11[VAR_9], ((void*)0)) == 0);
    }

  FUNC_0(FUNC_9(VAR_3) == 0);

  FUNC_0(FUNC_3(&VAR_5) == 0);

  for (VAR_9 = 1; VAR_9 < VAR_0; VAR_9++)
    {







 if (VAR_1[VAR_9] != 2)
   {
     VAR_10++;
     FUNC_2(VAR_6, "Thread %d key, set = %d, destroyed = %d\n",
   VAR_9, VAR_8[VAR_9], VAR_7[VAR_9]);
   }
    }

  FUNC_1(VAR_6);

  return (VAR_10);
}
