
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
struct TYPE_13__ {int rgbResult; int * lpCustColors; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ POINT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int COLORREF ;
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

__attribute__((used)) static BOOL FUNC_7(CCPRIV *VAR_4, int VAR_5, int VAR_6, LPARAM VAR_7)
{
 HWND VAR_8;
 POINT VAR_9;
 RECT VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 COLORREF *VAR_15 = VAR_4->lpcc->lpCustColors;

 FUNC_1(VAR_7, &VAR_9);
 FUNC_2(VAR_4->hwndSelf, &VAR_9);
 VAR_8 = FUNC_3(VAR_4->hwndSelf, VAR_2);
 FUNC_4(VAR_8, &VAR_10);
 if (FUNC_5(&VAR_10, VAR_9))
 {
  VAR_11 = (VAR_10.right - VAR_10.left) / VAR_6;
  VAR_12 = (VAR_10.bottom - VAR_10.top) / VAR_5;
  FUNC_6(VAR_8, &VAR_9);

  if (VAR_9.x % VAR_11 < (VAR_11 - VAR_0) && VAR_9.y % VAR_12 < (VAR_12 - VAR_0))
  {
   VAR_13 = VAR_9.x / VAR_11;
   VAR_14 = VAR_9.y / VAR_12;
   VAR_4->lpcc->rgbResult = VAR_15[VAR_13 + (VAR_6 * VAR_14) ];
   FUNC_0(VAR_4, VAR_8, VAR_13, VAR_14, VAR_5, VAR_6);
   return VAR_3;
  }
 }
 return VAR_1;
}
