
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seed; int changed; scalar_t__ thread_num; int reads; int updates; } ;
typedef TYPE_1__ thread_t ;
struct TYPE_4__ {scalar_t__ data; int lock; int updates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char) ;
 int FUNC_6 (int*) ;
 int VAR_3 ;

void *FUNC_7 (void *VAR_4)
{
  thread_t *VAR_5 = (thread_t*)VAR_4;
  int VAR_6;
  int VAR_7 = 0;
  int VAR_8 = VAR_5->seed;
  int VAR_9 = 1 + FUNC_6 (&VAR_8) % 71;

  VAR_5->changed = 0;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    {
      if (VAR_6 % (VAR_1 / 10) == 0)
        {
          FUNC_5('.');
          FUNC_1(VAR_3);
        }





      if ((VAR_6 % VAR_9) == 0)
        {
          FUNC_0(FUNC_4 (&VAR_2[VAR_7].lock) == 0);
          VAR_2[VAR_7].data = VAR_5->thread_num;
          VAR_2[VAR_7].updates++;
          VAR_5->updates++;
   VAR_9 = 1 + FUNC_6 (&VAR_8) % 71;
          FUNC_0(FUNC_3 (&VAR_2[VAR_7].lock) == 0);
        } else {





          FUNC_0(FUNC_2 (&VAR_2[VAR_7].lock) == 0);

          VAR_5->reads++;

          if (VAR_2[VAR_7].data != VAR_5->thread_num)
            {
              VAR_5->changed++;
       VAR_9 = 1 + VAR_5->changed % 71;
            }

          FUNC_0(FUNC_3 (&VAR_2[VAR_7].lock) == 0);
        }

      VAR_7 = (VAR_7 + 1) % VAR_0;

    }

  return ((void*)0);
}
