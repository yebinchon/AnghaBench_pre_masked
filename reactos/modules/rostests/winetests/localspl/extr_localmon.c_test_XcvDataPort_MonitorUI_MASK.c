
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int,char*,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int *,int *,int ,int *,int,scalar_t__*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    DWORD VAR_9;
    BYTE VAR_10[VAR_3 + 2];
    DWORD VAR_11;
    DWORD VAR_12;



    VAR_11 = (DWORD) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_4(VAR_7, VAR_4, ((void*)0), 0, ((void*)0), 0, &VAR_11);
    if (VAR_9 == VAR_1) {
        FUNC_5("'MonitorUI' nor supported\n");
        return;
    }
    FUNC_3( (VAR_9 == VAR_0) && (VAR_11 <= VAR_3),
        "returned %d with %u and 0x%x (expected 'ERROR_INSUFFICIENT_BUFFER' "
        " and '<= MAX_PATH')\n", VAR_9, FUNC_0(), VAR_11);

    if (VAR_11 > VAR_3) {
        FUNC_5("buffer overflow (%u)\n", VAR_11);
        return;
    }
    VAR_12 = VAR_11;


    VAR_11 = (DWORD) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_4(VAR_7, VAR_6, ((void*)0), 0, ((void*)0), 0, &VAR_11);
    FUNC_3( VAR_9 == VAR_1, "returned %d with %u and 0x%x "
        "(expected 'ERROR_INVALID_PARAMETER')\n", VAR_9, FUNC_0(), VAR_11);

    if (0) {

        FUNC_4(VAR_7, ((void*)0), ((void*)0), 0, VAR_10, VAR_3, &VAR_11);
        FUNC_4(VAR_7, VAR_4, ((void*)0), 0, ((void*)0), VAR_12, &VAR_11);
        FUNC_4(VAR_7, VAR_4, ((void*)0), 0, VAR_10, VAR_12, ((void*)0));
    }



    VAR_11 = (DWORD) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_4(((void*)0), VAR_4, ((void*)0), 0, VAR_10, VAR_12, &VAR_11);
    FUNC_3( VAR_9 == VAR_2, "returned %d with %u and 0x%x "
        "(expected 'ERROR_SUCCESS')\n", VAR_9, FUNC_0(), VAR_11);



    FUNC_2(VAR_10, 0, VAR_12);
    VAR_11 = (DWORD) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_4(VAR_7, VAR_5, ((void*)0), 0, VAR_10, VAR_12, &VAR_11);
    FUNC_3( VAR_9 == VAR_1, "returned %d with %u and 0x%x "
        "(expected 'ERROR_INVALID_PARAMETER')\n", VAR_9, FUNC_0(), VAR_11);


    VAR_11 = (DWORD) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_4(VAR_7, VAR_4, ((void*)0), 0, VAR_10, VAR_12+1, &VAR_11);
    FUNC_3( VAR_9 == VAR_2, "returned %d with %u and 0x%x "
        "(expected 'ERROR_SUCCESS')\n", VAR_9, FUNC_0(), VAR_11);




    VAR_11 = (DWORD) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_4(VAR_7, VAR_4, ((void*)0), 0, VAR_10, VAR_12-1, &VAR_11);
    FUNC_3( VAR_9 == VAR_0, "returned %d with %u and 0x%x "
        "(expected 'ERROR_INSUFFICIENT_BUFFER')\n", VAR_9, FUNC_0(), VAR_11);


    FUNC_2(VAR_10, 0, VAR_12);
    VAR_11 = (DWORD) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_4(VAR_7, VAR_4, ((void*)0), 0, VAR_10, VAR_12, &VAR_11);
    FUNC_3( VAR_9 == VAR_2, "returned %d with %u and 0x%x "
        "(expected 'ERROR_SUCCESS')\n", VAR_9, FUNC_0(), VAR_11);



    if (!VAR_8) return;


    FUNC_2(VAR_10, 0, VAR_12);
    VAR_11 = (DWORD) 0xdeadbeef;
    FUNC_1(0xdeadbeef);
    VAR_9 = FUNC_4(VAR_8, VAR_4, ((void*)0), 0, VAR_10, sizeof(VAR_10), &VAR_11);
    FUNC_3( VAR_9 == VAR_2, "returned %d with %u and 0x%x "
        "(expected 'ERROR_SUCCESS')\n", VAR_9, FUNC_0(), VAR_11);
}
