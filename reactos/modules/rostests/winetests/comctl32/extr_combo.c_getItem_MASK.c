
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iItem; int cchTextMax; int pszText; int mask; } ;
typedef int LPARAM ;
typedef int LONG ;
typedef int HWND ;
typedef TYPE_1__ COMBOBOXEXITEMA ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static LONG FUNC_2(HWND VAR_3, int VAR_4, COMBOBOXEXITEMA *VAR_5) {
    FUNC_1(VAR_5, 0x00, sizeof(COMBOBOXEXITEMA));
    VAR_5->mask = VAR_0;
    VAR_5->pszText = VAR_2;
    VAR_5->iItem = VAR_4;
    VAR_5->cchTextMax = 100;
    return FUNC_0(VAR_3, VAR_1, 0, (LPARAM)VAR_5);
}
