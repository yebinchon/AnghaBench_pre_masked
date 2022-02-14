
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int mask; char* pszText; int cx; int fmt; } ;
typedef TYPE_1__ LVCOLUMN ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 int FUNC_1 (int ) ;

VOID
FUNC_2(HWND VAR_4)
{
 LVCOLUMN VAR_5;

 VAR_5.mask = VAR_2|VAR_1|VAR_3;
 VAR_5.fmt = VAR_0;

 VAR_5.pszText = L"Process";
 VAR_5.cx = 90;
 (void)FUNC_0(VAR_4, 0, &VAR_5);

 VAR_5.pszText = L"ProcessID";
 VAR_5.cx = 90;
 (void)FUNC_0(VAR_4, 1, &VAR_5);
 FUNC_1(VAR_4);
}
