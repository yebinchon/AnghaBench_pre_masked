
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int interface_data ;
typedef int WCHAR ;
typedef scalar_t__ USHORT ;
typedef int UINT ;
struct TYPE_13__ {scalar_t__ UsagePage; scalar_t__ Usage; } ;
struct TYPE_12__ {int cbSize; } ;
struct TYPE_11__ {int cbSize; int DevicePath; } ;
typedef TYPE_1__ SP_DEVICE_INTERFACE_DETAIL_DATA_W ;
typedef TYPE_2__ SP_DEVICE_INTERFACE_DATA ;
typedef int PHIDP_PREPARSED_DATA ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_3__ HIDP_CAPS ;
typedef int HDEVINFO ;
typedef scalar_t__ HANDLE ;
typedef int GUID ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int,int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,int *) ;
 scalar_t__ FUNC_9 (int ,TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int *,int *,int,TYPE_2__*) ;
 int FUNC_12 (int *,int *,int *,int) ;
 scalar_t__ FUNC_13 (int ,TYPE_2__*,TYPE_1__*,int,int *,int *) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (int,char*,scalar_t__) ;
 int FUNC_16 (char*,int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static HANDLE FUNC_18(USHORT VAR_10, USHORT VAR_11[], UINT VAR_12, DWORD VAR_13)
{
    GUID VAR_14;
    HDEVINFO VAR_15;
    DWORD VAR_16 = 0;
    SP_DEVICE_INTERFACE_DATA VAR_17;
    DWORD VAR_18 = VAR_8 * sizeof(WCHAR);
    SP_DEVICE_INTERFACE_DETAIL_DATA_W *VAR_19;
    NTSTATUS VAR_20;
    BOOL VAR_21;

    FUNC_7(&VAR_14);

    FUNC_14(&VAR_17, sizeof(VAR_17));
    VAR_17.cbSize = sizeof(VAR_17);

    VAR_19 = FUNC_4(FUNC_3(), 0 , sizeof(*VAR_19) + VAR_18);
    VAR_19->cbSize = sizeof(*VAR_19);

    VAR_15 = FUNC_12(&VAR_14, ((void*)0), ((void*)0), VAR_0 | VAR_1);
    while (FUNC_11(VAR_15, ((void*)0), &VAR_14, VAR_16, &VAR_17))
    {
        VAR_16 ++;

        if (FUNC_13(VAR_15, &VAR_17, VAR_19, sizeof(*VAR_19) + VAR_18, ((void*)0), ((void*)0)))
        {
            PHIDP_PREPARSED_DATA VAR_22;
            HIDP_CAPS VAR_23;
            HANDLE VAR_24 = FUNC_1(VAR_19->DevicePath, VAR_13, VAR_4|VAR_5, ((void*)0), VAR_9, VAR_3, 0);
            if (VAR_24 == VAR_7 && FUNC_2() == VAR_2)
            {
                FUNC_16("Not enough permissions to read device %s.\n", FUNC_17(VAR_19->DevicePath));
                continue;
            }
            FUNC_15(VAR_24 != VAR_7, "got error %u\n", FUNC_2());

            VAR_21 = FUNC_8(VAR_24, &VAR_22);
            FUNC_15(VAR_21, "Failed to get preparsed data(0x%x)\n", FUNC_2());
            VAR_20 = FUNC_9(VAR_22, &VAR_23);
            FUNC_15(VAR_20 == VAR_6, "Failed to get Caps(0x%x)\n", VAR_20);
            VAR_21 = FUNC_6(VAR_22);
            FUNC_15(VAR_21, "Failed to free preparsed data(0x%x)\n", FUNC_2());
            if (!VAR_10 || VAR_10 == VAR_23.UsagePage)
            {
                int VAR_25;
                if (!VAR_12)
                {
                    FUNC_5(FUNC_3(), 0, VAR_19);
                    FUNC_10(VAR_15);
                    return VAR_24;
                }
                for (VAR_25 = 0; VAR_25 < VAR_12; VAR_25++)
                    if (!VAR_11[VAR_25] || VAR_11[VAR_25] == VAR_23.Usage)
                    {
                        FUNC_5(FUNC_3(), 0, VAR_19);
                        FUNC_10(VAR_15);
                        return VAR_24;
                    }
            }
            FUNC_0(VAR_24);
        }
    }
    FUNC_5(FUNC_3(), 0, VAR_19);
    FUNC_10(VAR_15);
    return ((void*)0);
}
