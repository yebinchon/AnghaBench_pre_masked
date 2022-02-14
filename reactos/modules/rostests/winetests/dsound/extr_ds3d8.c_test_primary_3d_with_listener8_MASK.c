
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int dscaps ;
typedef int bufdesc ;
struct TYPE_6__ {int dwSize; int dwFlags; } ;
typedef void* LPVOID ;
typedef int LPGUID ;
typedef int * LPDIRECTSOUNDBUFFER ;
typedef int * LPDIRECTSOUND8 ;
typedef int * LPDIRECTSOUND3DLISTENER ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DSCAPS ;
typedef TYPE_1__ DSBUFFERDESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int **,int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int,char*,int,...) ;
 scalar_t__ FUNC_11 (int ,int **,int *) ;
 int FUNC_12 (int *,int **,int,int ,int ,int ,int ,int,double,int ,int *,int ,int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static HRESULT FUNC_13(LPGUID VAR_11)
{
    HRESULT VAR_12;
    LPDIRECTSOUND8 VAR_13=((void*)0);
    LPDIRECTSOUNDBUFFER VAR_14=((void*)0);
    DSBUFFERDESC VAR_15;
    DSCAPS VAR_16;
    int VAR_17;


    VAR_12=FUNC_11(VAR_11,&VAR_13,((void*)0));
    FUNC_10(VAR_12==VAR_6||VAR_12==VAR_4,"DirectSoundCreate8() failed: %08x\n", VAR_12);
    if (VAR_12!=VAR_6)
        return VAR_12;


    FUNC_8(&VAR_16, sizeof(VAR_16));
    VAR_16.dwSize=sizeof(VAR_16);
    VAR_12=FUNC_3(VAR_13,&VAR_16);
    FUNC_10(VAR_12==VAR_6,"IDirectSound8_GetCaps() failed: %08x\n",VAR_12);
    if (VAR_12!=VAR_6)
        goto EXIT;



    VAR_12=FUNC_5(VAR_13,FUNC_9(),VAR_5);
    FUNC_10(VAR_12==VAR_6,"IDirectSound8_SetCooperativeLevel(DSSCL_PRIORITY) failed: %08x\n",VAR_12);
    if (VAR_12!=VAR_6)
        goto EXIT;
    VAR_14=((void*)0);
    FUNC_8(&VAR_15, sizeof(VAR_15));
    VAR_15.dwSize=sizeof(VAR_15);
    VAR_15.dwFlags=VAR_1|VAR_0;
    VAR_12=FUNC_2(VAR_13,&VAR_15,&VAR_14,((void*)0));
    FUNC_10(VAR_12==VAR_6 && VAR_14!=((void*)0),"IDirectSound8_CreateSoundBuffer() failed "
       "to create a 3D primary buffer %08x\n",VAR_12);
    if (VAR_12==VAR_6 && VAR_14!=((void*)0)) {
        LPDIRECTSOUND3DLISTENER VAR_18=((void*)0);
        VAR_12=FUNC_6(VAR_14,
                                             &VAR_8,
                                             (void **)&VAR_18);
        FUNC_10(VAR_12==VAR_6 && VAR_18!=((void*)0),"IDirectSoundBuffer_QueryInterface() "
           "failed to get a 3D listener: %08x\n",VAR_12);
        if (VAR_12==VAR_6 && VAR_18!=((void*)0)) {
            LPDIRECTSOUNDBUFFER VAR_19=((void*)0);


            VAR_12=FUNC_6(VAR_14,
                                                 &VAR_9,
                                                 (LPVOID *)&VAR_19);
            FUNC_10(VAR_12==VAR_6 && VAR_19!=((void*)0),
               "IDirectSoundBuffer_QueryInterface() failed: %08x\n", VAR_12);
            FUNC_10(VAR_19==VAR_14,"COM interface broken: %p != %p\n",*VAR_19,VAR_14);
            if (VAR_12==VAR_6 && VAR_19!=((void*)0)) {
                VAR_17=FUNC_7(VAR_19);
                FUNC_10(VAR_17==1,"IDirectSoundBuffer_Release() has %d references, "
                   "should have 1\n",VAR_17);

                VAR_19=((void*)0);
                VAR_12=FUNC_0(VAR_18,
                    &VAR_9,(LPVOID *)&VAR_19);
                FUNC_10(VAR_12==VAR_6 && VAR_19!=((void*)0),
                   "IDirectSoundBuffer_QueryInterface() failed: %08x\n", VAR_12);
                FUNC_10(VAR_19==VAR_14,"COM interface broken: %p != %p\n",*VAR_19,VAR_14);
                VAR_17=FUNC_7(VAR_19);
                FUNC_10(VAR_17==1,"IDirectSoundBuffer_Release() has %d references, "
                   "should have 1\n",VAR_17);


                FUNC_12(VAR_13,&VAR_14,1,VAR_7,0,VAR_7,0,
                             VAR_10 &&
                             !(VAR_16.dwFlags & VAR_2),
                             1.0,0,VAR_18,0,0);
            }


            VAR_17=FUNC_1(VAR_18);
            FUNC_10(VAR_17==0,"IDirectSound3DListener_Release() listener has %d "
               "references, should have 0\n",VAR_17);
        }


        VAR_17=FUNC_7(VAR_14);
        FUNC_10(VAR_17==0,"IDirectSoundBuffer_Release() primary has %d references, "
           "should have 0\n",VAR_17);
    }

EXIT:
    VAR_17=FUNC_4(VAR_13);
    FUNC_10(VAR_17==0,"IDirectSound8_Release() has %d references, should have 0\n",VAR_17);
    if (VAR_17!=0)
return VAR_3;

    return VAR_12;
}
