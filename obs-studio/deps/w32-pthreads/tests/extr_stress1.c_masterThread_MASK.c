
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int cv; int mx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

void *
FUNC_6 (void * VAR_10)
{
  int VAR_11 = (int)(size_t)VAR_10;

  VAR_8 = (int)(size_t)VAR_10;

  FUNC_2(&VAR_7);

  do
    {
      int VAR_12;

      FUNC_1(FUNC_4(&VAR_2.mx) == 0);
      VAR_2.value = VAR_8;
      FUNC_1(FUNC_5(&VAR_2.mx) == 0);
      if (VAR_5 % VAR_8 == 0)
 {
          if (VAR_9 > VAR_6)
     {
       VAR_1++;
     }
          else if (VAR_9 < VAR_6)
     {
       VAR_1--;
     }
   if (VAR_1 < -VAR_8 || VAR_1 > VAR_8)
     {
       VAR_8++;
     }
 }
      VAR_11 = (VAR_11 + 1 ) % (VAR_8 * 2);
      VAR_12 = (VAR_8 - VAR_1 + VAR_11) / 2;
      FUNC_0(VAR_12);
      FUNC_1(FUNC_3(&VAR_2.cv) == 0);
      VAR_5++;

      FUNC_2(&VAR_3);
      FUNC_2(&VAR_4);
    }
  while (!VAR_0);

  return ((void*)0);
}
