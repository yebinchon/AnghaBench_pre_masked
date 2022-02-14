
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int overlapped ;
typedef int device_name ;
typedef int WCHAR ;
typedef int USAGE ;
struct TYPE_9__ {int InputReportByteLength; } ;
struct TYPE_8__ {scalar_t__ hEvent; } ;
typedef int PHIDP_PREPARSED_DATA ;
typedef TYPE_1__ OVERLAPPED ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_2__ HIDP_CAPS ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef char CHAR ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,TYPE_1__*,int*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,int *) ;
 int FUNC_10 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_11 (int ,TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_12 (scalar_t__,char*,int,int *,TYPE_1__*) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;
 scalar_t__ FUNC_15 (int,int *,int,int ) ;
 int FUNC_16 (TYPE_1__*,int ,int) ;
 int FUNC_17 (int,char*,scalar_t__) ;
 int FUNC_18 (TYPE_2__,int ,char*,int) ;
 int FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (int *) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_23(void)
{
    PHIDP_PREPARSED_DATA VAR_9;
    HIDP_CAPS VAR_10;
    OVERLAPPED VAR_11;
    WCHAR VAR_12[128];
    CHAR *VAR_13 = ((void*)0);
    DWORD VAR_14;
    BOOL VAR_15;
    NTSTATUS VAR_16;
    DWORD VAR_17, VAR_18, VAR_19, VAR_20;
    char *VAR_21;

    USAGE VAR_22[] = {VAR_4, VAR_3};
    HANDLE VAR_23 = FUNC_15(VAR_5, VAR_22, 2, VAR_1);

    if (!VAR_23)
        VAR_23 = FUNC_15(0x0, ((void*)0), 0x0, VAR_1);

    if (!VAR_23)
    {
        FUNC_21("No device found for reading\n");
        return;
    }
    VAR_15 = FUNC_10(VAR_23, VAR_12, sizeof(VAR_12));
    FUNC_17(VAR_15, "Failed to get product string(0x%x)\n", FUNC_2());
    FUNC_21("Read tests on device :%s\n",FUNC_22(VAR_12));

    VAR_15 = FUNC_9(VAR_23, &VAR_9);
    FUNC_17(VAR_15, "Failed to get preparsed data(0x%x)\n", FUNC_2());
    VAR_16 = FUNC_11(VAR_9, &VAR_10);
    FUNC_17(VAR_16 == VAR_2, "Failed to get Caps(0x%x)\n", VAR_16);
    VAR_13 = FUNC_6(FUNC_4(), 0, VAR_10.InputReportByteLength);

    FUNC_16(&VAR_11, 0, sizeof(VAR_11));
    VAR_11.hEvent = FUNC_1(((void*)0), VAR_0, VAR_0, ((void*)0));
    if (VAR_8)
    {
        VAR_20 = VAR_6;
        VAR_17 = 1000;
    }
    else
        VAR_20 = VAR_17 = 100;
    if (VAR_8)
        FUNC_21("Test your device for the next %i seconds\n", VAR_20/1000);
    VAR_21 = FUNC_6(FUNC_4(), 0, 3 * VAR_10.InputReportByteLength);
    VAR_18 = FUNC_5();
    VAR_19 = 0;
    do
    {
        FUNC_12(VAR_23, VAR_13, VAR_10.InputReportByteLength, ((void*)0), &VAR_11);
        if (FUNC_14(VAR_11.hEvent, VAR_17) != VAR_7)
        {
            FUNC_13(VAR_11.hEvent);
            VAR_19 = FUNC_5() - VAR_18;
            FUNC_21("REMAINING: %d ms\n", VAR_20 - VAR_19);
            continue;
        }
        FUNC_13(VAR_11.hEvent);
        VAR_19 = FUNC_5() - VAR_18;
        FUNC_3(VAR_23, &VAR_11, &VAR_14, VAR_0);
        if (VAR_14)
        {
            int VAR_24;

            VAR_21[0] = 0;
            for (VAR_24 = 0; VAR_24 < VAR_14 && VAR_24 < VAR_10.InputReportByteLength; VAR_24++)
            {
                char VAR_25[5];
                FUNC_19(VAR_25, "%x ", (BYTE)VAR_13[VAR_24]);
                FUNC_20(VAR_21, VAR_25);
            }
            FUNC_21("Input report (%i): %s\n", VAR_14, VAR_21);

            FUNC_18(VAR_10, VAR_9, VAR_13, VAR_14);
        }
        FUNC_21("REMAINING: %d ms\n", VAR_20 - VAR_19);
    } while(VAR_19 < VAR_20);

    FUNC_0(VAR_11.hEvent);
    VAR_15 = FUNC_8(VAR_9);
    FUNC_17(VAR_15, "Failed to free preparsed data(0x%x)\n", FUNC_2());
    FUNC_0(VAR_23);
    FUNC_7(FUNC_4(), 0, VAR_13);
    FUNC_7(FUNC_4(), 0, VAR_21);
}
