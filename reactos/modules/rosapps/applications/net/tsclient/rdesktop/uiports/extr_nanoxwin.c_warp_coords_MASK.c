
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int x; int y; int width; int height; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_0(int * VAR_1, int * VAR_2, int * VAR_3, int * VAR_4,
                       int * VAR_5, int * VAR_6)
{
  int VAR_7;
  int VAR_8;

  if (VAR_0.x > *VAR_1)
  {
    VAR_7 = VAR_0.x - *VAR_1;
  }
  else
  {
    VAR_7 = 0;
  }
  if (VAR_0.y > *VAR_2)
  {
    VAR_8 = VAR_0.y - *VAR_2;
  }
  else
  {
    VAR_8 = 0;
  }
  if (*VAR_1 + *VAR_3 > VAR_0.x + VAR_0.width)
  {
    *VAR_3 = (*VAR_3 - ((*VAR_1 + *VAR_3) - (VAR_0.x + VAR_0.width)));
  }
  if (*VAR_2 + *VAR_4 > VAR_0.y + VAR_0.height)
  {
    *VAR_4 = (*VAR_4 - ((*VAR_2 + *VAR_4) - (VAR_0.y + VAR_0.height)));
  }
  *VAR_3 = *VAR_3 - VAR_7;
  *VAR_4 = *VAR_4 - VAR_8;
  if (*VAR_3 <= 0)
  {
    return 0;
  }
  if (*VAR_4 <= 0)
  {
    return 0;
  }
  *VAR_1 = *VAR_1 + VAR_7;
  *VAR_2 = *VAR_2 + VAR_8;
  if (VAR_5 != 0)
  {
    *VAR_5 = *VAR_5 + VAR_7;
  }
  if (VAR_6 != 0)
  {
    *VAR_6 = *VAR_6 + VAR_8;
  }
  return 1;
}
