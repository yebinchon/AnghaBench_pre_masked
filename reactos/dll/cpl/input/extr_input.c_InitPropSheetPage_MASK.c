
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef int VOID ;
struct TYPE_4__ {int dwSize; int pfnDlgProc; int pszTemplate; int hInstance; int dwFlags; } ;
typedef TYPE_1__ PROPSHEETPAGEW ;
typedef int DLGPROC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_1 ;

__attribute__((used)) static VOID
FUNC_2(PROPSHEETPAGEW *VAR_2, WORD VAR_3, DLGPROC VAR_4)
{
    FUNC_1(VAR_2, sizeof(*VAR_2));

    VAR_2->dwSize = sizeof(*VAR_2);
    VAR_2->dwFlags = VAR_0;
    VAR_2->hInstance = VAR_1;
    VAR_2->pszTemplate = FUNC_0(VAR_3);
    VAR_2->pfnDlgProc = VAR_4;
}
