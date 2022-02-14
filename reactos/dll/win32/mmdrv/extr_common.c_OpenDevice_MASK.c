
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int dwInstance; int hWave; int dwCallback; } ;
struct TYPE_7__ {int app_user_data; int mme_wave_handle; int callback; scalar_t__ flags; int kernel_device_handle; } ;
typedef TYPE_1__ SessionInfo ;
typedef int PVOID ;
typedef scalar_t__ MMRESULT ;
typedef TYPE_2__* LPWAVEOPENDESC ;
typedef scalar_t__ DeviceType ;
typedef scalar_t__ DWORD_PTR ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (scalar_t__,int ,TYPE_1__**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

DWORD
FUNC_7(
    DeviceType VAR_11,
    UINT VAR_12,
    PVOID VAR_13,
    DWORD VAR_14,
    DWORD_PTR VAR_15)
{
    SessionInfo* VAR_16;
    MMRESULT VAR_17;
    DWORD VAR_18;


    VAR_17 = FUNC_0(VAR_11, VAR_12, &VAR_16);

    if ( VAR_17 != VAR_2 )
    {
        FUNC_1("Couldn't allocate session info\n");
        return VAR_17;
    }

    VAR_17 = FUNC_5(VAR_11,
                              VAR_12,
                              VAR_0,
                              &VAR_16->kernel_device_handle);

    if ( VAR_17 != VAR_2 )
    {
        FUNC_1("Failed to open kernel device\n");
        FUNC_2(VAR_16);
        return VAR_17;
    }



    VAR_16->flags = VAR_14;



    if ( FUNC_3(VAR_11) )
    {
        LPWAVEOPENDESC VAR_19 = (LPWAVEOPENDESC) VAR_13;
        VAR_16->callback = VAR_19->dwCallback;
        VAR_16->mme_wave_handle = VAR_19->hWave;
        VAR_16->app_user_data = VAR_19->dwInstance;
    }
    else
    {
        FUNC_1("Only wave devices are supported at present!\n");
        FUNC_2(VAR_16);
        return VAR_3;
    }



    VAR_17 = FUNC_6(VAR_16);

    if ( VAR_17 != VAR_2 )
    {
        FUNC_2(VAR_16);
        return VAR_17;
    }



    *((SessionInfo**)VAR_15) = VAR_16;



    VAR_18 = (VAR_11 == VAR_10) ? VAR_8 :
              (VAR_11 == VAR_9) ? VAR_7 :
              (VAR_11 == VAR_6) ? VAR_4 :
              (VAR_11 == VAR_5) ? VAR_1 : 0xFFFFFFFF;

    FUNC_4(VAR_16, VAR_18, 0, 0);

    return VAR_2;
}
