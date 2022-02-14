
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int timeouts ;
typedef int rbuf ;
struct TYPE_8__ {int ReadTotalTimeoutConstant; } ;
struct TYPE_7__ {int ByteSize; int StopBits; int fDtrControl; int fRtsControl; int Parity; int BaudRate; } ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_1__ DCB ;
typedef TYPE_2__ COMMTIMEOUTS ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (scalar_t__,char*,int,int*,int *) ;
 int FUNC_5 (scalar_t__,TYPE_1__*) ;
 int FUNC_6 (scalar_t__,TYPE_2__*) ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(void)
{
    HANDLE VAR_9;
    DCB VAR_10;
    COMMTIMEOUTS VAR_11;
    char VAR_12[32];
    DWORD VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    BOOL VAR_18;

    VAR_9 = FUNC_11(VAR_1);
    if (VAR_9 == VAR_3) return;

    FUNC_10(VAR_9);

    FUNC_9(FUNC_1(VAR_9, &VAR_10), "GetCommState failed\n");
    VAR_10.BaudRate = VAR_2;
    VAR_10.ByteSize = 8;
    VAR_10.Parity = VAR_4;
    VAR_10.fRtsControl=VAR_6;
    VAR_10.fDtrControl=VAR_0;
    VAR_10.StopBits = VAR_5;
    FUNC_9(FUNC_5(VAR_9, &VAR_10), "SetCommState failed\n");

    FUNC_8( &VAR_11, sizeof(VAR_11));
    VAR_11.ReadTotalTimeoutConstant = VAR_7;
    FUNC_9(FUNC_6(VAR_9, &VAR_11),"SetCommTimeouts failed\n");

    VAR_13 = FUNC_3();
    FUNC_7(0xdeadbeef);
    VAR_18 = FUNC_4(VAR_9, VAR_12, sizeof(VAR_12), &VAR_15, ((void*)0));
    VAR_17 = FUNC_2();
    VAR_14 = FUNC_3();
    FUNC_9( VAR_18 == VAR_8, "A timed-out read should return TRUE\n");
    FUNC_9( VAR_17 == 0xdeadbeef, "err=%d\n", VAR_17);
    VAR_16 = VAR_14 - VAR_13;
    FUNC_9( VAR_16 > VAR_7>>2 && VAR_16 < VAR_7 *2,
 "Unexpected TimeOut %d, expected %d\n", VAR_16, VAR_7);

    FUNC_0(VAR_9);
}
