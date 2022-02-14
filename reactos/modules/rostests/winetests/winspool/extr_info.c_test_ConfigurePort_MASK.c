
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int,char*,scalar_t__,scalar_t__) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int FUNC_6 (char*,int *,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_7(void)
{
    DWORD VAR_9;


    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_0(((void*)0), 0, ((void*)0));
    if (FUNC_4(VAR_9, FUNC_1())) return;

    FUNC_5( !VAR_9 && ((FUNC_1() == VAR_2) ||
                 (FUNC_1() == VAR_0)),
        "returned %d with %d (expected '0' with ERROR_NOT_SUPPORTED or "
        "ERROR_INVALID_PARAMETER)\n", VAR_9, FUNC_1());

    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_0(((void*)0), 0, VAR_4);

    if (FUNC_3(VAR_9, FUNC_1())) return;


    FUNC_5( !VAR_9 && ((FUNC_1() == VAR_1) ||
                 (FUNC_1() == VAR_0)),
        "returned %d with %d (expected '0' with ERROR_NOT_SUPPORTED or "
        "ERROR_INVALID_PARAMETER)\n", VAR_9, FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_0(((void*)0), 0, VAR_3);

    FUNC_5( !VAR_9 && ((FUNC_1() == VAR_1) ||
                 (FUNC_1() == VAR_0)),
        "returned %d with %d (expected '0' with ERROR_NOT_SUPPORTED or "
        "ERROR_INVALID_PARAMETER)\n", VAR_9, FUNC_1());
    if (VAR_8 > 0) {
        FUNC_2(0xdeadbeef);
        VAR_9 = FUNC_0(((void*)0), 0, VAR_5);
        FUNC_6("'%s' returned %d with %d\n", VAR_5, VAR_9, FUNC_1());

        FUNC_2(0xdeadbeef);
        VAR_9 = FUNC_0(((void*)0), 0, VAR_7);
        FUNC_6("'%s' returned %d with %d\n", VAR_7, VAR_9, FUNC_1());

        FUNC_2(0xdeadbeef);
        VAR_9 = FUNC_0(((void*)0), 0, VAR_6);
        FUNC_6("'%s' returned %d with %d\n", VAR_6, VAR_9, FUNC_1());
    }
}
