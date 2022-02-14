
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int psp ;
typedef int WORD ;
struct TYPE_7__ {scalar_t__ nPages; } ;
struct TYPE_6__ {int dwSize; int pfnDlgProc; int pszTemplate; int hInstance; int dwFlags; } ;
typedef TYPE_1__ PROPSHEETPAGE ;
typedef TYPE_2__ PROPSHEETHEADER ;
typedef int LPARAM ;
typedef int * HPROPSHEETPAGE ;
typedef int DLGPROC ;
typedef int BOOL ;


 int * FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_3 ;

BOOL
FUNC_4(PROPSHEETHEADER *VAR_4, WORD VAR_5, DLGPROC VAR_6)
{
    HPROPSHEETPAGE VAR_7;
    PROPSHEETPAGE VAR_8;

    if (VAR_4->nPages < VAR_1)
    {
        FUNC_3(&VAR_8, sizeof(VAR_8));
        VAR_8.dwSize = sizeof(VAR_8);
        VAR_8.dwFlags = VAR_2;
        VAR_8.hInstance = VAR_3;
        VAR_8.pszTemplate = FUNC_1(VAR_5);
        VAR_8.pfnDlgProc = VAR_6;

        VAR_7 = FUNC_0(&VAR_8);
        if (VAR_7 != ((void*)0))
        {
            return FUNC_2(VAR_7, (LPARAM)VAR_4);
        }
    }

    return VAR_0;
}
