
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;
typedef scalar_t__ LPDIRECTSOUNDCAPTURE ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int ,scalar_t__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

HRESULT FUNC_7(
    REFIID VAR_4,
    LPDIRECTSOUNDCAPTURE *VAR_5)
{
    LPDIRECTSOUNDCAPTURE VAR_6;
    HRESULT VAR_7;
    FUNC_3("(%s, %p)\n", FUNC_5(VAR_4), VAR_5);

    if (!FUNC_2(VAR_4, &VAR_3) &&
        !FUNC_2(VAR_4, &VAR_2)) {
        *VAR_5 = 0;
        return VAR_1;
    }


    FUNC_6();

    VAR_7 = FUNC_0(&VAR_6);
    if (VAR_7 == VAR_0) {
        FUNC_1(VAR_6);
        *VAR_5 = VAR_6;
    } else {
        FUNC_4("IDirectSoundCaptureImpl_Create failed\n");
        *VAR_5 = 0;
    }

    return VAR_7;
}
