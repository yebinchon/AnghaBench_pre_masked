
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_2__ {int mx; int value; int cv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct timespec*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void *
FUNC_6 (void * VAR_8)
{
  struct timespec VAR_9;

  FUNC_2(&VAR_6);

  do
    {
      FUNC_0(FUNC_4(&VAR_2.mx) == 0);
      if (FUNC_3(&VAR_2.cv,
     &VAR_2.mx,
     FUNC_1(&VAR_9, VAR_2.value)) == VAR_0)
 {
   VAR_7++;
 }
      else
 {
   VAR_5++;
 }
      FUNC_0(FUNC_5(&VAR_2.mx) == 0);

      FUNC_2(&VAR_3);
      FUNC_2(&VAR_4);
    }
  while (!VAR_1);

  return ((void*)0);
}
