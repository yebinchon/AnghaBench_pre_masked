
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int top; int bottom; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_12__ {int hwndSelf; TYPE_7__ old3angle; scalar_t__ l; } ;
struct TYPE_11__ {int y; scalar_t__ x; } ;
struct TYPE_10__ {int bottom; int top; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int HWND ;
typedef int HDC ;
typedef scalar_t__ HBRUSH ;
typedef TYPE_3__ CCPRIV ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_7__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int ,TYPE_2__*,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_15(CCPRIV *VAR_6)
{
 HDC VAR_7;
 long VAR_8;
 int VAR_9 = FUNC_10(FUNC_5()) / 2;
 POINT VAR_10[3];
 int VAR_11;
 int VAR_12;
 RECT VAR_13;
 HBRUSH VAR_14;
 HWND VAR_15 = FUNC_6(VAR_6->hwndSelf, VAR_4);

 if (FUNC_9( FUNC_6(VAR_6->hwndSelf, VAR_3)))
 {
   FUNC_3(VAR_15, &VAR_13);
   VAR_11 = VAR_13.bottom;
   VAR_7 = FUNC_4(VAR_6->hwndSelf);
   VAR_10[0].y = VAR_13.top;
   VAR_10[0].x = VAR_13.right;
   FUNC_0(VAR_15, VAR_10);
   FUNC_13(VAR_6->hwndSelf, VAR_10);
   VAR_12 = VAR_10[0].y;

   VAR_8 = (long)VAR_11 * (long)VAR_6->l;
   VAR_10[0].x += 1;
   VAR_10[0].y = VAR_12 + VAR_11 - VAR_8 / (long)VAR_5;
   VAR_10[1].y = VAR_10[0].y + VAR_9;
   VAR_10[2].y = VAR_10[0].y - VAR_9;
   VAR_10[2].x = VAR_10[1].x = VAR_10[0].x + VAR_9;

   VAR_14 = (HBRUSH)FUNC_2( VAR_15, VAR_2);
   if (!VAR_14) VAR_14 = FUNC_8(VAR_1);
   FUNC_1(VAR_7, &VAR_6->old3angle, VAR_14);
   VAR_6->old3angle.left = VAR_10[0].x;
   VAR_6->old3angle.right = VAR_10[1].x + 1;
   VAR_6->old3angle.top = VAR_10[2].y - 1;
   VAR_6->old3angle.bottom= VAR_10[1].y + 1;

   VAR_14 = FUNC_14(VAR_7, FUNC_7(VAR_0));
   FUNC_11(VAR_7, VAR_10, 3);
   FUNC_14(VAR_7, VAR_14);

   FUNC_12(VAR_6->hwndSelf, VAR_7);
 }
}
