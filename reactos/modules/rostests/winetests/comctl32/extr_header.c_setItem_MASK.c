
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cchTextMax; int pszText; int mask; } ;
typedef int LPSTR ;
typedef int LPARAM ;
typedef int LONG ;
typedef int HWND ;
typedef TYPE_1__ HDITEMA ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static LONG FUNC_4(HWND VAR_5, int VAR_6, LPSTR VAR_7, BOOL VAR_8)
{
    LONG VAR_9;
    HDITEMA VAR_10;
    VAR_10.mask = VAR_1;
    VAR_10.pszText = VAR_7;
    VAR_10.cchTextMax = 0;
    if (VAR_8)
    {
        FUNC_1(VAR_4, VAR_0, &VAR_10);
        FUNC_1(VAR_3, VAR_0, &VAR_10);
    }
    VAR_9 = FUNC_0(VAR_5, VAR_2, VAR_6, (LPARAM)&VAR_10);
    if (VAR_8)
        FUNC_3(FUNC_2(), "setItem(): not all expected notifies were received\n");
    return VAR_9;
}
