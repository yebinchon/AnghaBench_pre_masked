
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int obj_data ;
struct TYPE_3__ {scalar_t__ uAppData; } ;
typedef int IDirectInputDevice8A ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ DIDEVICEOBJECTDATA ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,TYPE_1__*,scalar_t__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int ,int ,int ) ;
 int FUNC_7 (scalar_t__,int,int,int ,int ) ;
 int FUNC_8 (int,char*,scalar_t__,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(IDirectInputDevice8A *VAR_9, DWORD VAR_10, DWORD VAR_11, DWORD VAR_12)
{
    HRESULT VAR_13;
    DIDEVICEOBJECTDATA VAR_14;
    DWORD VAR_15 = 1;
    int VAR_16;

    VAR_13 = FUNC_0(VAR_9);
    FUNC_8 (FUNC_4(VAR_13), "Failed to acquire device hr=%08x\n", VAR_13);

    if (VAR_10 == VAR_3)
        FUNC_6( VAR_11, VAR_0, 0, 0);

    if (VAR_10 == VAR_4)
        FUNC_7( VAR_11, 0, 0, 0, 0);

    FUNC_5();
    FUNC_2(VAR_9);
    VAR_13 = FUNC_1(VAR_9, sizeof(VAR_14), &VAR_14, &VAR_15, 0);

    if (VAR_15 != 1)
    {
        FUNC_9("We're not able to inject input into Windows dinput8 with events\n");
        FUNC_3(VAR_9);
        return;
    }

    FUNC_8 (VAR_14.uAppData == VAR_12, "Retrieval of action failed uAppData=%lu expected=%d\n", VAR_14.uAppData, VAR_12);


    for (VAR_16 = 0; VAR_16 < 17; VAR_16++)
        if (VAR_10 == VAR_3)
        {
            FUNC_6( VAR_8, VAR_0, 0, 0);
            FUNC_6( VAR_8, VAR_0, VAR_5, 0);
        }
        else if (VAR_10 == VAR_4)
        {
            FUNC_7(VAR_6, 1, 1, 0, 0);
            FUNC_7(VAR_7, 1, 1, 0, 0);
        }

    FUNC_5();
    FUNC_2(VAR_9);

    VAR_15 = 1;
    VAR_13 = FUNC_1(VAR_9, sizeof(VAR_14), &VAR_14, &VAR_15, 0);
    FUNC_8(VAR_13 == VAR_1, "GetDeviceData() failed: %08x\n", VAR_13);
    VAR_15 = 1;
    VAR_13 = FUNC_1(VAR_9, sizeof(VAR_14), &VAR_14, &VAR_15, 0);
    FUNC_8(VAR_13 == VAR_2 && VAR_15 == 1, "GetDeviceData() failed: %08x cnt:%d\n", VAR_13, VAR_15);

    FUNC_3(VAR_9);
}
