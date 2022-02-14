
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* lpcc; int hwndSelf; } ;
struct TYPE_15__ {int x; int y; } ;
struct TYPE_14__ {int right; int left; int bottom; int top; } ;
struct TYPE_13__ {int rgbResult; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ POINT ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_4__ CCPRIV ;
typedef int BOOL ;


 int FUNC_0 (TYPE_4__*,int ,int,int,int,int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_3__) ;
 int FUNC_6 (int ,TYPE_3__*) ;
 int VAR_3 ;
 int ** VAR_4 ;

__attribute__((used)) static BOOL FUNC_7(CCPRIV *VAR_5, int VAR_6, int VAR_7, LPARAM VAR_8)
{
 HWND VAR_9;
 POINT VAR_10;
 RECT VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;

 FUNC_1(VAR_8, &VAR_10);
 FUNC_2(VAR_5->hwndSelf, &VAR_10);
 VAR_9 = FUNC_3(VAR_5->hwndSelf, VAR_2);
 FUNC_4(VAR_9, &VAR_11);
 if (FUNC_5(&VAR_11, VAR_10))
 {
  VAR_12 = (VAR_11.right - VAR_11.left) / VAR_7;
  VAR_13 = (VAR_11.bottom - VAR_11.top) / VAR_6;
  FUNC_6(VAR_9, &VAR_10);

  if (VAR_10.x % VAR_12 < ( VAR_12 - VAR_0) && VAR_10.y % VAR_13 < ( VAR_13 - VAR_0))
  {
   VAR_14 = VAR_10.x / VAR_12;
   VAR_15 = VAR_10.y / VAR_13;
   VAR_5->lpcc->rgbResult = VAR_4[VAR_15][VAR_14];
   FUNC_0(VAR_5, VAR_9, VAR_14, VAR_15, VAR_6, VAR_7);
   return VAR_3;
  }
 }
 return VAR_1;
}
