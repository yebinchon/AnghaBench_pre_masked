
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {float x0; float x1; float y0; float y1; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_16__ {scalar_t__ x0; int x1; scalar_t__ y0; int y1; } ;
typedef TYPE_2__ fz_irect ;
struct TYPE_17__ {scalar_t__ active; scalar_t__ x; scalar_t__ y; int down_x; int down_y; scalar_t__ down; scalar_t__ right; scalar_t__ hot; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (TYPE_2__,int) ;
 TYPE_1__ FUNC_1 (TYPE_1__,int ) ;
 int FUNC_2 (int ,scalar_t__,TYPE_1__) ;
 scalar_t__ FUNC_3 (TYPE_1__,TYPE_1__,int) ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_2__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(fz_irect VAR_4, fz_irect VAR_5, fz_rect *VAR_6)
{
 enum {
  ER_N=1, ER_E=2, ER_S=4, ER_W=8,
  ER_NONE = 0,
  ER_NW = ER_N|ER_W,
  ER_NE = ER_N|ER_E,
  ER_SW = ER_S|ER_W,
  ER_SE = ER_S|ER_E,
  ER_MOVE = ER_N|ER_E|ER_S|ER_W,
 };
 static fz_rect VAR_7;
 static int VAR_8 = ER_NONE;

 VAR_5 = FUNC_0(VAR_5, 5);
 if (FUNC_4(VAR_4) && FUNC_4(VAR_5))
 {
  VAR_2.hot = VAR_1;
  if (!VAR_2.active && VAR_2.down)
  {
   VAR_2.active = VAR_1;
   VAR_7 = *VAR_6;
   VAR_8 = ER_NONE;
   if (VAR_2.x <= VAR_5.x0 + 10) VAR_8 |= ER_W;
   if (VAR_2.x >= VAR_5.x1 - 10) VAR_8 |= ER_E;
   if (VAR_2.y <= VAR_5.y0 + 10) VAR_8 |= ER_N;
   if (VAR_2.y >= VAR_5.y1 - 10) VAR_8 |= ER_S;
   if (!VAR_8) VAR_8 = ER_MOVE;
  }
 }

 if (VAR_2.active == VAR_1 && VAR_8 != ER_NONE)
 {
  *VAR_6 = VAR_7;
  if (VAR_8 & ER_W) VAR_6->x0 += (VAR_2.x - VAR_2.down_x);
  if (VAR_8 & ER_E) VAR_6->x1 += (VAR_2.x - VAR_2.down_x);
  if (VAR_8 & ER_N) VAR_6->y0 += (VAR_2.y - VAR_2.down_y);
  if (VAR_8 & ER_S) VAR_6->y1 += (VAR_2.y - VAR_2.down_y);
  if (VAR_6->x1 < VAR_6->x0) { float VAR_9 = VAR_6->x1; VAR_6->x1 = VAR_6->x0; VAR_6->x0 = VAR_9; }
  if (VAR_6->y1 < VAR_6->y0) { float VAR_10 = VAR_6->y1; VAR_6->y1 = VAR_6->y0; VAR_6->y0 = VAR_10; }
  if (VAR_6->x1 < VAR_6->x0 + 10) VAR_6->x1 = VAR_6->x0 + 10;
  if (VAR_6->y1 < VAR_6->y0 + 10) VAR_6->y1 = VAR_6->y0 + 10;


  if (VAR_2.right)
   VAR_8 = ER_NONE;


  if (!VAR_2.down)
  {
   VAR_8 = ER_NONE;
   if (FUNC_3(VAR_7, *VAR_6, 1))
   {
    fz_rect VAR_11 = FUNC_1(*VAR_6, VAR_3);
    FUNC_2(VAR_0, VAR_1, VAR_11);
   }
  }
 }
}
