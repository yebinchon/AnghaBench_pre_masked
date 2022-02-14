
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int compName ;
typedef int * SC_HANDLE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef int CHAR ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int,char*,scalar_t__) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11( void)
{
    CHAR VAR_6[VAR_5 + 1];
    CHAR VAR_7[VAR_5 + 3];
    DWORD VAR_8 = sizeof(VAR_6) ;
    BOOL VAR_9;
    LONG VAR_10;
    HKEY VAR_11;
    SC_HANDLE VAR_12;

    FUNC_6(0xdeadbeef);
    VAR_9 = FUNC_1(VAR_6, &VAR_8);
    FUNC_9( VAR_9, "GetComputerName failed err = %d\n", FUNC_2());
    if( !VAR_9) return;

    FUNC_7(VAR_7, "\\\\");
    FUNC_8(VAR_7+2, VAR_6, VAR_5 + 1);

    VAR_10 = FUNC_5( VAR_6, VAR_4, &VAR_11);
    FUNC_9( !VAR_10 ||
        VAR_10 == VAR_2 ||
        VAR_10 == VAR_0,
        "RegConnectRegistryA failed err = %d\n", VAR_10);
    if( !VAR_10) FUNC_4( VAR_11);

    VAR_10 = FUNC_5( VAR_7, VAR_4, &VAR_11);
    FUNC_9( !VAR_10 ||
        VAR_10 == VAR_2 ||
        VAR_10 == VAR_0,
        "RegConnectRegistryA failed err = %d\n", VAR_10);
    if( !VAR_10) FUNC_4( VAR_11);

    FUNC_6(0xdeadbeef);
    VAR_12 = FUNC_3( VAR_6, ((void*)0), VAR_3);
    if (FUNC_2() == VAR_1)
    {
        FUNC_10("OpenSCManagerA is not implemented\n");
        return;
    }

    FUNC_9( VAR_12 != ((void*)0), "OpenSCManagerA failed err = %d\n", FUNC_2());
    FUNC_0( VAR_12);

    FUNC_6(0xdeadbeef);
    VAR_12 = FUNC_3( VAR_7, ((void*)0), VAR_3);
    FUNC_9( VAR_12 != ((void*)0), "OpenSCManagerA failed err = %d\n", FUNC_2());
    FUNC_0( VAR_12);

}
