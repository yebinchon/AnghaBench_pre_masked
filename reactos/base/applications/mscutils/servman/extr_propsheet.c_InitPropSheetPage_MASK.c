
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef int VOID ;
struct TYPE_4__ {int dwSize; scalar_t__ lParam; int pfnDlgProc; int pszTemplate; int hInstance; int dwFlags; } ;
typedef scalar_t__ PSERVICEPROPSHEET ;
typedef TYPE_1__ PROPSHEETPAGE ;
typedef scalar_t__ LPARAM ;
typedef int DLGPROC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_1 ;

__attribute__((used)) static VOID
FUNC_2(PROPSHEETPAGE *VAR_2,
                  PSERVICEPROPSHEET VAR_3,
                  WORD VAR_4,
                  DLGPROC VAR_5)
{
    FUNC_1(VAR_2, sizeof(PROPSHEETPAGE));
    VAR_2->dwSize = sizeof(PROPSHEETPAGE);
    VAR_2->dwFlags = VAR_0;
    VAR_2->hInstance = VAR_1;
    VAR_2->pszTemplate = FUNC_0(VAR_4);
    VAR_2->pfnDlgProc = VAR_5;
    VAR_2->lParam = (LPARAM)VAR_3;
}
