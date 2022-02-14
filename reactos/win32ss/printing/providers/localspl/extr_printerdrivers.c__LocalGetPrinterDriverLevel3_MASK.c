
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int cVersion; int pDependentFiles; } ;
struct TYPE_7__ {TYPE_1__* pPrinter; } ;
struct TYPE_6__ {char* pwszPrinterDriver; } ;
typedef TYPE_2__* PLOCAL_PRINTER_HANDLE ;
typedef int* PDWORD ;
typedef TYPE_3__* PDRIVER_INFO_3W ;
typedef char* PCWSTR ;
typedef int PBYTE ;
typedef size_t DWORD ;
typedef int DRIVER_INFO_3W ;


 int FUNC_0 (char**,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (char**) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_4(PLOCAL_PRINTER_HANDLE VAR_2, PDRIVER_INFO_3W* VAR_3, PBYTE* VAR_4, PDWORD VAR_5)
{
    DWORD VAR_6;
    PCWSTR VAR_7[9];


    VAR_7[0] = VAR_2->pPrinter->pwszPrinterDriver;
    VAR_7[1] = VAR_1;
    VAR_7[2] = L"c:\\reactos\\system32\\localspl.dll";
    VAR_7[3] = L"c:\\reactos\\system32\\localspl.dll";
    VAR_7[4] = L"c:\\reactos\\system32\\printui.dll";
    VAR_7[5] = L"";
    VAR_7[6] = L"localspl.dll|printui.dll|";
    VAR_7[7] = ((void*)0);
    VAR_7[8] = ((void*)0);



    if (!VAR_3)
    {
        for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_7); ++VAR_6)
        {
            if (VAR_7[VAR_6])
            {
                *VAR_5 += (FUNC_3(VAR_7[VAR_6]) + 1) * sizeof(WCHAR);
            }
        }

        *VAR_5 += sizeof(DRIVER_INFO_3W);
        return;
    }

    (*VAR_3)->cVersion = 3;


    *VAR_4 = FUNC_0(VAR_7, (PBYTE)(*VAR_3), VAR_0, *VAR_4);
    FUNC_1((*VAR_3)->pDependentFiles);
    (*VAR_3)++;
}
