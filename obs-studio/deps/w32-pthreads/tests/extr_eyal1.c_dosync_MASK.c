
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex_ended; int mutex_end; int mutex_start; int mutex_started; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
    {
      FUNC_0(FUNC_1 (&VAR_1[VAR_2].mutex_end) == 0);
      FUNC_0(FUNC_2 (&VAR_1[VAR_2].mutex_start) == 0);
      FUNC_0(FUNC_1 (&VAR_1[VAR_2].mutex_started) == 0);
      FUNC_0(FUNC_2 (&VAR_1[VAR_2].mutex_started) == 0);
    }




  for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
    {
      FUNC_0(FUNC_1 (&VAR_1[VAR_2].mutex_start) == 0);
      FUNC_0(FUNC_2 (&VAR_1[VAR_2].mutex_end) == 0);
      FUNC_0(FUNC_1 (&VAR_1[VAR_2].mutex_ended) == 0);
      FUNC_0(FUNC_2 (&VAR_1[VAR_2].mutex_ended) == 0);
    }
}
