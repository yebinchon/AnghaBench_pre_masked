
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Header; int Function; } ;
typedef TYPE_1__ THREADED_WAVEHEADER_PARAMETERS ;
typedef int PWAVEHDR ;
typedef int PSOUND_DEVICE_INSTANCE ;
typedef int MMWAVEHEADER_FUNC ;
typedef int MMRESULT ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;

MMRESULT
FUNC_1(
    MMWAVEHEADER_FUNC VAR_1,
    PSOUND_DEVICE_INSTANCE VAR_2,
    PWAVEHDR VAR_3)
{
    THREADED_WAVEHEADER_PARAMETERS VAR_4;

    VAR_4.Function = VAR_1;
    VAR_4.Header = VAR_3;

    return FUNC_0(VAR_2,
                           VAR_0,
                           &VAR_4);
}
