
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int mask; char* pszText; int cx; int fmt; } ;
typedef TYPE_1__ LVCOLUMN ;
typedef int HWND ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,TYPE_1__*) ;

VOID
FUNC_2(HWND VAR_4)
{
 LVCOLUMN VAR_5;

 VAR_5.mask = VAR_2|VAR_1|VAR_3;
 VAR_5.fmt = VAR_0;

 VAR_5.pszText = L"Number";
 VAR_5.cx = 50;
 (void)FUNC_1(VAR_4, 0, &VAR_5);

 VAR_5.pszText = L"Index";
 VAR_5.cx = 45;
 (void)FUNC_1(VAR_4, 1, &VAR_5);

 VAR_5.pszText = L"Handle";
 VAR_5.cx = 90;
 (void)FUNC_1(VAR_4, 2, &VAR_5);

 VAR_5.pszText = L"Type";
 VAR_5.cx = 80;
 (void)FUNC_1(VAR_4, 3, &VAR_5);

 VAR_5.pszText = L"Process";
 VAR_5.cx = 80;
 (void)FUNC_1(VAR_4, 4, &VAR_5);

 VAR_5.pszText = L"KernelData";
 VAR_5.cx = 80;
 (void)FUNC_1(VAR_4, 5, &VAR_5);

 VAR_5.pszText = L"UserData";
 VAR_5.cx = 80;
 (void)FUNC_1(VAR_4, 6, &VAR_5);

 VAR_5.pszText = L"Type";
 VAR_5.cx = 80;
 (void)FUNC_1(VAR_4, 7, &VAR_5);

 FUNC_0(VAR_4, 0);
}
