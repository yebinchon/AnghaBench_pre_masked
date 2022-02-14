
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* y; void* x; } ;
typedef TYPE_1__ fz_point ;
struct TYPE_12__ {int y1; int y0; int x1; int x0; } ;
typedef TYPE_2__ fz_irect ;
struct TYPE_13__ {scalar_t__ active; int x; int y; scalar_t__ down; scalar_t__ right; int cursor; scalar_t__ hot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,int ,int ) ;
 TYPE_1__ FUNC_1 (TYPE_1__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (void*,void*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,scalar_t__,int,TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 scalar_t__ FUNC_8 (TYPE_2__) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_9(fz_irect VAR_8)
{
 static int VAR_9 = 0;
 static fz_point VAR_10[1000];
 static int VAR_11, VAR_12, VAR_13;
 int VAR_14;

 if (FUNC_8(VAR_8) && FUNC_8(VAR_6))
 {
  VAR_5.hot = VAR_4;
  if (!VAR_5.active || VAR_5.active == VAR_4)
   VAR_5.cursor = VAR_0;
  if (!VAR_5.active && VAR_5.down)
  {
   VAR_5.active = VAR_4;
   VAR_9 = 1;
   VAR_11 = 0;
   VAR_12 = VAR_2;
   VAR_13 = VAR_2;
  }
 }

 if (VAR_5.active == VAR_4 && VAR_9)
 {
  if (VAR_11 < (int)FUNC_6(VAR_10) && (VAR_5.x != VAR_12 || VAR_5.y != VAR_13))
  {
   VAR_10[VAR_11].x = FUNC_0(VAR_5.x, VAR_6.x0, VAR_6.x1);
   VAR_10[VAR_11].y = FUNC_0(VAR_5.y, VAR_6.y0, VAR_6.y1);
   ++VAR_11;
  }
  VAR_12 = VAR_5.x;
  VAR_13 = VAR_5.y;

  if (VAR_11 > 1)
  {
   FUNC_2(VAR_1);
   FUNC_3(1, 0, 0, 1);
   for (VAR_14 = 0; VAR_14 < VAR_11; ++VAR_14)
    FUNC_5(VAR_10[VAR_14].x, VAR_10[VAR_14].y);
   FUNC_4();
  }


  if (VAR_5.right)
  {
   VAR_9 = 0;
   VAR_11 = 0;
  }


  if (!VAR_5.down)
  {
   if (VAR_11 > 1)
   {
    for (VAR_14 = 0; VAR_14 < VAR_11; ++VAR_14)
     VAR_10[VAR_14] = FUNC_1(VAR_10[VAR_14], VAR_7);
    FUNC_7(VAR_3, VAR_4, VAR_11, VAR_10);
   }
   VAR_9 = 0;
   VAR_11 = 0;
  }
 }
}
