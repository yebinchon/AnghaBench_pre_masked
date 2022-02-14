
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cchTextMax; int pszText; int mask; } ;
typedef int LPSTR ;
typedef int LPARAM ;
typedef int LONG ;
typedef int HWND ;
typedef TYPE_1__ HDITEMA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static LONG FUNC_1(HWND VAR_3, int VAR_4, LPSTR VAR_5)
{
    HDITEMA VAR_6;
    VAR_6.mask = VAR_0;
    VAR_6.pszText = VAR_5;
    VAR_6.cchTextMax = VAR_2;
    return FUNC_0(VAR_3, VAR_1, VAR_4, (LPARAM)&VAR_6);
}
