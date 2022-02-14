
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    BOOL VAR_2, VAR_3;
    if(!&FUNC_4)
    {
        FUNC_5("CheckRemoteDebuggerPresent is not available\n");
        return;
    }
    VAR_3 = VAR_1;
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_4(FUNC_0(),&VAR_3);
    FUNC_3(VAR_2 , "expected CheckRemoteDebuggerPresent to succeed\n");
    FUNC_3(0xdeadbeef == FUNC_1(),
       "expected error to be unchanged, got %d/%x\n",FUNC_1(), FUNC_1());

    VAR_3 = VAR_1;
    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_4(((void*)0),&VAR_3);
    FUNC_3(!VAR_2 , "expected CheckRemoteDebuggerPresent to fail\n");
    FUNC_3(VAR_3, "expected parameter to be unchanged\n");
    FUNC_3(VAR_0 == FUNC_1(),
       "expected error ERROR_INVALID_PARAMETER, got %d/%x\n",FUNC_1(), FUNC_1());

    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_4(FUNC_0(),((void*)0));
    FUNC_3(!VAR_2 , "expected CheckRemoteDebuggerPresent to fail\n");
    FUNC_3(VAR_0 == FUNC_1(),
       "expected error ERROR_INVALID_PARAMETER, got %d/%x\n",FUNC_1(), FUNC_1());
}
