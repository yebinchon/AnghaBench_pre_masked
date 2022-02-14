
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
typedef int VOID ;
struct TYPE_5__ {int top; int bottom; } ;
typedef TYPE_1__* LPRECT ;
typedef int HWND ;
typedef int HDC ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,char*,scalar_t__,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;

VOID FUNC_7(HWND VAR_1,
 HDC VAR_2,
 LPRECT VAR_3,
 WCHAR *VAR_4,
 DWORD VAR_5,
 WCHAR *VAR_6,
 DWORD VAR_7)
{
 WCHAR VAR_8[512];

 FUNC_4(VAR_8, VAR_6);
 if(FUNC_5(VAR_8))FUNC_3(VAR_8, L" | ");
 FUNC_3(VAR_8, VAR_4);

 FUNC_1( VAR_2, VAR_8, FUNC_5(VAR_8), VAR_3, VAR_0 );

 VAR_3->top+=20;
 VAR_3->bottom+=20;

 if(!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5 | VAR_7))
 {
  FUNC_6("PAINT: DrawCaption failed: %d\n", (int)FUNC_2());
 }

 VAR_3->top+=30;
 VAR_3->bottom+=30;
}
