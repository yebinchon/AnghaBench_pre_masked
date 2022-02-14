
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* old_mutex_t ;
struct TYPE_6__ {scalar_t__ mutex; int cs; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (TYPE_1__**) ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;

int
FUNC_6(old_mutex_t *VAR_4)
{
  int VAR_5 = 0;
  old_mutex_t VAR_6;

  if (VAR_4 == ((void*)0)
      || *VAR_4 == ((void*)0))
    {
      return VAR_0;
    }

  if (*VAR_4 != (old_mutex_t) VAR_1)
    {
      VAR_6 = *VAR_4;

      if ((VAR_5 = FUNC_4(&VAR_6)) == 0)
        {
          *VAR_4 = ((void*)0);

          (void) FUNC_5(&VAR_6);

          if (VAR_6->mutex == 0)
            {
              FUNC_1(&VAR_6->cs);
            }
          else
            {
              VAR_5 = (FUNC_0 (VAR_6->mutex) ? 0 : VAR_0);
            }

          if (VAR_5 == 0)
            {
              VAR_6->mutex = 0;
              FUNC_3(VAR_6);
            }
          else
            {
              *VAR_4 = VAR_6;
            }
        }
    }
  else
    {
      VAR_5 = VAR_0;
    }

  if (VAR_3 != ((void*)0))
    {
      (void) FUNC_2(VAR_2);
      VAR_2 = 0;
    }

  return(VAR_5);
}
