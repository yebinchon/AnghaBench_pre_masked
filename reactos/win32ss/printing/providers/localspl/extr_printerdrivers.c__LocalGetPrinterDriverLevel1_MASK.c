
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {TYPE_1__* pPrinter; } ;
struct TYPE_4__ {int pwszPrinterDriver; } ;
typedef TYPE_2__* PLOCAL_PRINTER_HANDLE ;
typedef int* PDWORD ;
typedef scalar_t__ PDRIVER_INFO_1W ;
typedef int PCWSTR ;
typedef int PBYTE ;
typedef size_t DWORD ;
typedef int DRIVER_INFO_1W ;


 int FUNC_0 (int *,int ,int ,int ) ;
 size_t FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(PLOCAL_PRINTER_HANDLE VAR_1, PDRIVER_INFO_1W* VAR_2, PBYTE* VAR_3, PDWORD VAR_4)
{
    DWORD VAR_5;
    PCWSTR VAR_6[1];


    VAR_6[0] = VAR_1->pPrinter->pwszPrinterDriver;


    if (!VAR_2)
    {
        for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_6); ++VAR_5)
        {
            *VAR_4 += (FUNC_2(VAR_6[VAR_5]) + 1) * sizeof(WCHAR);
        }

        *VAR_4 += sizeof(DRIVER_INFO_1W);
        return;
    }



    *VAR_3 = FUNC_0(VAR_6, (PBYTE)(*VAR_2), VAR_0, *VAR_3);
    (*VAR_2)++;
}
