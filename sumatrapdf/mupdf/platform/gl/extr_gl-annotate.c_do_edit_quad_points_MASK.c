
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {int y; int x; } ;
struct TYPE_19__ {int y; int x; } ;
struct TYPE_18__ {int y; int x; } ;
struct TYPE_17__ {int y; int x; } ;
struct TYPE_21__ {TYPE_4__ ll; TYPE_3__ lr; TYPE_2__ ur; TYPE_1__ ul; } ;
typedef TYPE_5__ fz_quad ;
struct TYPE_22__ {int member_1; int member_0; int y; int x; } ;
typedef TYPE_6__ fz_point ;
struct TYPE_23__ {scalar_t__ active; scalar_t__ down; scalar_t__ right; int y; int x; int cursor; scalar_t__ hot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,TYPE_6__,TYPE_6__,TYPE_5__*,int ) ;
 TYPE_6__ FUNC_1 (TYPE_6__,int ) ;
 TYPE_5__ FUNC_2 (TYPE_5__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_5__*) ;
 int VAR_6 ;
 int FUNC_11 (int ,scalar_t__,TYPE_5__) ;
 int FUNC_12 (int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 TYPE_7__ VAR_8 ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_14(void)
{
 static fz_point VAR_12 = { 0, 0 };
 static int VAR_13 = 0;
 fz_quad VAR_14[1000];
 int VAR_15, VAR_16;

 if (FUNC_13(VAR_9))
 {
  VAR_8.hot = VAR_7;
  if (!VAR_8.active || VAR_8.active == VAR_7)
   VAR_8.cursor = VAR_0;
  if (!VAR_8.active && VAR_8.down)
  {
   VAR_8.active = VAR_7;
   VAR_13 = 1;
   VAR_12.x = VAR_8.x;
   VAR_12.y = VAR_8.y;
  }
 }

 if (VAR_8.active == VAR_7 && VAR_13)
 {
  fz_point VAR_17 = { VAR_12.x, VAR_12.y };
  fz_point VAR_18 = { VAR_8.x, VAR_8.y };

  VAR_17 = FUNC_1(VAR_17, VAR_11);
  VAR_18 = FUNC_1(VAR_18, VAR_11);

  VAR_16 = FUNC_0(VAR_5, VAR_6, VAR_17, VAR_18, VAR_14, FUNC_10(VAR_14));

  FUNC_4(VAR_2, VAR_4);
  FUNC_7(VAR_1);

  FUNC_5(1, 1, 1, 1);
  FUNC_3(VAR_3);
  for (VAR_15 = 0; VAR_15 < VAR_16; ++VAR_15)
  {
   fz_quad VAR_19 = FUNC_2(VAR_14[VAR_15], VAR_10);
   FUNC_9(VAR_19.ul.x, VAR_19.ul.y);
   FUNC_9(VAR_19.ur.x, VAR_19.ur.y);
   FUNC_9(VAR_19.lr.x, VAR_19.lr.y);
   FUNC_9(VAR_19.ll.x, VAR_19.ll.y);
  }
  FUNC_8();

  FUNC_6(VAR_1);


  if (VAR_8.right)
   VAR_13 = 0;

  if (!VAR_8.down)
  {
   if (VAR_16 > 0)
   {
    FUNC_12(VAR_5, VAR_7);
    for (VAR_15 = 0; VAR_15 < VAR_16; ++VAR_15)
     FUNC_11(VAR_5, VAR_7, VAR_14[VAR_15]);
   }
   VAR_13 = 0;
  }
 }
}
