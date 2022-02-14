
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dscaps ;
struct TYPE_4__ {int dwSize; } ;
typedef int LPVOID ;
typedef int * LPDIRECTSOUND ;
typedef int LPCGUID ;
typedef int IUnknown ;
typedef int IDirectSound8 ;
typedef int IDirectSound ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ DSCAPS ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int *,scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int,char*,int) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static void FUNC_14(LPDIRECTSOUND VAR_17, BOOL VAR_18,
                              LPCGUID VAR_19)
{
    HRESULT VAR_20;
    DSCAPS VAR_21;
    int VAR_22;
    IUnknown * VAR_23;
    IDirectSound * VAR_24;
    IDirectSound8 * VAR_25;
    DWORD VAR_26, VAR_27, VAR_28;


    VAR_20=FUNC_6(VAR_17,&VAR_16,(LPVOID*)&VAR_23);
    FUNC_12(VAR_20==VAR_10,"IDirectSound_QueryInterface(IID_IUnknown) failed: %08x\n", VAR_20);
    if (VAR_20==VAR_10)
        FUNC_7(VAR_23);

    VAR_20=FUNC_6(VAR_17,&VAR_14,(LPVOID*)&VAR_24);
    FUNC_12(VAR_20==VAR_10,"IDirectSound_QueryInterface(IID_IDirectSound) failed: %08x\n", VAR_20);
    if (VAR_20==VAR_10)
        FUNC_7(VAR_24);

    VAR_20=FUNC_6(VAR_17,&VAR_15,(LPVOID*)&VAR_25);
    FUNC_12(VAR_20==VAR_12,"IDirectSound_QueryInterface(IID_IDirectSound8) "
       "should have failed: %08x\n",VAR_20);
    if (VAR_20==VAR_10)
        FUNC_1(VAR_25);

    if (VAR_18 == VAR_13) {

        VAR_20=FUNC_3(VAR_17,0);
        FUNC_12(VAR_20==VAR_5,"IDirectSound_GetCaps(NULL) "
           "should have returned DSERR_UNINITIALIZED, returned: %08x\n", VAR_20);

        VAR_20=FUNC_3(VAR_17,&VAR_21);
        FUNC_12(VAR_20==VAR_5,"IDirectSound_GetCaps() "
           "should have returned DSERR_UNINITIALIZED, returned: %08x\n", VAR_20);

        VAR_20=FUNC_2(VAR_17);
        FUNC_12(VAR_20==VAR_5,"IDirectSound_Compact() "
           "should have returned DSERR_UNINITIALIZED, returned: %08x\n", VAR_20);

        VAR_20=FUNC_4(VAR_17,&VAR_26);
        FUNC_12(VAR_20==VAR_5,"IDirectSound_GetSpeakerConfig() "
           "should have returned DSERR_UNINITIALIZED, returned: %08x\n", VAR_20);

        VAR_20=FUNC_5(VAR_17,VAR_19);
        FUNC_12(VAR_20==VAR_10||VAR_20==VAR_3||VAR_20==VAR_0||VAR_20==VAR_11,
           "IDirectSound_Initialize() failed: %08x\n",VAR_20);
        if (VAR_20==VAR_3) {
            FUNC_13("  No Driver\n");
            goto EXIT;
        } else if (VAR_20==VAR_11) {
            FUNC_13("  No Device\n");
            goto EXIT;
        } else if (VAR_20==VAR_0) {
            FUNC_13("  Already In Use\n");
            goto EXIT;
        }
    }

    VAR_20=FUNC_5(VAR_17,VAR_19);
    FUNC_12(VAR_20==VAR_1, "IDirectSound_Initialize() "
       "should have returned DSERR_ALREADYINITIALIZED: %08x\n", VAR_20);


    VAR_20=FUNC_3(VAR_17,0);
    FUNC_12(VAR_20==VAR_2,"IDirectSound_GetCaps(NULL) "
       "should have returned DSERR_INVALIDPARAM, returned: %08x\n", VAR_20);

    FUNC_10(&VAR_21, sizeof(VAR_21));


    VAR_20=FUNC_3(VAR_17,&VAR_21);
    FUNC_12(VAR_20==VAR_2,"IDirectSound_GetCaps() "
       "should have returned DSERR_INVALIDPARAM, returned: %08x\n", VAR_20);

    VAR_21.dwSize=sizeof(VAR_21);


    VAR_20=FUNC_3(VAR_17,&VAR_21);
    FUNC_12(VAR_20==VAR_10,"IDirectSound_GetCaps() failed: %08x\n",VAR_20);

    VAR_20=FUNC_2(VAR_17);
    FUNC_12(VAR_20==VAR_4,"IDirectSound_Compact() failed: %08x\n", VAR_20);

    VAR_20=FUNC_8(VAR_17,FUNC_11(),VAR_6);
    FUNC_12(VAR_20==VAR_10,"IDirectSound_SetCooperativeLevel() failed: %08x\n", VAR_20);

    VAR_20=FUNC_2(VAR_17);
    FUNC_12(VAR_20==VAR_10,"IDirectSound_Compact() failed: %08x\n",VAR_20);

    VAR_20=FUNC_4(VAR_17,0);
    FUNC_12(VAR_20==VAR_2,"IDirectSound_GetSpeakerConfig(NULL) "
       "should have returned DSERR_INVALIDPARAM, returned: %08x\n", VAR_20);

    VAR_20=FUNC_4(VAR_17,&VAR_26);
    FUNC_12(VAR_20==VAR_10,"IDirectSound_GetSpeakerConfig() failed: %08x\n", VAR_20);
    VAR_28 = VAR_26;

    VAR_26 = FUNC_0(VAR_9,
                                        VAR_8);
    if (VAR_26 == VAR_28)
        VAR_26 = FUNC_0(VAR_9,
                                            VAR_7);
    if(VAR_20==VAR_10) {
        VAR_20=FUNC_9(VAR_17,VAR_26);
        FUNC_12(VAR_20==VAR_10,"IDirectSound_SetSpeakerConfig() failed: %08x\n", VAR_20);
    }
    if (VAR_20==VAR_10) {
        VAR_20=FUNC_4(VAR_17,&VAR_27);
        FUNC_12(VAR_20==VAR_10,"IDirectSound_GetSpeakerConfig() failed: %08x\n", VAR_20);
        if (VAR_20==VAR_10 && VAR_26!=VAR_27)
               FUNC_13("IDirectSound_GetSpeakerConfig() failed to set speaker "
               "config: expected 0x%08x, got 0x%08x\n",
               VAR_26,VAR_27);
        FUNC_9(VAR_17,VAR_28);
    }

EXIT:
    VAR_22=FUNC_7(VAR_17);
    FUNC_12(VAR_22==0,"IDirectSound_Release() has %d references, should have 0\n",VAR_22);
}
