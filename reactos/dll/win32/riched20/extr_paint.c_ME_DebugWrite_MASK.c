
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ POINT ;
typedef int LPCWSTR ;
typedef int HGDIOBJ ;
typedef int HDC ;
typedef int COLORREF ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(HDC VAR_3, const POINT *VAR_4, LPCWSTR VAR_5) {
  int VAR_6 = FUNC_3(VAR_3, VAR_1|VAR_2);
  HGDIOBJ VAR_7 = FUNC_2(VAR_3, FUNC_0(VAR_0));
  COLORREF VAR_8 = FUNC_4(VAR_3, FUNC_1(128,128,128));
  FUNC_5(VAR_3, VAR_4->x, VAR_4->y, VAR_5, FUNC_6(VAR_5));
  FUNC_2(VAR_3, VAR_7);
  FUNC_3(VAR_3, VAR_6);
  FUNC_4(VAR_3, VAR_8);
}
