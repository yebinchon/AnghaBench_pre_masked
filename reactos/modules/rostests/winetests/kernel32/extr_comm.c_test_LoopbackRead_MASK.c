
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int timeouts ;
typedef int tbuf ;
typedef int rbuf ;
struct TYPE_8__ {int ReadTotalTimeoutConstant; } ;
struct TYPE_7__ {int BaudRate; int ByteSize; void* StopBits; void* fDtrControl; void* fRtsControl; void* Parity; } ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_1__ DCB ;
typedef TYPE_2__ COMMTIMEOUTS ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_3 (scalar_t__,char*,int,int*,int *) ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__,TYPE_1__*) ;
 int FUNC_6 (scalar_t__,TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (scalar_t__,int*,int *) ;
 int FUNC_8 (scalar_t__,char*,int,int*,int *) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int VAR_12 ;
 int FUNC_10 (int,char*,...) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    HANDLE VAR_13;
    DCB VAR_14;
    COMMTIMEOUTS VAR_15;
    char VAR_16[32];
    DWORD VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23=0, VAR_24;
    BOOL VAR_25;
    char VAR_26[]="test_LoopbackRead";

    if (!VAR_12) return;

    VAR_13 = FUNC_11(VAR_3);
    if (VAR_13 == VAR_5) return;

    FUNC_12("Starting test_LoopbackRead\n");
    FUNC_10(FUNC_1(VAR_13, &VAR_14), "GetCommState failed\n");
    VAR_14.BaudRate = VAR_4;
    VAR_14.ByteSize = 8;
    VAR_14.Parity = VAR_6;
    VAR_14.fRtsControl=VAR_8;
    VAR_14.fDtrControl=VAR_0;
    VAR_14.StopBits = VAR_7;
    FUNC_10(FUNC_5(VAR_13, &VAR_14), "SetCommState failed\n");

    FUNC_9( &VAR_15, sizeof(VAR_15));
    VAR_15.ReadTotalTimeoutConstant = VAR_11;
    FUNC_10(FUNC_6(VAR_13, &VAR_15),"SetCommTimeouts failed\n");

    FUNC_10(FUNC_4(VAR_13, VAR_2), "SetCommMask failed\n");

    VAR_17 = FUNC_2();
    FUNC_10(FUNC_8(VAR_13,VAR_26,sizeof(VAR_26),&VAR_22, ((void*)0)), "WriteFile failed\n");
    VAR_18 = FUNC_2();
    FUNC_10(VAR_22 == sizeof(VAR_26),"WriteFile %d bytes written\n", VAR_22);
    VAR_19 = VAR_18 -VAR_17;


    FUNC_10(FUNC_7(VAR_13, &VAR_23, ((void*)0)), "WaitCommEvent failed\n");
    VAR_17 = FUNC_2();
    FUNC_10(VAR_23 == VAR_2,
                 "WaitCommEvent: Unexpected EvtMask 0x%08x, expected 0x%08x\n",
   VAR_23, VAR_2);
    FUNC_12("Write %d ms WaitCommEvent EV_TXEMPTY %d ms\n", VAR_19, VAR_17- VAR_18);

    VAR_20=0;
    FUNC_10(FUNC_3(VAR_13, VAR_16, sizeof(VAR_16), &VAR_20, ((void*)0)), "Readfile failed\n");
    FUNC_10(VAR_20 == sizeof(VAR_26),"ReadFile read %d bytes, expected \"%s\"\n", VAR_20,VAR_16);





    FUNC_10(FUNC_1(VAR_13, &VAR_14), "GetCommState failed\n");
    VAR_14.BaudRate = 9600;
    VAR_14.ByteSize = 8;
    VAR_14.Parity = VAR_6;
    VAR_14.fRtsControl=VAR_8;
    VAR_14.fDtrControl=VAR_0;
    VAR_14.StopBits = VAR_7;
    FUNC_10(FUNC_5(VAR_13, &VAR_14), "SetCommState failed\n");

    FUNC_10(FUNC_4(VAR_13, VAR_1), "SetCommMask failed\n");
    FUNC_10(FUNC_8(VAR_13,VAR_26,sizeof(VAR_26),&VAR_22, ((void*)0)), "WriteFile failed\n");
    FUNC_10(VAR_22 == sizeof(VAR_26),"WriteFile %d bytes written\n", VAR_22);

    FUNC_12("WaitCommEventEV_RXCHAR\n");
    FUNC_10(FUNC_7(VAR_13, &VAR_23, ((void*)0)), "WaitCommEvent failed\n");
    FUNC_10(VAR_23 == VAR_1, "WaitCommEvent: Unexpected EvtMask 0x%08x, expected 0x%08x\n",
       VAR_23, VAR_1);

    VAR_17 = FUNC_2();
    VAR_25 = FUNC_3(VAR_13, VAR_16, sizeof(VAR_16), &VAR_20, ((void*)0));
    VAR_18 = FUNC_2();
    FUNC_10(VAR_25, "Readfile failed\n");
    FUNC_10(VAR_20 == sizeof(VAR_26),"ReadFile read %d bytes\n", VAR_20);
    VAR_19 = VAR_18 - VAR_17;
    FUNC_12("Readfile for %d chars took %d ms\n", VAR_20, VAR_19);
    FUNC_10( (VAR_19 > VAR_11 - VAR_10) && (VAR_19 < VAR_11 + VAR_10),
 "Timedout Wait took %d ms, expected around %d\n", VAR_19, VAR_11);




    VAR_14.BaudRate = VAR_9;
    FUNC_10(FUNC_5(VAR_13, &VAR_14), "SetCommState failed\n");
    FUNC_10(FUNC_8(VAR_13,VAR_26,sizeof(VAR_26),&VAR_22, ((void*)0)), "WriteFile failed\n");
    VAR_17 = FUNC_2();
    VAR_20 = 0;
    VAR_21 =0;
    VAR_24=0;
    do
    {
 VAR_25 = FUNC_3(VAR_13, VAR_16+VAR_20, sizeof(VAR_16)-VAR_20, &VAR_21, ((void*)0));
 FUNC_10(VAR_25, "Readfile failed\n");
 VAR_20 += VAR_21;
 VAR_24++;
    }
    while ((VAR_20 < sizeof(VAR_26)) && (VAR_24 <10));
    VAR_18 = FUNC_2();
    FUNC_10( VAR_20 == sizeof(VAR_26),"ReadFile read %d bytes\n", VAR_20);
    FUNC_12("Plain Read for %d char at %d baud took %d ms\n", VAR_20, VAR_9, VAR_18-VAR_17);

    FUNC_0(VAR_13);
}
