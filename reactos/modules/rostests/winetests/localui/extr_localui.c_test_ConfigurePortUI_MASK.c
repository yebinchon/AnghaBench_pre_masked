
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * pPortName; } ;
struct TYPE_3__ {int * pPortName; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int * VAR_4 ;
 TYPE_2__* VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_2 (int,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 int * VAR_11 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_13;


    if (!&FUNC_3) {
        FUNC_4("ConfigurePortUI not found\n");
        return;
    }

    FUNC_1(0xdeadbeef);
    VAR_13 = FUNC_3(((void*)0), ((void*)0), ((void*)0));
    FUNC_2( !VAR_13 &&
        ((FUNC_0() == VAR_3) || (FUNC_0() == VAR_2)),
        "got %d with %u (expected '0' with: ERROR_UNKNOWN_PORT or "
        "ERROR_INVALID_PRINTER_NAME)\n", VAR_13, FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_13 = FUNC_3(((void*)0), ((void*)0), VAR_7);
    FUNC_2( !VAR_13 &&
        ((FUNC_0() == VAR_3) || (FUNC_0() == VAR_2)),
        "got %d with %u (expected '0' with: ERROR_UNKNOWN_PORT or "
        "ERROR_INVALID_PRINTER_NAME)\n", VAR_13, FUNC_0());


    FUNC_1(0xdeadbeef);
    VAR_13 = FUNC_3(((void*)0), ((void*)0), VAR_6);
    FUNC_2( !VAR_13 &&
        ((FUNC_0() == VAR_3) || (FUNC_0() == VAR_2)),
        "got %d with %u (expected '0' with: ERROR_UNKNOWN_PORT or "
        "ERROR_INVALID_PRINTER_NAME)\n", VAR_13, FUNC_0());

    if (VAR_12 && VAR_10) {
        FUNC_1(0xdeadbeef);
        VAR_13 = FUNC_3(((void*)0), ((void*)0), VAR_10->pPortName);
        FUNC_2( VAR_13 ||
            (FUNC_0() == VAR_1) || (FUNC_0() == VAR_0),
            "got %d with %u (expected '!= 0' or '0' with: ERROR_CANCELLED or "
            "ERROR_ACCESS_DENIED)\n", VAR_13, FUNC_0());
    }

    if (VAR_9) {
        FUNC_1(0xdeadbeef);
        VAR_13 = FUNC_3(((void*)0), ((void*)0), VAR_9);
        FUNC_2( !VAR_13 &&
            ((FUNC_0() == VAR_3) || (FUNC_0() == VAR_2)),
            "got %d with %u (expected '0' with: ERROR_UNKNOWN_PORT or "
            "ERROR_INVALID_PRINTER_NAME)\n", VAR_13, FUNC_0());
    }

    if (VAR_12 && VAR_5) {
        FUNC_1(0xdeadbeef);
        VAR_13 = FUNC_3(((void*)0), ((void*)0), VAR_5->pPortName);
        FUNC_2( VAR_13 ||
            (FUNC_0() == VAR_1) || (FUNC_0() == VAR_0),
            "got %d with %u (expected '!= 0' or '0' with: ERROR_CANCELLED or "
            "ERROR_ACCESS_DENIED)\n", VAR_13, FUNC_0());
    }

    if (VAR_4) {
        FUNC_1(0xdeadbeef);
        VAR_13 = FUNC_3(((void*)0), ((void*)0), VAR_4);
        FUNC_2( !VAR_13 &&
            ((FUNC_0() == VAR_3) || (FUNC_0() == VAR_2)),
            "got %d with %u (expected '0' with: ERROR_UNKNOWN_PORT or "
            "ERROR_INVALID_PRINTER_NAME)\n", VAR_13, FUNC_0());

    }

    if (VAR_12 && VAR_8) {
        FUNC_1(0xdeadbeef);
        VAR_13 = FUNC_3(((void*)0), ((void*)0), VAR_11);
        FUNC_2( !VAR_13 &&
            ((FUNC_0() == VAR_1) || (FUNC_0() == VAR_0)),
            "got %d with %u (expected '0' with: ERROR_CANCELLED or "
            "ERROR_ACCESS_DENIED)\n", VAR_13, FUNC_0());
    }
}
