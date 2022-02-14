
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pPrinterName; int pDriverName; } ;
typedef TYPE_1__ PRINTER_INFO_2A ;
typedef int * LPBYTE ;
typedef int * HDC ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int * FUNC_0 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static HDC FUNC_5(void)
{
    PRINTER_INFO_2A *VAR_1;
    DWORD VAR_2, VAR_3=0;
    BOOL VAR_4;
    HDC VAR_5=((void*)0);

    FUNC_1(VAR_0, ((void*)0), 2, ((void*)0), 0, &VAR_2, &VAR_3);

    if (VAR_2 == 0)
        return ((void*)0);

    VAR_1 = FUNC_3(FUNC_2(), 0, VAR_2);

    VAR_4 = FUNC_1(VAR_0, ((void*)0), 2, (LPBYTE)VAR_1, VAR_2, &VAR_2, &VAR_3);

    if (VAR_4)
        VAR_5 = FUNC_0(VAR_1->pDriverName, VAR_1->pPrinterName, ((void*)0), ((void*)0));

    FUNC_4(FUNC_2(), 0, VAR_1);

    return VAR_5;
}
