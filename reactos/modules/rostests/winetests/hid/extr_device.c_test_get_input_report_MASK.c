
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int device_name ;
typedef int WCHAR ;
typedef int USAGE ;
struct TYPE_4__ {int InputReportByteLength; } ;
typedef int PHIDP_PREPARSED_DATA ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_1__ HIDP_CAPS ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ CHAR ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__*,int) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int,int *,int,int ) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (TYPE_1__,int ,scalar_t__*,int) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (int *) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_19(void)
{
    PHIDP_PREPARSED_DATA VAR_7;
    HIDP_CAPS VAR_8;
    WCHAR VAR_9[128];
    CHAR *VAR_10 = ((void*)0);
    DWORD VAR_11, VAR_12, VAR_13;
    char *VAR_14;
    BOOL VAR_15;
    NTSTATUS VAR_16;

    USAGE VAR_17[] = {VAR_3, VAR_2};
    HANDLE VAR_18 = FUNC_12(VAR_4, VAR_17, 2, VAR_0);

    if (!VAR_18)
        VAR_18 = FUNC_12(0x0, ((void*)0), 0x0, VAR_0);

    if (!VAR_18)
    {
        FUNC_17("No device found for testing\n");
        return;
    }
    VAR_15 = FUNC_9(VAR_18, VAR_9, sizeof(VAR_9));
    FUNC_13(VAR_15, "Failed to get product string(0x%x)\n", FUNC_1());
    FUNC_17("HidD_GetInputRpeort tests on device :%s\n",FUNC_18(VAR_9));

    VAR_15 = FUNC_8(VAR_18, &VAR_7);
    FUNC_13(VAR_15, "Failed to get preparsed data(0x%x)\n", FUNC_1());
    VAR_16 = FUNC_10(VAR_7, &VAR_8);
    FUNC_13(VAR_16 == VAR_1, "Failed to get Caps(0x%x)\n", VAR_16);
    VAR_10 = FUNC_4(FUNC_2(), 0, VAR_8.InputReportByteLength);

    if (VAR_6)
        VAR_13 = VAR_5;
    else
        VAR_13 = 100;
    if (VAR_6)
        FUNC_17("Test your device for the next %i seconds\n", VAR_13/1000);
    VAR_14 = FUNC_4(FUNC_2(), 0, 3 * VAR_8.InputReportByteLength);
    VAR_11 = FUNC_3();
    VAR_12 = 0;
    do
    {
        int VAR_19;

        VAR_10[0] = 0;
        VAR_15 = FUNC_7(VAR_18, VAR_10, VAR_8.InputReportByteLength);
        VAR_12 = FUNC_3() - VAR_11;

        if (VAR_15)
        {
            FUNC_13(VAR_10[0] == 0, "Report ID (0) is not the first byte of the data\n");
            VAR_14[0] = 0;
            for (VAR_19 = 0; VAR_19 < VAR_8.InputReportByteLength; VAR_19++)
            {
                char VAR_20[5];
                FUNC_15(VAR_20, "%x ", (BYTE)VAR_10[VAR_19]);
                FUNC_16(VAR_14, VAR_20);
            }
            FUNC_17("Input report (%i): %s\n", VAR_8.InputReportByteLength, VAR_14);

            FUNC_14(VAR_8, VAR_7, VAR_10, VAR_8.InputReportByteLength);
        }
        else
            FUNC_17("Failed to get Input Report, (%x)\n", VAR_15);
        FUNC_17("REMAINING: %d ms\n", VAR_13 - VAR_12);
        FUNC_11(500);
    } while(VAR_12 < VAR_13);

    VAR_15 = FUNC_6(VAR_7);
    FUNC_13(VAR_15, "Failed to free preparsed data(0x%x)\n", FUNC_1());
    FUNC_0(VAR_18);
    FUNC_5(FUNC_2(), 0, VAR_10);
    FUNC_5(FUNC_2(), 0, VAR_14);
}
