
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_23__ {int y; int x; } ;
struct TYPE_22__ {int y; int x; } ;
struct TYPE_21__ {int y; int x; } ;
struct TYPE_20__ {int y; int x; } ;
struct TYPE_24__ {TYPE_4__ ll; TYPE_3__ lr; TYPE_2__ ur; TYPE_1__ ul; } ;
typedef TYPE_5__ fz_quad ;
struct TYPE_25__ {int member_1; int member_0; int y; int x; } ;
typedef TYPE_6__ fz_point ;
struct TYPE_26__ {scalar_t__ mod; scalar_t__ right; int y; int x; TYPE_6__* active; TYPE_6__* hot; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (int ,int ,TYPE_6__,TYPE_6__,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,TYPE_6__,TYPE_6__,TYPE_5__*,int ) ;
 int FUNC_3 (int ,int ,TYPE_6__*,TYPE_6__*,int ) ;
 TYPE_6__ FUNC_4 (TYPE_6__,int ) ;
 TYPE_5__ FUNC_5 (TYPE_5__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (TYPE_5__*) ;
 int VAR_9 ;
 TYPE_7__ VAR_10 ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_16(void)
{
 static fz_point VAR_14 = { 0, 0 };
 fz_quad VAR_15[1000];
 int VAR_16, VAR_17;

 if (FUNC_14(VAR_11))
 {
  VAR_10.hot = &VAR_14;
  if (!VAR_10.active && VAR_10.right)
  {
   VAR_10.active = &VAR_14;
   VAR_14.x = VAR_10.x;
   VAR_14.y = VAR_10.y;
  }
 }

 if (VAR_10.active == &VAR_14)
 {
  fz_point VAR_18 = { VAR_14.x, VAR_14.y };
  fz_point VAR_19 = { VAR_10.x, VAR_10.y };

  VAR_18 = FUNC_4(VAR_18, VAR_13);
  VAR_19 = FUNC_4(VAR_19, VAR_13);

  if (VAR_10.mod == VAR_2)
   FUNC_3(VAR_8, VAR_9, &VAR_18, &VAR_19, VAR_1);
  else if (VAR_10.mod == VAR_2 + VAR_3)
   FUNC_3(VAR_8, VAR_9, &VAR_18, &VAR_19, VAR_0);

  VAR_17 = FUNC_2(VAR_8, VAR_9, VAR_18, VAR_19, VAR_15, FUNC_13(VAR_15));

  FUNC_7(VAR_5, VAR_7);
  FUNC_10(VAR_4);

  FUNC_8(1, 1, 1, 1);
  FUNC_6(VAR_6);
  for (VAR_16 = 0; VAR_16 < VAR_17; ++VAR_16)
  {
   fz_quad VAR_20 = FUNC_5(VAR_15[VAR_16], VAR_12);
   FUNC_12(VAR_20.ul.x, VAR_20.ul.y);
   FUNC_12(VAR_20.ur.x, VAR_20.ur.y);
   FUNC_12(VAR_20.lr.x, VAR_20.lr.y);
   FUNC_12(VAR_20.ll.x, VAR_20.ll.y);
  }
  FUNC_11();

  FUNC_9(VAR_4);

  if (!VAR_10.right)
  {
   char *VAR_21;



   VAR_21 = FUNC_0(VAR_8, VAR_9, VAR_18, VAR_19, 0);

   FUNC_15(VAR_21);
   FUNC_1(VAR_8, VAR_21);
  }
 }
}
