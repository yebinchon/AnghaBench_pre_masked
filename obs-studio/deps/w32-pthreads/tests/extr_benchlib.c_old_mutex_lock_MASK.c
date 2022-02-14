
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* old_mutex_t ;
struct TYPE_3__ {scalar_t__ mutex; int cs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

int
FUNC_2(old_mutex_t *VAR_4)
{
  int VAR_5 = 0;
  old_mutex_t VAR_6;

  if (VAR_4 == ((void*)0) || *VAR_4 == ((void*)0))
    {
      return VAR_0;
    }

  if (*VAR_4 == (old_mutex_t) VAR_2)
    {



      VAR_5 = VAR_0;
    }

  VAR_6 = *VAR_4;

  if (VAR_5 == 0)
    {
      if (VAR_6->mutex == 0)
 {
   FUNC_0(&VAR_6->cs);
 }
      else
 {
   VAR_5 = (FUNC_1(VAR_6->mutex, VAR_1)
      == VAR_3)
     ? 0
     : VAR_0;
 }
    }

  return(VAR_5);
}
