
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int y1; scalar_t__ x0; int y0; } ;
typedef TYPE_1__ fz_irect ;
typedef enum side { ____Placeholder_side } side ;
struct TYPE_6__ {int* hot; int* active; int cursor; scalar_t__ down_x; scalar_t__ x; scalar_t__ down; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,scalar_t__,int ) ;
 TYPE_4__ VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_1__) ;
 TYPE_1__ FUNC_4 (int,int ) ;

void FUNC_5(int *VAR_9, int VAR_10, int VAR_11, enum side VAR_12)
{
 static int VAR_13 = 0;
 fz_irect VAR_14 = FUNC_4(4, 0);

 if (FUNC_3(VAR_14))
 {
  VAR_8.hot = VAR_9;
  if (!VAR_8.active && VAR_8.down)
  {
   VAR_8.active = VAR_9;
   VAR_13 = *VAR_9;
  }
 }

 if (VAR_8.active == VAR_9)
  *VAR_9 = FUNC_0(VAR_13 + (VAR_8.x - VAR_8.down_x), VAR_10, VAR_11);

 if (VAR_8.hot == VAR_9 || VAR_8.active == VAR_9)
  VAR_8.cursor = VAR_0;

 if (VAR_12 == VAR_1)
 {
  FUNC_1(VAR_6);
  FUNC_2(VAR_14.x0+0, VAR_14.y0, VAR_14.x0+2, VAR_14.y1);
  FUNC_1(VAR_5);
  FUNC_2(VAR_14.x0+2, VAR_14.y0, VAR_14.x0+3, VAR_14.y1);
  FUNC_1(VAR_7);
  FUNC_2(VAR_14.x0+3, VAR_14.y0, VAR_14.x0+4, VAR_14.y1);
 }
 if (VAR_12 == VAR_2)
 {
  FUNC_1(VAR_7);
  FUNC_2(VAR_14.x0, VAR_14.y0, VAR_14.x0+2, VAR_14.y1);
  FUNC_1(VAR_4);
  FUNC_2(VAR_14.x0+2, VAR_14.y0, VAR_14.x0+3, VAR_14.y1);
  FUNC_1(VAR_3);
  FUNC_2(VAR_14.x0+3, VAR_14.y0, VAR_14.x0+4, VAR_14.y1);
 }
}
