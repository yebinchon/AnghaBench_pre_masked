
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* old_mutex_t ;
struct TYPE_3__ {scalar_t__ mutex; int cs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int
FUNC_2(old_mutex_t *VAR_2)
{
  int VAR_3 = 0;
  old_mutex_t VAR_4;

  if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0))
    {
      return VAR_0;
    }

  VAR_4 = *VAR_2;

  if (VAR_4 != (old_mutex_t) VAR_1)
    {
      if (VAR_4->mutex == 0)
 {
   FUNC_0(&VAR_4->cs);
 }
      else
 {
   VAR_3 = (FUNC_1 (VAR_4->mutex) ? 0 : VAR_0);
 }
    }
  else
    {
      VAR_3 = VAR_0;
    }

  return(VAR_3);
}
