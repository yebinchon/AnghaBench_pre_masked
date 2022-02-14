
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sem_t ;
struct TYPE_3__ {long value; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2 (sem_t * VAR_2, int *VAR_3)
{
  if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
    {
      VAR_1 = VAR_0;
      return -1;
    }
  else
    {
      long VAR_4;
      register sem_t VAR_5 = *VAR_2;
      int VAR_6 = 0;

      if ((VAR_6 = FUNC_0(&VAR_5->lock)) == 0)
        {


   if (*VAR_2 == ((void*)0))
     {
       (void) FUNC_1 (&VAR_5->lock);
       VAR_1 = VAR_0;
       return -1;
     }

          VAR_4 = VAR_5->value;
          (void) FUNC_1(&VAR_5->lock);
          *VAR_3 = VAR_4;
        }

      return VAR_6;
    }

}
