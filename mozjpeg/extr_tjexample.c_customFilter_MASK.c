
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tjtransform ;
struct TYPE_4__ {int w; int h; } ;
typedef TYPE_1__ tjregion ;



int FUNC_0(short *VAR_0, tjregion VAR_1, tjregion VAR_2,
                 int VAR_3, int VAR_4,
                 tjtransform *VAR_5)
{
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_1.w * VAR_1.h; VAR_6++)
    VAR_0[VAR_6] = -VAR_0[VAR_6];

  return 0;
}
