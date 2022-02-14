
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fPortType; int pDescription; int * pMonitorName; int * pPortName; } ;
typedef TYPE_1__ PORT_INFO_2A ;
typedef int * LPBYTE ;
typedef int DWORD ;


 int FUNC_0 (int *,int ,void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,char*,int,scalar_t__) ;
 int FUNC_5 (int *,int,int *,int *) ;
 int FUNC_6 (char*) ;
 void* VAR_6 ;
 int FUNC_7 (char*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_8(void)
{
    PORT_INFO_2A VAR_8;
    DWORD VAR_9;


    if (!&FUNC_5) {
        FUNC_7("AddPortEx not supported\n");
        return;
    }


    FUNC_0(((void*)0), 0, VAR_6);

    VAR_8.pPortName = VAR_6;
    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_5(((void*)0), 1, (LPBYTE) &VAR_8, VAR_2);
    if (FUNC_3(VAR_9, FUNC_1())) return;



    if (!VAR_9 && (FUNC_1() == VAR_1)) {
        FUNC_6("ACCESS_DENIED (ERROR_INVALID_PARAMETER)\n");
        return;
    }
    FUNC_4( VAR_9, "got %u with %u (expected '!= 0')\n", VAR_9, FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_5(((void*)0), 1, (LPBYTE) &VAR_8, VAR_2);
    FUNC_4( !VAR_9 && (FUNC_1() == VAR_1),
        "got %u with %u (expected '0' with ERROR_INVALID_PARAMETER)\n",
        VAR_9, FUNC_1());
    FUNC_0(((void*)0), 0, VAR_6);



    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_5(((void*)0), 1, (LPBYTE) &VAR_8, ((void*)0));
    FUNC_4( !VAR_9 && (FUNC_1() == VAR_1),
        "got %u with %u (expected '0' with ERROR_INVALID_PARAMETER)\n",
        VAR_9, FUNC_1());
    if (VAR_9) FUNC_0(((void*)0), 0, VAR_6);

    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_5(((void*)0), 1, (LPBYTE) &VAR_8, VAR_5);
    FUNC_4( !VAR_9 && (FUNC_1() == VAR_1),
        "got %u with %u (expected '0' with ERROR_INVALID_PARAMETER)\n",
        VAR_9, FUNC_1());
    if (VAR_9) FUNC_0(((void*)0), 0, VAR_6);

    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_5(((void*)0), 1, (LPBYTE) &VAR_8, VAR_4);
    FUNC_4( !VAR_9 && (FUNC_1() == VAR_1),
        "got %u with %u (expected '0' with ERROR_INVALID_PARAMETER)\n",
        VAR_9, FUNC_1());
    if (VAR_9) FUNC_0(((void*)0), 0, VAR_6);



    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_5(((void*)0), 1, ((void*)0), VAR_2);
    FUNC_4( !VAR_9 && (FUNC_1() == VAR_1),
        "got %u with %u (expected '0' with ERROR_INVALID_PARAMETER)\n",
        VAR_9, FUNC_1());

    VAR_8.pPortName = ((void*)0);
    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_5(((void*)0), 1, (LPBYTE) &VAR_8, VAR_2);
    FUNC_4( !VAR_9 && (FUNC_1() == VAR_1),
        "got %u with %u (expected '0' with ERROR_INVALID_PARAMETER)\n",
        VAR_9, FUNC_1());
    if (VAR_9) FUNC_0(((void*)0), 0, VAR_6);






    VAR_8.pPortName = VAR_6;
    VAR_8.pMonitorName = VAR_2;
    VAR_8.pDescription = VAR_7;
    VAR_8.fPortType = VAR_3;

    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_5(((void*)0), 2, (LPBYTE) &VAR_8, VAR_2);
    FUNC_4( !VAR_9 && (FUNC_1() == VAR_0),
        "got %u with %u (expected '0' with ERROR_INVALID_LEVEL)\n",
        VAR_9, FUNC_1());
    if (VAR_9) FUNC_0(((void*)0), 0, VAR_6);



    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_5(((void*)0), 0, (LPBYTE) &VAR_8, VAR_2);
    FUNC_4( !VAR_9 && (FUNC_1() == VAR_0),
        "got %u with %u (expected '0' with ERROR_INVALID_LEVEL)\n",
        VAR_9, FUNC_1());

    FUNC_2(0xdeadbeef);
    VAR_9 = FUNC_5(((void*)0), 3, (LPBYTE) &VAR_8, VAR_2);
    FUNC_4( !VAR_9 && (FUNC_1() == VAR_0),
        "got %u with %u (expected '0' with ERROR_INVALID_LEVEL)\n",
        VAR_9, FUNC_1());



    FUNC_0(((void*)0), 0, VAR_6);

}
