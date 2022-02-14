
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cchTextMax; int pszText; void* mask; } ;
struct TYPE_4__ {int pszText; void* mask; } ;
typedef int LPWSTR ;
typedef int LPSTR ;
typedef int LPARAM ;
typedef int LONG ;
typedef int HWND ;
typedef TYPE_1__ HDITEMW ;
typedef TYPE_2__ HDITEMA ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static LONG FUNC_4(HWND VAR_5, int VAR_6, LPSTR VAR_7, LPWSTR VAR_8)
{
    LONG VAR_9;
    HDITEMA VAR_10;
    HDITEMW VAR_11;
    VAR_10.mask = VAR_0;
    VAR_10.pszText = VAR_7;
    VAR_10.cchTextMax = 0;

    VAR_11.mask = VAR_0;
    VAR_11.pszText = VAR_8;

    FUNC_1(VAR_3, VAR_4, (HDITEMA*)&VAR_11);
    FUNC_1(VAR_2, VAR_4, (HDITEMA*)&VAR_11);
    VAR_9 = FUNC_0(VAR_5, VAR_1, VAR_6, (LPARAM)&VAR_10);
    FUNC_3(FUNC_2(), "setItemUnicodeNotify(): not all expected notifies were received\n");
    return VAR_9;
}
