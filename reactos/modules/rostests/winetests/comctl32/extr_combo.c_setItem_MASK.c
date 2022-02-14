
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cbexItem ;
struct TYPE_3__ {int iItem; char* pszText; scalar_t__ cchTextMax; int mask; } ;
typedef int LPARAM ;
typedef int LONG ;
typedef int HWND ;
typedef TYPE_1__ COMBOBOXEXITEMA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static LONG FUNC_2(HWND VAR_2, int VAR_3, const char *VAR_4) {
    COMBOBOXEXITEMA VAR_5;
    FUNC_1(&VAR_5, 0x00, sizeof(VAR_5));
    VAR_5.mask = VAR_0;
    VAR_5.iItem = VAR_3;
    VAR_5.pszText = (char*)VAR_4;
    VAR_5.cchTextMax = 0;
    return FUNC_0(VAR_2, VAR_1, 0, (LPARAM)&VAR_5);
}
