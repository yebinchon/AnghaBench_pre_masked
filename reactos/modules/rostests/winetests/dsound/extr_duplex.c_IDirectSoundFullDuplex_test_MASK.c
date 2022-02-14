
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int * LPDIRECTSOUNDFULLDUPLEX ;
typedef int LPCGUID ;
typedef int IUnknown ;
typedef int IDirectSoundFullDuplex ;
typedef int IDirectSoundCapture ;
typedef int IDirectSound8 ;
typedef int IDirectSound ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(LPDIRECTSOUNDFULLDUPLEX VAR_7,
                                        BOOL VAR_8, LPCGUID VAR_9,
                                        LPCGUID VAR_10)
{
    HRESULT VAR_11;
    int VAR_12;
    IUnknown * VAR_13;
    IDirectSound * VAR_14;
    IDirectSound8 * VAR_15;
    IDirectSoundCapture * VAR_16;
    IDirectSoundFullDuplex * VAR_17;


    VAR_11=FUNC_3(VAR_7,&VAR_6,(LPVOID*)&VAR_13);
    FUNC_6(VAR_11==VAR_0,"IDirectSoundFullDuplex_QueryInterface(IID_IUnknown) failed: %08x\n", VAR_11);
    if (VAR_11==VAR_0) {
        VAR_12=FUNC_4(VAR_13);
        FUNC_6(VAR_12==0, "IDirectSoundFullDuplex_Release() has %d references, "
           "should have 0\n", VAR_12);
    }

    VAR_11=FUNC_3(VAR_7,&VAR_2,(LPVOID*)&VAR_14);
    FUNC_6(VAR_11==(VAR_8?VAR_0:VAR_1),"IDirectSoundFullDuplex_QueryInterface(IID_IDirectSound) failed: %08x\n", VAR_11);
    if (VAR_11==VAR_0) {
        VAR_12=FUNC_5(VAR_14);
        FUNC_6(VAR_12==0, "IDirectSound_Release() has %d references, "
           "should have 0\n", VAR_12);
    }

    VAR_11=FUNC_3(VAR_7,&VAR_3,(LPVOID*)&VAR_15);
    FUNC_6(VAR_11==(VAR_8?VAR_0:VAR_1),"IDirectSoundFullDuplex_QueryInterface(IID_IDirectSound8) "
       "failed: %08x\n",VAR_11);
    if (VAR_11==VAR_0) {
        IDirectSoundFullDuplex * VAR_18;
        VAR_11=FUNC_0(VAR_15,&VAR_5,(LPVOID*)&VAR_18);
        FUNC_6(VAR_11==VAR_0,"IDirectSound8_QueryInterface(IID_IDirectSoundFullDuplex) "
           "failed: %08x\n",VAR_11);
        if (VAR_11==VAR_0) {
            VAR_12=FUNC_4(VAR_18);
            FUNC_6(VAR_12==1, "IDirectSoundFullDuplex_Release() has %d references, "
               "should have 1\n", VAR_12);
        }
        VAR_12=FUNC_1(VAR_15);
        FUNC_6(VAR_12==0, "IDirectSound8_Release() has %d references, "
           "should have 0\n", VAR_12);
    }

    VAR_11=FUNC_3(VAR_7,&VAR_4,(LPVOID*)&VAR_16);
    FUNC_6(VAR_11==(VAR_8?VAR_0:VAR_1),"IDirectSoundFullDuplex_QueryInterface(IID_IDirectSoundCapture) "
       "failed: %08x\n",VAR_11);
    if (VAR_11==VAR_0) {
        VAR_12=FUNC_2(VAR_16);
        FUNC_6(VAR_12==0, "IDirectSoundCapture_Release() has %d references, "
           "should have 0\n", VAR_12);
    }

    VAR_11=FUNC_3(VAR_7,&VAR_5,(LPVOID*)&VAR_17);
    FUNC_6(VAR_11==VAR_0,"IDirectSoundFullDuplex_QueryInterface(IID_IDirectSoundFullDuplex) "
       "failed: %08x\n",VAR_11);
    if (VAR_11==VAR_0) {
        FUNC_6(VAR_7==VAR_17, "different interfaces\n");
        VAR_12=FUNC_1(VAR_17);
        FUNC_6(VAR_12==1, "IDirectSoundFullDuplex_Release() has %d references, should have 1\n", VAR_12);
    }

    VAR_12=FUNC_4(VAR_7);
    FUNC_6(VAR_12==0, "IDirectSoundFullDuplex_Release() has %d references, "
       "should have 0\n", VAR_12);
}
