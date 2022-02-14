
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
typedef int * LPDIRECTSOUND3DLISTENER ;
typedef int * LPDIRECTSOUND ;
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
 scalar_t__ FUNC_2 (int *,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*,int **,int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (int,char*,int,...) ;
 scalar_t__ FUNC_12 (int ,int **,int *) ;
 int FUNC_13 (int *,int **,int,int ,int ,int ,int ,int,double,int ,int *,int ,int ,int ,int ) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static HRESULT FUNC_14(LPGUID VAR_12)
{
    HRESULT VAR_13;
    LPDIRECTSOUND VAR_14=((void*)0);
    LPDIRECTSOUNDBUFFER VAR_15=((void*)0);
    DSBUFFERDESC VAR_16;
    DSCAPS VAR_17;
    int VAR_18;


    VAR_13=FUNC_12(VAR_12,&VAR_14,((void*)0));
    FUNC_11(VAR_13==VAR_6||VAR_13==VAR_4,"DirectSoundCreate() failed: %08x\n", VAR_13);
    if (VAR_13!=VAR_6)
        return VAR_13;


    FUNC_9(&VAR_17, sizeof(VAR_17));
    VAR_17.dwSize=sizeof(VAR_17);
    VAR_13=FUNC_5(VAR_14,&VAR_17);
    FUNC_11(VAR_13==VAR_6,"IDirectSound_GetCaps() failed: %08x\n",VAR_13);
    if (VAR_13!=VAR_6)
        goto EXIT;



    VAR_13=FUNC_7(VAR_14,FUNC_10(),VAR_5);
    FUNC_11(VAR_13==VAR_6,"IDirectSound_SetCooperativeLevel(DSSCL_PRIORITY) failed: %08x\n",VAR_13);
    if (VAR_13!=VAR_6)
        goto EXIT;
    VAR_15=((void*)0);
    FUNC_9(&VAR_16, sizeof(VAR_16));
    VAR_16.dwSize=sizeof(VAR_16);
    VAR_16.dwFlags=VAR_1|VAR_0;
    VAR_13=FUNC_4(VAR_14,&VAR_16,&VAR_15,((void*)0));
    FUNC_11(VAR_13==VAR_6 && VAR_15!=((void*)0),"IDirectSound_CreateSoundBuffer() failed "
       "to create a 3D primary buffer: %08x\n",VAR_13);
    if (VAR_13==VAR_6 && VAR_15!=((void*)0)) {
        LPDIRECTSOUND3DLISTENER VAR_19=((void*)0);
        LPDIRECTSOUNDBUFFER VAR_20=((void*)0);
        VAR_13=FUNC_2(VAR_15,
            &VAR_8,(void **)&VAR_19);
        FUNC_11(VAR_13==VAR_6 && VAR_19!=((void*)0),"IDirectSoundBuffer_QueryInterface() "
           "failed to get a 3D listener: %08x\n",VAR_13);
        if (VAR_13==VAR_6 && VAR_19!=((void*)0)) {

            VAR_13=FUNC_2(VAR_15,
                &VAR_9,(LPVOID *)&VAR_20);
            FUNC_11(VAR_13==VAR_6 && VAR_20!=((void*)0),
               "IDirectSoundBuffer_QueryInterface() failed: %08x\n", VAR_13);
            FUNC_11(VAR_20==VAR_15,
               "COM interface broken: %p != %p\n",
               *VAR_20,VAR_15);
            if (VAR_13==VAR_6 && VAR_20!=((void*)0)) {
                VAR_18=FUNC_3(VAR_20);
                FUNC_11(VAR_18==1,"IDirectSoundBuffer_Release() has %d references, "
                   "should have 1\n",VAR_18);

                VAR_20=((void*)0);
                VAR_13=FUNC_0(VAR_19,
                    &VAR_9,(LPVOID *)&VAR_20);
                FUNC_11(VAR_13==VAR_6 && VAR_20!=((void*)0),
                   "IDirectSoundBuffer_QueryInterface() failed: %08x\n", VAR_13);
                FUNC_11(VAR_20==VAR_15,
                   "COM interface broken: %p != %p\n",
                   *VAR_20,VAR_15);
                VAR_18=FUNC_3(VAR_20);
                FUNC_11(VAR_18==1,"IDirectSoundBuffer_Release() has %d references, "
                   "should have 1\n",VAR_18);


                FUNC_13(VAR_14,&VAR_15,1,VAR_7,0,VAR_7,0,
                            VAR_11 &&
                            !(VAR_17.dwFlags & VAR_2),1.0,0,
                            VAR_19,0,0,VAR_7,0);

                VAR_20 = ((void*)0);
                VAR_13 = FUNC_0(VAR_19, &VAR_10,
                        (void **)&VAR_20);
                FUNC_11(VAR_13==VAR_6 && VAR_20!=((void*)0),
                        "IDirectSound3DListener_QueryInterface didn't handle IKsPropertySet: ret = %08x\n", VAR_13);
                if(VAR_20)
                    FUNC_8(VAR_20);
            }


            VAR_18=FUNC_1(VAR_19);
            FUNC_11(VAR_18==0,"IDirectSound3DListener_Release() listener has %d "
               "references, should have 0\n",VAR_18);
        }

        VAR_20 = ((void*)0);
        VAR_13 = FUNC_2(VAR_15, &VAR_10, (void **)&VAR_20);
        FUNC_11(VAR_13==VAR_6 && VAR_20!=((void*)0),
                "IDirectSoundBuffer_QueryInterface didn't handle IKsPropertySet on primary buffer: ret = %08x\n", VAR_13);
        if(VAR_20)
            FUNC_8(VAR_20);


        VAR_18=FUNC_3(VAR_15);
        FUNC_11(VAR_18==0,"IDirectSoundBuffer_Release() primary has %d references, "
           "should have 0\n",VAR_18);
    }

EXIT:
    VAR_18=FUNC_6(VAR_14);
    FUNC_11(VAR_18==0,"IDirectSound_Release() has %d references, should have 0\n",VAR_18);
    if (VAR_18!=0)
return VAR_3;

    return VAR_13;
}
