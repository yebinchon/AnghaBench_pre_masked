
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_4__ {int bottom; int left; int right; int top; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;
typedef int HDC ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,TYPE_1__*,char*,int,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*) ;

VOID FUNC_2(HWND VAR_4, HDC VAR_5, WCHAR *VAR_6, DWORD VAR_7)
{
 RECT VAR_8;
 FUNC_1(VAR_4, &VAR_8);
 VAR_8.bottom = 30;
 VAR_8.left = 10;
 VAR_8.right-=10;
 VAR_8.top = 10;

 FUNC_0(VAR_4, VAR_5, &VAR_8, L"DC_TEXT:", VAR_3, VAR_6, VAR_7);

 FUNC_0(VAR_4, VAR_5, &VAR_8,
  L"DC_TEXT | DC_ACTIVE:",
  VAR_3 | VAR_0,
  VAR_6, VAR_7);

 FUNC_0(VAR_4, VAR_5, &VAR_8,
  L"DC_TEXT | DC_ICON:" ,
  VAR_3 | VAR_1,
  VAR_6, VAR_7);

 FUNC_0(VAR_4, VAR_5, &VAR_8,
  L"DC_TEXT | DC_ACTIVE | DC_ICON:" ,
  VAR_3 | VAR_0 | VAR_1,
  VAR_6, VAR_7);

 FUNC_0(VAR_4, VAR_5, &VAR_8,
  L"DC_TEXT | DC_INBUTTON:" ,
  VAR_3 | VAR_2,
  VAR_6, VAR_7);

 FUNC_0(VAR_4, VAR_5, &VAR_8,
  L"DC_TEXT | DC_ACTIVE | DC_INBUTTON:" ,
  VAR_3 | VAR_0 | VAR_2,
  VAR_6, VAR_7);

 FUNC_0(VAR_4, VAR_5, &VAR_8,
  L"DC_TEXT | DC_ICON | DC_INBUTTON:" ,
  VAR_3 | VAR_1 | VAR_2,
  VAR_6, VAR_7);

 FUNC_0(VAR_4, VAR_5, &VAR_8,
  L"DC_TEXT | DC_ACTIVE | DC_ICON | DC_INBUTTON:" ,
  VAR_3 | VAR_0 | VAR_1 | VAR_2,
  VAR_6, VAR_7);

}
