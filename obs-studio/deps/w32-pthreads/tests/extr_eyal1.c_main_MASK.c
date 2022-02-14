
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int work; int stat; int mutex_ended; int mutex_end; int mutex_started; int mutex_start; int thread; } ;
typedef TYPE_1__ TC ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,int *,void* (*) (void*),void*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;

int
FUNC_13 (int VAR_7, char *VAR_8[])
{
  int VAR_9;

  FUNC_0(((void*)0) != (VAR_5 = (TC *) FUNC_1 (VAR_3, sizeof (*VAR_5))));




  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
    {
      VAR_5[VAR_9].id = VAR_9;

      FUNC_0(FUNC_9 (&VAR_5[VAR_9].mutex_start, ((void*)0)) == 0);
      FUNC_0(FUNC_9 (&VAR_5[VAR_9].mutex_started, ((void*)0)) == 0);
      FUNC_0(FUNC_9 (&VAR_5[VAR_9].mutex_end, ((void*)0)) == 0);
      FUNC_0(FUNC_9 (&VAR_5[VAR_9].mutex_ended, ((void*)0)) == 0);

      VAR_5[VAR_9].work = 0;

      FUNC_0(FUNC_10 (&VAR_5[VAR_9].mutex_start) == 0);
      FUNC_0((VAR_5[VAR_9].stat =
       FUNC_6 (&VAR_5[VAR_9].thread,
         ((void*)0),
                  (void *(*)(void *))VAR_4,
                (void *) &VAR_5[VAR_9])
       ) == 0);




      {
 int VAR_10 = 0;

 while (VAR_10 == 0)
   {
     VAR_10 = FUNC_11(&VAR_5[VAR_9].mutex_started);
     FUNC_0(VAR_10 == 0 || VAR_10 == VAR_0);

     if (VAR_10 == 0)
       {
  FUNC_0(FUNC_12 (&VAR_5[VAR_9].mutex_started) == 0);
       }
   }
      }
    }

  FUNC_4 ();




  VAR_6 = -2;
  FUNC_3();

  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
    {
      if (0 == VAR_5[VAR_9].stat)
 FUNC_0(FUNC_7 (VAR_5[VAR_9].thread, ((void*)0)) == 0);
    }




  FUNC_0(FUNC_8 (&VAR_1) == 0);
  FUNC_0(FUNC_8 (&VAR_2) == 0);




  FUNC_5 ("\n");




  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
    {
      FUNC_5 ("%2d ", VAR_9);
      if (0 == VAR_5[VAR_9].stat)
 FUNC_5 ("%10ld\n", VAR_5[VAR_9].work);
      else
 FUNC_5 ("failed %d\n", VAR_5[VAR_9].stat);

      FUNC_0(FUNC_12(&VAR_5[VAR_9].mutex_start) == 0);

      FUNC_0(FUNC_8 (&VAR_5[VAR_9].mutex_start) == 0);
      FUNC_0(FUNC_8 (&VAR_5[VAR_9].mutex_started) == 0);
      FUNC_0(FUNC_8 (&VAR_5[VAR_9].mutex_end) == 0);
      FUNC_0(FUNC_8 (&VAR_5[VAR_9].mutex_ended) == 0);
    }

  FUNC_2 (0);

  return (0);
}
