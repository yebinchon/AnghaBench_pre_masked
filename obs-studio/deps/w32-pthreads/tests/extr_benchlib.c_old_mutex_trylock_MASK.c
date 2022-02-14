
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* old_mutex_t ;
struct TYPE_3__ {scalar_t__ mutex; int cs; } ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

int
FUNC_3(old_mutex_t *VAR_6)
{
  int VAR_7 = 0;
  old_mutex_t VAR_8;

  if (VAR_6 == ((void*)0) || *VAR_6 == ((void*)0))
    {
      return VAR_1;
    }

  if (*VAR_6 == (old_mutex_t) VAR_2)
    {



      VAR_7 = VAR_1;
    }

  VAR_8 = *VAR_6;

  if (VAR_7 == 0)
    {
      if (VAR_8->mutex == 0)
 {
   if (&FUNC_1 == ((void*)0))
          {
            VAR_7 = 0;
          }
        else if (FUNC_1)(&VAR_8->cs) != VAR_3)
     {
       VAR_7 = VAR_0;
     }
 }
      else
 {
   DWORD VAR_9;

   VAR_9 = FUNC_0 (VAR_8->mutex, 0);

   if (VAR_9 != VAR_4)
     {
       VAR_7 = ((VAR_9 == VAR_5)
   ? VAR_0
   : VAR_1);
     }
 }
    }

  return(VAR_7);
}
