
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int y; int x; } ;
typedef TYPE_1__ fz_point ;
typedef int fz_irect ;
struct TYPE_9__ {scalar_t__ active; int y; int x; scalar_t__ down; scalar_t__ right; int cursor; scalar_t__ hot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (TYPE_1__,int ) ;
 TYPE_1__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__,TYPE_1__) ;
 TYPE_1__ FUNC_8 (int ,scalar_t__,int) ;
 int FUNC_9 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_11(fz_irect VAR_9, int VAR_10)
{
 static int VAR_11 = 0;
 fz_point VAR_12, VAR_13;

 if (FUNC_10(VAR_9) && FUNC_10(VAR_6))
 {
  VAR_5.hot = VAR_4;
  if (!VAR_5.active || VAR_5.active == VAR_4)
   VAR_5.cursor = VAR_0;
  if (!VAR_5.active && VAR_5.down)
  {
   VAR_5.active = VAR_4;
   VAR_11 = 1;
  }
 }

 if (VAR_5.active == VAR_4 && VAR_11)
 {
  int VAR_14 = FUNC_9(VAR_3, VAR_4);
  if (VAR_14 > 0)
  {
   VAR_13 = FUNC_8(VAR_3, VAR_4, VAR_14-1);
   VAR_13 = FUNC_0(VAR_13, VAR_7);
   if (VAR_10)
   {
    VAR_12 = FUNC_8(VAR_3, VAR_4, 0);
    VAR_12 = FUNC_0(VAR_12, VAR_7);
   }
   FUNC_2(VAR_1);
   FUNC_3(1, 0, 0, 1);
   FUNC_6(VAR_13.x, VAR_13.y);
   FUNC_6(VAR_5.x, VAR_5.y);
   if (VAR_10)
    FUNC_6(VAR_12.x, VAR_12.y);
   FUNC_4();
  }

  FUNC_3(1, 0, 0, 1);
  FUNC_5(4);
  FUNC_2(VAR_2);
  FUNC_6(VAR_5.x, VAR_5.y);
  FUNC_4();


  if (VAR_5.right)
   VAR_11 = 0;


  if (!VAR_5.down)
  {
   fz_point VAR_15 = FUNC_1(VAR_5.x, VAR_5.y, VAR_8);
   FUNC_7(VAR_3, VAR_4, VAR_15);
   VAR_11 = 0;
  }
 }
}
