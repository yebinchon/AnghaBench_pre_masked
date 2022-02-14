
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_16__ {int y; int x; } ;
typedef TYPE_2__ fz_point ;
typedef int fz_irect ;
struct TYPE_17__ {scalar_t__ active; scalar_t__ down; scalar_t__ right; scalar_t__ down_y; scalar_t__ y; scalar_t__ down_x; scalar_t__ x; scalar_t__ hot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__ FUNC_1 (TYPE_1__,float) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 float FUNC_3 (int ) ;
 void* FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ,int ) ;
 TYPE_2__ FUNC_6 (TYPE_2__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ,int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 float FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,scalar_t__,TYPE_2__*,TYPE_2__*) ;
 int FUNC_13 (int ,scalar_t__,TYPE_2__,TYPE_2__) ;
 scalar_t__ FUNC_14 (TYPE_2__,TYPE_2__,int) ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_15 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_16(fz_irect VAR_6, fz_irect VAR_7, fz_rect *VAR_8)
{
 enum { EL_NONE, EL_A=1, EL_B=2, EL_MOVE=EL_A|EL_B };
 static fz_point VAR_9, VAR_10;
 static int VAR_11 = EL_NONE;
 fz_irect VAR_12, VAR_13;
 fz_point VAR_14, VAR_15;
 float VAR_16;

 VAR_7 = FUNC_0(VAR_7, 5);
 if (FUNC_15(VAR_6) && FUNC_15(VAR_7))
 {
  VAR_3.hot = VAR_2;
  if (!VAR_3.active && VAR_3.down)
  {
   VAR_3.active = VAR_2;
   FUNC_12(VAR_1, VAR_2, &VAR_9, &VAR_10);
   VAR_9 = FUNC_6(VAR_9, VAR_4);
   VAR_10 = FUNC_6(VAR_10, VAR_4);
   VAR_12 = FUNC_2(VAR_9.x, VAR_9.y, VAR_9.x, VAR_9.y);
   VAR_13 = FUNC_2(VAR_10.x, VAR_10.y, VAR_10.x, VAR_10.y);
   VAR_12 = FUNC_0(VAR_12, 10);
   VAR_13 = FUNC_0(VAR_13, 10);
   VAR_11 = EL_NONE;
   if (FUNC_15(VAR_12)) VAR_11 |= EL_A;
   if (FUNC_15(VAR_13)) VAR_11 |= EL_B;
   if (!VAR_11) VAR_11 = EL_MOVE;
  }
 }

 if (VAR_3.active == VAR_2 && VAR_11 != 0)
 {
  VAR_14 = VAR_9;
  VAR_15 = VAR_10;
  if (VAR_11 & EL_A) { VAR_14.x += (VAR_3.x - VAR_3.down_x); VAR_14.y += (VAR_3.y - VAR_3.down_y); }
  if (VAR_11 & EL_B) { VAR_15.x += (VAR_3.x - VAR_3.down_x); VAR_15.y += (VAR_3.y - VAR_3.down_y); }

  FUNC_7(VAR_0);
  FUNC_8(1, 0, 0, 1);
  FUNC_10(VAR_14.x, VAR_14.y);
  FUNC_10(VAR_15.x, VAR_15.y);
  FUNC_9();

  VAR_8->x0 = FUNC_5(VAR_14.x, VAR_15.x);
  VAR_8->y0 = FUNC_5(VAR_14.y, VAR_15.y);
  VAR_8->x1 = FUNC_4(VAR_14.x, VAR_15.x);
  VAR_8->y1 = FUNC_4(VAR_14.y, VAR_15.y);
  VAR_16 = FUNC_11(VAR_1, VAR_2);
  *VAR_8 = FUNC_1(*VAR_8, FUNC_3(VAR_4) * VAR_16);


  if (VAR_3.right)
   VAR_11 = EL_NONE;


  if (!VAR_3.down)
  {
   VAR_11 = EL_NONE;
   if (FUNC_14(VAR_9, VAR_14, 1) || FUNC_14(VAR_10, VAR_15, 1))
   {
    VAR_14 = FUNC_6(VAR_14, VAR_5);
    VAR_15 = FUNC_6(VAR_15, VAR_5);
    FUNC_13(VAR_1, VAR_2, VAR_14, VAR_15);
   }
  }
 }
}
