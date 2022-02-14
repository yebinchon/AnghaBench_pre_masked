
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_3 (int ,void**) ;
 int VAR_2 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_3 ;

int
FUNC_8()
{
 int VAR_4 = 0;
 int VAR_5;
 pthread_t VAR_6[VAR_0+1];

 FUNC_0(FUNC_6(&VAR_2, VAR_1, 0) == 0);
 FUNC_0(FUNC_5(&VAR_2, &VAR_4) == 0);
 FUNC_0(VAR_4 == 0);

 for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++)
  {
   FUNC_0(FUNC_2(&VAR_6[VAR_5], ((void*)0), VAR_3, ((void*)0)) == 0);
   do {
     FUNC_4();
     FUNC_0(FUNC_5(&VAR_2, &VAR_4) == 0);
   } while (VAR_4 != -VAR_5);
   FUNC_0(-VAR_4 == VAR_5);
  }

 FUNC_0(FUNC_5(&VAR_2, &VAR_4) == 0);
 FUNC_0(-VAR_4 == VAR_0);
 FUNC_0(FUNC_1(VAR_6[50]) == 0);
   {
     void* VAR_7;
     FUNC_0(FUNC_3(VAR_6[50], &VAR_7) == 0);
   }
 FUNC_0(FUNC_5(&VAR_2, &VAR_4) == 0);
 FUNC_0(-VAR_4 == (VAR_0 - 1));

 for (VAR_5 = VAR_0 - 2; VAR_5 >= 0; VAR_5--)
  {
   FUNC_0(FUNC_7(&VAR_2) == 0);
   FUNC_0(FUNC_5(&VAR_2, &VAR_4) == 0);
   FUNC_0(-VAR_4 == VAR_5);
  }

 for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++)
   if (VAR_5 != 50)
     FUNC_0(FUNC_3(VAR_6[VAR_5], ((void*)0)) == 0);

  return 0;
}
