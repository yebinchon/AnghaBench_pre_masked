
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DesiredAccess; int * pDevMode; int * pDatatype; } ;
typedef TYPE_1__ PRINTER_DEFAULTSA ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int **,TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int,char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_8 (int *,int *,int *,int ,int *,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_9 (char*,scalar_t__) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_10(void)
{
    DWORD VAR_9;
    HANDLE VAR_10;
    BYTE VAR_11[VAR_3 + 4];
    DWORD VAR_12;
    DWORD VAR_13;
    DWORD VAR_14;
    PRINTER_DEFAULTSA VAR_15;


    if (&FUNC_8 == ((void*)0)) return;

    VAR_15.pDatatype = ((void*)0);
    VAR_15.pDevMode = ((void*)0);
    VAR_15.DesiredAccess = VAR_5;

    VAR_10 = ((void*)0);
    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_2(VAR_8, &VAR_10, &VAR_15);
    if (FUNC_5(VAR_9, FUNC_1())) return;
    if (FUNC_4(VAR_9, FUNC_1())) return;

    FUNC_7(VAR_9, "returned %d with %u and handle %p (expected '!= 0')\n", VAR_9, FUNC_1(), VAR_10);
    if (!VAR_9) return;


    VAR_12 = (DWORD) 0xdeadbeef;
    VAR_13 = (DWORD) 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_8(VAR_10, VAR_6, ((void*)0), 0, ((void*)0), 0, &VAR_12, &VAR_13);
    FUNC_7( VAR_9 && (VAR_13 == VAR_0) && (VAR_12 <= VAR_3),
        "returned %d with %u and %u for status %u (expected '!= 0' and "
        "'<= MAX_PATH' for status ERROR_INSUFFICIENT_BUFFER)\n",
        VAR_9, FUNC_1(), VAR_12, VAR_13);

    if (VAR_12 > VAR_3) {
        FUNC_0(VAR_10);
        FUNC_9("buffer overflow (%u)\n", VAR_12);
        return;
    }
    VAR_14 = VAR_12;


    VAR_12 = (DWORD) 0xdeadbeef;
    VAR_13 = (DWORD) 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_8(VAR_10, VAR_7, ((void*)0), 0, ((void*)0), 0, &VAR_12, &VAR_13);
    FUNC_7( VAR_9 && (VAR_13 == VAR_1),
        "returned %d with %u and %u for status %u (expected '!= 0' with "
        "ERROR_INVALID_PARAMETER)\n", VAR_9, FUNC_1(), VAR_12, VAR_13);

    VAR_12 = (DWORD) 0xdeadbeef;
    VAR_13 = (DWORD) 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_8(VAR_10, ((void*)0), ((void*)0), 0, VAR_11, VAR_3, &VAR_12, &VAR_13);
    FUNC_7( !VAR_9 && (FUNC_1() == VAR_4),
        "returned %d with %u and %u for status %u (expected '0' with "
        "RPC_X_NULL_REF_POINTER)\n", VAR_9, FUNC_1(), VAR_12, VAR_13);


    VAR_12 = (DWORD) 0xdeadbeef;
    VAR_13 = (DWORD) 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_8(VAR_10, VAR_6, ((void*)0), 0, VAR_11, VAR_14, ((void*)0), &VAR_13);
    FUNC_7( !VAR_9 && (FUNC_1() == VAR_1),
        "returned %d with %u and %u for status %u (expected '0' with "
        "ERROR_INVALID_PARAMETER)\n", VAR_9, FUNC_1(), VAR_12, VAR_13);

    VAR_12 = (DWORD) 0xdeadbeef;
    VAR_13 = (DWORD) 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_8(VAR_10, VAR_6, ((void*)0), 0, ((void*)0), VAR_14, &VAR_12, &VAR_13);
    FUNC_7( !VAR_9 && (FUNC_1() == VAR_4),
        "returned %d with %u and %u for status %u (expected '0' with "
        "RPC_X_NULL_REF_POINTER)\n", VAR_9, FUNC_1(), VAR_12, VAR_13);

    VAR_12 = (DWORD) 0xdeadbeef;
    VAR_13 = (DWORD) 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_8(VAR_10, VAR_6, ((void*)0), 0, VAR_11, VAR_14, &VAR_12, ((void*)0));
    FUNC_7( !VAR_9 && (FUNC_1() == VAR_4),
        "returned %d with %u and %u for status %u (expected '0' with "
        "RPC_X_NULL_REF_POINTER)\n", VAR_9, FUNC_1(), VAR_12, VAR_13);


    VAR_12 = (DWORD) 0xdeadbeef;
    VAR_13 = (DWORD) 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_8(VAR_10, VAR_6, ((void*)0), 0, VAR_11, VAR_14+1, &VAR_12, &VAR_13);
    FUNC_7( VAR_9 && (VAR_13 == VAR_2),
        "returned %d with %u and %u for status %u (expected '!= 0' for status "
        "ERROR_SUCCESS)\n", VAR_9, FUNC_1(), VAR_12, VAR_13);



    VAR_12 = (DWORD) 0xdeadbeef;
    VAR_13 = (DWORD) 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_8(VAR_10, VAR_6, ((void*)0), 0, VAR_11, VAR_14-1, &VAR_12, &VAR_13);
    FUNC_7( VAR_9 && (VAR_13 == VAR_0),
        "returned %d with %u and %u for status %u (expected '!= 0' for status "
        "ERROR_INSUFFICIENT_BUFFER)\n", VAR_9, FUNC_1(), VAR_12, VAR_13);



    FUNC_6(VAR_11, 0, VAR_14);
    VAR_12 = (DWORD) 0xdeadbeef;
    VAR_13 = (DWORD) 0xdeadbeef;
    FUNC_3(0xdeadbeef);
    VAR_9 = FUNC_8(VAR_10, VAR_6, ((void*)0), 0, VAR_11, VAR_14, &VAR_12, &VAR_13);
    FUNC_7( VAR_9 && (VAR_13 == VAR_2),
        "returned %d with %u and %u for status %u (expected '!= 0' for status "
        "ERROR_SUCCESS)\n", VAR_9, FUNC_1(), VAR_12, VAR_13);

    FUNC_0(VAR_10);
}
