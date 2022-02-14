
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int left; int right; int top; int bottom; } ;
struct TYPE_12__ {int h; int s; TYPE_1__ oldcross; int hdcMem; int hwndSelf; } ;
struct TYPE_11__ {long x; long y; } ;
struct TYPE_10__ {long bottom; scalar_t__ right; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ POINT ;
typedef int HWND ;
typedef int HPEN ;
typedef int HDC ;
typedef TYPE_4__ CCPRIV ;


 int FUNC_0 (int ,int,int,int,int,int ,int,int,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (int ,int,int,TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int VAR_4 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void FUNC_15(CCPRIV *VAR_5)
{
 HWND VAR_6 = FUNC_7(VAR_5->hwndSelf, VAR_0);

 if (FUNC_8(VAR_6))
 {
   HDC VAR_7;
   int VAR_8 = FUNC_6() - 1;
   int VAR_9 = FUNC_6() * 3 / 4;
   RECT VAR_10;
   POINT VAR_11, VAR_12;
   HPEN VAR_13;
   int VAR_14, VAR_15;

   VAR_14 = VAR_5->h;
   VAR_15 = VAR_5->s;

   FUNC_4(VAR_6, &VAR_10);
   VAR_7 = FUNC_5(VAR_6);
   FUNC_13( VAR_7, FUNC_2(&VAR_10));

   VAR_11.x = ((long)VAR_10.right * (long)VAR_14) / (long)VAR_1;
   VAR_11.y = VAR_10.bottom - ((long)VAR_10.bottom * (long)VAR_15) / (long)VAR_2;
   if ( VAR_5->oldcross.left != VAR_5->oldcross.right )
     FUNC_0(VAR_7, VAR_5->oldcross.left, VAR_5->oldcross.top,
              VAR_5->oldcross.right - VAR_5->oldcross.left,
              VAR_5->oldcross.bottom - VAR_5->oldcross.top,
              VAR_5->hdcMem, VAR_5->oldcross.left, VAR_5->oldcross.top, VAR_4);
   VAR_5->oldcross.left = VAR_11.x - VAR_8 - 1;
   VAR_5->oldcross.right = VAR_11.x + VAR_8 + 1;
   VAR_5->oldcross.top = VAR_11.y - VAR_8 - 1;
   VAR_5->oldcross.bottom = VAR_11.y + VAR_8 + 1;

   VAR_13 = FUNC_1(VAR_3, 3, FUNC_11(0, 0, 0));
   VAR_13 = FUNC_14(VAR_7, VAR_13);
   FUNC_10(VAR_7, VAR_11.x - VAR_8, VAR_11.y, &VAR_12);
   FUNC_9(VAR_7, VAR_11.x - VAR_9, VAR_11.y);
   FUNC_10(VAR_7, VAR_11.x + VAR_9, VAR_11.y, &VAR_12);
   FUNC_9(VAR_7, VAR_11.x + VAR_8, VAR_11.y);
   FUNC_10(VAR_7, VAR_11.x, VAR_11.y - VAR_8, &VAR_12);
   FUNC_9(VAR_7, VAR_11.x, VAR_11.y - VAR_9);
   FUNC_10(VAR_7, VAR_11.x, VAR_11.y + VAR_9, &VAR_12);
   FUNC_9(VAR_7, VAR_11.x, VAR_11.y + VAR_8);
   FUNC_3( FUNC_14(VAR_7, VAR_13));

   FUNC_12(VAR_6, VAR_7);
 }
}
