
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int dsccaps ;
struct TYPE_5__ {int dwSize; } ;
typedef int LPVOID ;
typedef int * LPDIRECTSOUNDCAPTURE ;
typedef int LPCGUID ;
typedef int IUnknown ;
typedef int IDirectSoundCapture ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DSCCAPS ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int,char*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(LPDIRECTSOUNDCAPTURE VAR_11,
                                     BOOL VAR_12, LPCGUID VAR_13)
{
    HRESULT VAR_14;
    DSCCAPS VAR_15;
    int VAR_16;
    IUnknown * VAR_17;
    IDirectSoundCapture * VAR_18;


    VAR_14=FUNC_2(VAR_11, &VAR_10,
                                          (LPVOID*)&VAR_17);
    FUNC_6(VAR_14==VAR_5, "IDirectSoundCapture_QueryInterface(IID_IUnknown) "
       "failed: %08x\n", VAR_14);
    if (VAR_14==VAR_5)
        FUNC_3(VAR_17);

    VAR_14=FUNC_2(VAR_11, &VAR_9,
                                          (LPVOID*)&VAR_18);
    FUNC_6(VAR_14==VAR_5, "IDirectSoundCapture_QueryInterface(IID_IDirectSoundCapture) "
       "failed: %08x\n", VAR_14);
    if (VAR_14==VAR_5)
        FUNC_3(VAR_18);

    if (VAR_12 == VAR_8) {

        VAR_14=FUNC_0(VAR_11,0);
        FUNC_6(VAR_14==VAR_4||VAR_14==VAR_7,
           "IDirectSoundCapture_GetCaps(NULL) should have returned "
           "DSERR_UNINITIALIZED or E_INVALIDARG, returned: %08x\n", VAR_14);

        VAR_14=FUNC_0(VAR_11, &VAR_15);
        FUNC_6(VAR_14==VAR_4,"IDirectSoundCapture_GetCaps() "
           "should have returned DSERR_UNINITIALIZED, returned: %08x\n", VAR_14);

        VAR_14=FUNC_1(VAR_11, VAR_13);
        FUNC_6(VAR_14==VAR_5||VAR_14==VAR_3||VAR_14==VAR_0||
           VAR_14==VAR_6||VAR_14==VAR_7,
           "IDirectSoundCapture_Initialize() failed: %08x\n", VAR_14);
        if (VAR_14==VAR_3||VAR_14==VAR_7) {
            FUNC_7("  No Driver\n");
            goto EXIT;
        } else if (VAR_14==VAR_6) {
            FUNC_7("  No Device\n");
            goto EXIT;
        } else if (VAR_14==VAR_0) {
            FUNC_7("  Already In Use\n");
            goto EXIT;
        }
    }

    VAR_14=FUNC_1(VAR_11, VAR_13);
    FUNC_6(VAR_14==VAR_1, "IDirectSoundCapture_Initialize() "
       "should have returned DSERR_ALREADYINITIALIZED: %08x\n", VAR_14);


    VAR_14=FUNC_0(VAR_11, 0);
    FUNC_6(VAR_14==VAR_2, "IDirectSoundCapture_GetCaps(NULL) "
       "should have returned DSERR_INVALIDPARAM, returned: %08x\n", VAR_14);

    FUNC_5(&VAR_15, sizeof(VAR_15));


    VAR_14=FUNC_4(VAR_11, &VAR_15);
    FUNC_6(VAR_14==VAR_2, "IDirectSound_GetCaps() "
       "should have returned DSERR_INVALIDPARAM, returned: %08x\n", VAR_14);

    VAR_15.dwSize=sizeof(VAR_15);


    VAR_14=FUNC_0(VAR_11, &VAR_15);
    FUNC_6(VAR_14==VAR_5, "IDirectSoundCapture_GetCaps() failed: %08x\n", VAR_14);

EXIT:
    VAR_16=FUNC_3(VAR_11);
    FUNC_6(VAR_16==0, "IDirectSoundCapture_Release() has %d references, "
       "should have 0\n", VAR_16);
}
