
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int cVersion; } ;
struct TYPE_7__ {TYPE_1__* pPrinter; } ;
struct TYPE_6__ {char* pwszPrinterDriver; } ;
typedef TYPE_2__* PLOCAL_PRINTER_HANDLE ;
typedef int* PDWORD ;
typedef TYPE_3__* PDRIVER_INFO_2W ;
typedef char* PCWSTR ;
typedef int PBYTE ;
typedef size_t DWORD ;
typedef int DRIVER_INFO_2W ;


 int FUNC_0 (char**,int ,int ,int ) ;
 size_t FUNC_1 (char**) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 char* VAR_1 ;

__attribute__((used)) static void
FUNC_3(PLOCAL_PRINTER_HANDLE VAR_2, PDRIVER_INFO_2W* VAR_3, PBYTE* VAR_4, PDWORD VAR_5)
{
    DWORD VAR_6;
    PCWSTR VAR_7[5];


    VAR_7[0] = VAR_2->pPrinter->pwszPrinterDriver;
    VAR_7[1] = VAR_1;
    VAR_7[2] = L"c:\\reactos\\system32\\localspl.dll";
    VAR_7[3] = L"c:\\reactos\\system32\\localspl.dll";
    VAR_7[4] = L"c:\\reactos\\system32\\localspl.dll";


    if (!VAR_3)
    {
        for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_7); ++VAR_6)
        {
            *VAR_5 += (FUNC_2(VAR_7[VAR_6]) + 1) * sizeof(WCHAR);
        }

        *VAR_5 += sizeof(DRIVER_INFO_2W);
        return;
    }

    (*VAR_3)->cVersion = 3;


    *VAR_4 = FUNC_0(VAR_7, (PBYTE)(*VAR_3), VAR_0, *VAR_4);
    (*VAR_3)++;
}
