
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int SC_HANDLE ;
typedef int LPWSTR ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ,int ) ;

BOOL
FUNC_6(
    SC_HANDLE VAR_2,
    LPWSTR VAR_3,
    ULONG VAR_4)
{
    SC_HANDLE VAR_5;
    BOOL VAR_6;

    VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1);
    if (!VAR_5)
    {
        FUNC_5("Failed to open service %S %x\n", VAR_3, FUNC_1());
        return VAR_0;
    }

    if (!FUNC_3(VAR_5, 0, ((void*)0)))
    {
        FUNC_5("Failed to start service %S %x\n", VAR_3, FUNC_1());
        FUNC_0(VAR_5);
        return VAR_0;
    }

    VAR_6 = FUNC_4(VAR_5, VAR_4);

    FUNC_0(VAR_5);
    return VAR_6;
}
