
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PRINTER_INFO_2A ;
typedef int * LPBYTE ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int,int *,scalar_t__,scalar_t__*) ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static PRINTER_INFO_2A * FUNC_6(HANDLE VAR_1)
{
    PRINTER_INFO_2A *VAR_2 = ((void*)0);
    DWORD VAR_3 = 0;
    BOOL VAR_4;

    VAR_4 = FUNC_1(VAR_1, 2, ((void*)0), 0, &VAR_3);
    if (!VAR_4 && (FUNC_0() == VAR_0)) {
        VAR_2 = FUNC_3(FUNC_2(), 0, VAR_3);
        VAR_4 = FUNC_1(VAR_1, 2, (LPBYTE)VAR_2, VAR_3, &VAR_3);
    }

    if (VAR_4)
        return VAR_2;

    FUNC_5("GetPrinterA failed with %u\n", FUNC_0());
    FUNC_4(FUNC_2(), 0, VAR_2);
    return ((void*)0);
}
