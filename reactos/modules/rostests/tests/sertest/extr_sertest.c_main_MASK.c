
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int DCBlength; int BaudRate; int ByteSize; int StopBits; int Parity; } ;
typedef char TCHAR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_1__ DCB ;
typedef int CHAR ;
typedef scalar_t__ BOOL ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,int*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*,int,int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (scalar_t__,int*,int,int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_8 (scalar_t__,int*,int,int*,int *) ;
 char* FUNC_9 (char*) ;
 int VAR_12 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char*,int*) ;

int FUNC_13(int VAR_13, char *VAR_14[])
{
    CHAR VAR_15[VAR_1];
    CHAR VAR_16[VAR_1];
    DWORD VAR_17 = 9600;
    DWORD VAR_18;
    DWORD VAR_19;
    DCB VAR_20;
    BOOL VAR_21;
    HANDLE VAR_22;
    int VAR_23;
    int VAR_24;
    int VAR_25;
 int VAR_26 = 1;

 TCHAR VAR_27[VAR_6];

    if (VAR_13 > 1) {

        FUNC_12(VAR_14[1], "%d", &VAR_26);
    }
 FUNC_11(VAR_27, FUNC_9("COM%d"), VAR_26);

    FUNC_10("Serial Port Test Application Version %s\n", VAR_0);
    FUNC_10("Attempting to open serial port %d - %s\n", VAR_26, VAR_27);
    VAR_22 = FUNC_2(VAR_27,
                       VAR_4|VAR_5,
                       0,
                       ((void*)0),
                       VAR_9,
                       0,
                       ((void*)0));

    if (VAR_22 == (HANDLE)-1) {
        FUNC_10("ERROR: CreateFile() failed with result: %lx\n", (DWORD)VAR_22);
        return 1;
    }
    FUNC_10("CreateFile() returned: %lx\n", (DWORD)VAR_22);

    FUNC_10("Fiddling with DTR and RTS control lines...\n");
 for (VAR_23 = 0; VAR_23 < 100; VAR_23++) {
 VAR_21 = FUNC_3(VAR_22, VAR_10);
    if (!VAR_21) {
        FUNC_10("WARNING: EscapeCommFunction(SETDTR) failed: %lx\n", (DWORD)VAR_21);
    }
 VAR_21 = FUNC_3(VAR_22, VAR_11);
    if (!VAR_21) {
        FUNC_10("WARNING: EscapeCommFunction(SETRTS) failed: %lx\n", (DWORD)VAR_21);
    }
 for (VAR_24 = 0; VAR_24 < 1000; VAR_24++) {
  VAR_25 *= VAR_24;
 }
 VAR_21 = FUNC_3(VAR_22, VAR_2);
    if (!VAR_21) {
        FUNC_10("WARNING: EscapeCommFunction(CLRDTR) failed: %lx\n", (DWORD)VAR_21);
    }
 VAR_21 = FUNC_3(VAR_22, VAR_3);
    if (!VAR_21) {
        FUNC_10("WARNING: EscapeCommFunction(CLRRTS) failed: %lx\n", (DWORD)VAR_21);
    }
 }
    FUNC_10("Getting the default line characteristics...\n");
 VAR_20.DCBlength = sizeof(DCB);
 if (!FUNC_4(VAR_22, &VAR_20)) {
        FUNC_10("ERROR: failed to get the dcb: %ld\n", FUNC_5());
        return 2;
    }
    FUNC_10("Setting the line characteristics to 9600,8,N,1\n");
    VAR_20.BaudRate = VAR_17;
    VAR_20.ByteSize = 8;
    VAR_20.Parity = VAR_7;
    VAR_20.StopBits = VAR_8;

    VAR_21 = FUNC_7(VAR_22, &VAR_20);
    if (!VAR_21) {
        FUNC_10("ERROR: failed to set the comm state: %lx\n", (DWORD)VAR_21);
        return 3;
    }
 for (VAR_23 = 0; VAR_23 < VAR_1; VAR_23++) {
        VAR_15[VAR_23] = (CHAR)VAR_23;

        VAR_16[VAR_23] = 0xFF;
    }
    FUNC_10("\n");
    FUNC_10("Writting transmit buffer to the serial port\n");
    VAR_21 = FUNC_8(VAR_22, VAR_15, VAR_1, &VAR_18, ((void*)0));
    if (!VAR_21) {
        FUNC_10("ERROR: failed to write to the serial port: %lx\n", (DWORD)VAR_21);
        return 4;
    }
    FUNC_10("WriteFile() returned: %lx, byteswritten: %lx\n", (DWORD)VAR_21, VAR_18);
    FUNC_10("Attempting to close the serial port\n");
    VAR_21 = FUNC_0(VAR_22, &VAR_19, ((void*)0));
    FUNC_10("ClearCommError returned: %lx, dwErrors: %lx\n", (DWORD)VAR_21, VAR_19);
    VAR_21 = FUNC_1(VAR_22);
    if (!VAR_21) {
        FUNC_10("ERROR: failed to close the serial port: %lx\n", (DWORD)VAR_21);
        return 6;
    }
    FUNC_10("Finished\n");
    return 0;
}
