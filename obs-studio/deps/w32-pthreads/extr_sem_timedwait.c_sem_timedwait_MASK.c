
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_4__ {int* resultPtr; TYPE_2__* sem; } ;
typedef TYPE_1__ sem_timedwait_cleanup_args_t ;
typedef TYPE_2__* sem_t ;
struct TYPE_5__ {int value; scalar_t__ leftToUnblock; int lock; int sem; } ;
typedef int DWORD ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct timespec const*) ;
 int VAR_3 ;

int
FUNC_8 (sem_t * VAR_4, const struct timespec *VAR_5)
{
  int VAR_6 = 0;
  sem_t VAR_7 = *VAR_4;

  FUNC_6();

  if (VAR_4 == ((void*)0))
    {
      VAR_6 = VAR_0;
    }
  else
    {
      DWORD VAR_8;

      if (VAR_5 == ((void*)0))
 {
   VAR_8 = VAR_1;
 }
      else
 {



   VAR_8 = FUNC_7 (VAR_5);
 }

      if ((VAR_6 = FUNC_4 (&VAR_7->lock)) == 0)
 {
   int VAR_9;



   if (*VAR_4 == ((void*)0))
     {
       (void) FUNC_5 (&VAR_7->lock);
       VAR_2 = VAR_0;
       return -1;
     }

   VAR_9 = --VAR_7->value;
   (void) FUNC_5 (&VAR_7->lock);

   if (VAR_9 < 0)
     {



       sem_timedwait_cleanup_args_t VAR_10;

       VAR_10.sem = VAR_7;
       VAR_10.resultPtr = &VAR_6;





              FUNC_3(VAR_3, (void *) &VAR_10);



       VAR_6 = FUNC_1 (VAR_7->sem, VAR_8);
       FUNC_2(VAR_6);
     }
 }

    }

  if (VAR_6 != 0)
    {

      VAR_2 = VAR_6;
      return -1;

    }

  return 0;

}
