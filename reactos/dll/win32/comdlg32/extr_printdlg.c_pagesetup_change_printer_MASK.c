
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int pagesetup_data ;
struct TYPE_8__ {int pPortName; int pPrinterName; int pDriverPath; } ;
typedef TYPE_1__ PRINTER_INFO_2W ;
typedef int LPWSTR ;
typedef int * LPBYTE ;
typedef int HANDLE ;
typedef int DWORD ;
typedef TYPE_1__ DRIVER_INFO_3W ;
typedef TYPE_1__ DEVMODEW ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*,int *,int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int,int *,int,int*) ;
 int FUNC_4 (int ,int,int *,int,int*) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;
 int FUNC_8 (int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *,int ,int ,int ) ;

__attribute__((used)) static BOOL FUNC_12(LPWSTR VAR_3, pagesetup_data *VAR_4)
{
    HANDLE VAR_5;
    DWORD VAR_6;
    PRINTER_INFO_2W *VAR_7 = ((void*)0);
    DRIVER_INFO_3W *VAR_8 = ((void*)0);
    DEVMODEW *VAR_9 = ((void*)0);
    BOOL VAR_10 = VAR_1;

    if(!FUNC_8(VAR_3, &VAR_5, ((void*)0)))
    {
        FUNC_2("Can't open printer %s\n", FUNC_9(VAR_3));
        goto end;
    }

    FUNC_4(VAR_5, 2, ((void*)0), 0, &VAR_6);
    VAR_7 = FUNC_6(FUNC_5(), 0, VAR_6);
    FUNC_4(VAR_5, 2, (LPBYTE)VAR_7, VAR_6, &VAR_6);
    FUNC_3(VAR_5, ((void*)0), 3, ((void*)0), 0, &VAR_6);
    VAR_8 = FUNC_6(FUNC_5(), 0, VAR_6);
    if(!FUNC_3(VAR_5, ((void*)0), 3, (LPBYTE)VAR_8, VAR_6, &VAR_6))
    {
        FUNC_2("GetPrinterDriverA failed for %s, fix your config!\n", FUNC_9(VAR_7->pPrinterName));
        goto end;
    }
    FUNC_0(VAR_5);

    VAR_6 = FUNC_1(0, 0, VAR_3, ((void*)0), ((void*)0), 0);
    if(VAR_6 == -1)
    {
        FUNC_2("DocumentProperties fails on %s\n", FUNC_9(VAR_3));
        goto end;
    }

    VAR_9 = FUNC_6(FUNC_5(), 0, VAR_6);
    FUNC_1(0, 0, VAR_3, VAR_9, ((void*)0), VAR_0);

    FUNC_10(VAR_4, VAR_9);
    FUNC_11(VAR_4, VAR_8->pDriverPath, VAR_7->pPrinterName,
                           VAR_7->pPortName);

    VAR_10 = VAR_2;
end:
    FUNC_7(FUNC_5(), 0, VAR_9);
    FUNC_7(FUNC_5(), 0, VAR_7);
    FUNC_7(FUNC_5(), 0, VAR_8);
    return VAR_10;
}
