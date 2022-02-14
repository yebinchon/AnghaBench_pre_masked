
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ x0; scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; } ;
typedef TYPE_1__ fz_irect ;
struct TYPE_25__ {int page; int chapter; } ;
struct TYPE_24__ {scalar_t__ window_h; scalar_t__ hot; scalar_t__ active; int x; int y; scalar_t__ mod; int scroll_x; int lineheight; int scroll_y; scalar_t__ gridsize; TYPE_6__* focus; scalar_t__ middle; } ;
struct TYPE_23__ {scalar_t__ w; scalar_t__ h; } ;
struct TYPE_22__ {scalar_t__ end; scalar_t__ text; } ;
struct TYPE_21__ {int e; int f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 TYPE_9__ VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__) ;
 scalar_t__ VAR_21 ;
 TYPE_2__ VAR_22 ;
 scalar_t__ FUNC_5 (int ,TYPE_9__) ;
 int FUNC_6 (int,int ,scalar_t__) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_2__) ;
 int FUNC_9 (int ) ;
 TYPE_9__ FUNC_10 (int,int) ;
 int * FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,TYPE_2__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_7__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_16 () ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 TYPE_6__ VAR_32 ;
 int * VAR_33 ;
 TYPE_9__ VAR_34 ;
 int FUNC_17 (int ,int,int) ;
 scalar_t__ VAR_35 ;
 int * VAR_36 ;
 TYPE_8__ VAR_37 ;
 int FUNC_18 (TYPE_7__*,int,int) ;
 scalar_t__ FUNC_19 (TYPE_6__*,int ,int) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_22 (TYPE_1__) ;
 TYPE_1__ FUNC_23 (int ,int ) ;
 int FUNC_24 () ;
 int FUNC_25 (TYPE_1__) ;
 int FUNC_26 (int ,scalar_t__,int,int,int) ;
 int FUNC_27 () ;
 int VAR_38 ;
 int VAR_39 ;
 TYPE_2__ VAR_40 ;
 int VAR_41 ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;

__attribute__((used)) static void FUNC_30(void)
{
 static int VAR_42 = 0;
 static int VAR_43 = 0;
 static int VAR_44 = 0;
 static int VAR_45 = 0;
 fz_irect VAR_46;
 int VAR_47, VAR_48;

 VAR_36 = ((void*)0);

 FUNC_21(VAR_0, VAR_2, VAR_9, 0, 0);
 FUNC_25(VAR_46 = FUNC_23(0, 0));
 FUNC_15(VAR_46.x0, VAR_37.window_h-VAR_46.y1, VAR_46.x1-VAR_46.x0, VAR_46.y1-VAR_46.y0);
 FUNC_14(VAR_5);

 VAR_16 = VAR_46.x0;
 VAR_17 = VAR_46.y0;
 VAR_15 = VAR_46.x1 - VAR_46.x0;
 VAR_14 = VAR_46.y1 - VAR_46.y0;

 if (FUNC_22(VAR_46))
 {
  VAR_37.hot = VAR_21;
  if (!VAR_37.active && VAR_37.middle)
  {
   VAR_37.active = VAR_21;
   VAR_42 = VAR_27;
   VAR_43 = VAR_28;
   VAR_44 = VAR_37.x;
   VAR_45 = VAR_37.y;
  }
 }

 if (VAR_37.hot == VAR_21)
 {
  if (VAR_37.mod == 0)
  {
   VAR_27 -= VAR_37.scroll_x * VAR_37.lineheight * 3;
   VAR_28 -= VAR_37.scroll_y * VAR_37.lineheight * 3;
  }
  else if (VAR_37.mod == VAR_4)
  {
   if (VAR_37.scroll_y > 0) FUNC_17(FUNC_28(VAR_20), VAR_37.x, VAR_37.y);
   if (VAR_37.scroll_y < 0) FUNC_17(FUNC_29(VAR_20), VAR_37.x, VAR_37.y);
  }
 }

 FUNC_16();

 if (VAR_37.active == VAR_21)
 {
  VAR_27 = VAR_42 + VAR_44 - VAR_37.x;
  VAR_28 = VAR_43 + VAR_45 - VAR_37.y;
 }

 if (VAR_25.w <= VAR_15)
 {
  VAR_27 = 0;
  VAR_47 = VAR_16 + (VAR_15 - VAR_25.w) / 2;
 }
 else
 {
  VAR_27 = FUNC_6(VAR_27, 0, VAR_25.w - VAR_15);
  VAR_47 = VAR_16 - VAR_27;
 }

 if (VAR_25.h <= VAR_14)
 {
  VAR_28 = 0;
  VAR_48 = VAR_17 + (VAR_14 - VAR_25.h) / 2;
 }
 else
 {
  VAR_28 = FUNC_6(VAR_28, 0, VAR_25.h - VAR_14);
  VAR_48 = VAR_17 - VAR_28;
 }

 VAR_40 = VAR_22;
 VAR_40.e += VAR_47;
 VAR_40.f += VAR_48;
 VAR_41 = FUNC_8(VAR_40);
 VAR_39 = FUNC_12(VAR_24, VAR_40);
 VAR_38 = FUNC_9(VAR_39);

 FUNC_18(&VAR_25, VAR_47, VAR_48);

 if (VAR_29)
 {
  FUNC_21(VAR_10, VAR_13, VAR_9, 0, 0);
  FUNC_26(0, VAR_37.gridsize+8, 4, 4, 1);
  FUNC_21(VAR_6, VAR_8, VAR_12, 2, 0);
  FUNC_20("Searching chapter %d page %d...", VAR_34.chapter, VAR_34.page);
  FUNC_27();
 }
 else
 {
  if (VAR_26)
  {
   FUNC_0(VAR_46);
   FUNC_4(VAR_46);
  }
  FUNC_1(VAR_23);
  FUNC_2();

  if (FUNC_5(VAR_31, VAR_19) && VAR_30 > 0)
   FUNC_3();
 }

 if (VAR_35)
 {
  FUNC_21(VAR_10, VAR_13, VAR_9, 0, 0);
  FUNC_26(0, VAR_37.gridsize+8, 4, 4, 1);
  FUNC_21(VAR_6, VAR_8, VAR_12, 2, 0);
  FUNC_20("Search:");
  FUNC_21(VAR_0, VAR_13, VAR_3, 2, 0);
  if (FUNC_19(&VAR_32, 0, 1) == VAR_11)
  {
   VAR_35 = 0;
   VAR_34 = FUNC_10(-1, -1);
   if (VAR_33)
   {
    FUNC_7(VAR_18, VAR_33);
    VAR_33 = ((void*)0);
   }
   if (VAR_32.end > VAR_32.text)
   {
    VAR_33 = FUNC_11(VAR_18, VAR_32.text);
    VAR_29 = 1;
    VAR_34 = VAR_19;
   }
  }
  if (VAR_37.focus != &VAR_32)
   VAR_35 = 0;
  FUNC_27();
 }

 if (VAR_36)
 {
  FUNC_21(VAR_1, VAR_13, VAR_7, 0, 0);
  FUNC_26(0, VAR_37.gridsize, 4, 4, 1);
  FUNC_21(VAR_6, VAR_8, VAR_12, 2, 0);
  FUNC_20("%s", VAR_36);
  FUNC_27();
 }

 FUNC_24();
 FUNC_13(VAR_5);
}
