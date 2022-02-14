
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int rtlinfo ;
typedef int ULONG ;
struct TYPE_5__ {scalar_t__ DeviceType; int Characteristics; } ;
struct TYPE_4__ {int member_0; int dwMajorVersion; int dwMinorVersion; int member_1; } ;
typedef scalar_t__ SOCKET ;
typedef TYPE_1__ RTL_OSVERSIONINFOEXW ;
typedef int PRTL_OSVERSIONINFOW ;
typedef scalar_t__ NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;
typedef TYPE_2__ FILE_FS_DEVICE_INFORMATION ;
typedef int DeviceInfo ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *,TYPE_2__*,int,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int* FUNC_5 () ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{
    DWORD VAR_10;
    int VAR_11, VAR_12;
    FILE_FS_DEVICE_INFORMATION VAR_13;
    IO_STATUS_BLOCK VAR_14;
    NTSTATUS VAR_15;

    SOCKET VAR_16 = FUNC_3(VAR_0, VAR_5, 0, ((void*)0), 0, 0);
    FUNC_8 (VAR_16 != VAR_4, "Invalid socket\n");
    if (VAR_16 == VAR_4)
        return;

    VAR_10 = FUNC_0((HANDLE)VAR_16);
    FUNC_8(VAR_10 == VAR_2, "Expected type FILE_TYPE_PIPE, was: %lu\n", VAR_10);

    VAR_15 = FUNC_1((HANDLE)VAR_16, &VAR_14, &VAR_13, sizeof(VAR_13), VAR_3);
    FUNC_8(VAR_15 == VAR_6, "Expected STATUS_SUCCESS, got 0x%lx\n", VAR_15);
    if (VAR_15 == VAR_6)
    {
        RTL_OSVERSIONINFOEXW VAR_17 = { sizeof(VAR_17), 0 };
        ULONG VAR_18;
        DWORD VAR_19;
        FUNC_8(VAR_13.DeviceType == VAR_1, "Expected FILE_DEVICE_NAMED_PIPE, got: 0x%lx\n", VAR_13.DeviceType);

        FUNC_2((PRTL_OSVERSIONINFOW)&VAR_17);
        VAR_19 = (VAR_17.dwMajorVersion << 8) | VAR_17.dwMinorVersion;
        VAR_18 = VAR_19 >= VAR_7 ? 0x20000 : 0;
        FUNC_8(VAR_13.Characteristics == VAR_18, "Expected 0x%lx, got: 0x%lx\n", VAR_18, VAR_13.Characteristics);
    }

    VAR_11 = FUNC_6(VAR_16, VAR_8 | VAR_9);
    VAR_12 = *FUNC_5();

    FUNC_8(VAR_11 != -1, "Expected a valid handle (%i)\n", VAR_12);
    if (VAR_11 != -1)
    {


        FUNC_4(VAR_11);
    }
    else
    {
        FUNC_7(VAR_16);
    }
}
