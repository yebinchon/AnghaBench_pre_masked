
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hdcMem; int hbmMem; int hwndSelf; } ;
struct TYPE_6__ {int right; int bottom; int left; int top; } ;
typedef TYPE_1__ RECT ;
typedef int LPCWSTR ;
typedef int HWND ;
typedef int HDC ;
typedef int HCURSOR ;
typedef int HBRUSH ;
typedef TYPE_2__ CCPRIV ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_13(CCPRIV *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 HWND VAR_11 = FUNC_8(VAR_4->hwndSelf, VAR_0);
 HBRUSH VAR_12;
 HDC VAR_13 ;
 RECT VAR_14, VAR_15;
 HCURSOR VAR_16 = FUNC_12( FUNC_9(0, (LPCWSTR)VAR_1) );

 FUNC_6(VAR_11, &VAR_15);
 VAR_13 = FUNC_7(VAR_11);
 VAR_4->hdcMem = FUNC_2(VAR_13);
 VAR_4->hbmMem = FUNC_1(VAR_13, VAR_15.right, VAR_15.bottom);
 FUNC_11(VAR_4->hdcMem, VAR_4->hbmMem);

 VAR_7 = VAR_15.right / VAR_2;
 VAR_8 = VAR_15.bottom / VAR_3+1;
 VAR_6 = 239 / VAR_2;
 VAR_5 = 240 / VAR_3;
 for (VAR_14.left = VAR_9 = 0; VAR_9 < 239 + VAR_6; VAR_9 += VAR_6)
 {
  VAR_14.right = VAR_14.left + VAR_7;
  VAR_14.bottom = VAR_15.bottom;
  for(VAR_10 = 0; VAR_10 < 240 + VAR_5; VAR_10 += VAR_5)
  {
   VAR_14.top = VAR_14.bottom - VAR_8;
   VAR_12 = FUNC_3(FUNC_0(VAR_9, VAR_10, 120));
   FUNC_5(VAR_4->hdcMem, &VAR_14, VAR_12);
   FUNC_4(VAR_12);
   VAR_14.bottom = VAR_14.top;
  }
  VAR_14.left = VAR_14.right;
 }
 FUNC_10(VAR_11, VAR_13);
 FUNC_12(VAR_16);
}
