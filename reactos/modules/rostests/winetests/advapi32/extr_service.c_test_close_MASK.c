
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * SC_HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (int *,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    SC_HANDLE VAR_2;
    BOOL VAR_3;


    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_0(((void*)0));
    FUNC_4(!VAR_3, "Expected failure\n");
    FUNC_4(FUNC_1() == VAR_0, "Expected ERROR_INVALID_HANDLE, got %d\n", FUNC_1());




    VAR_2 = FUNC_2(((void*)0), ((void*)0), VAR_1);
    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_0(VAR_2);
    FUNC_4(VAR_3, "Expected success got error %u\n", FUNC_1());
}
