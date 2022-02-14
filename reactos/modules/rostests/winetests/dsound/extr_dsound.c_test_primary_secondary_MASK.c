
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wfx ;
typedef int dscaps ;
typedef int bufdesc ;
struct TYPE_11__ {int wBitsPerSample; scalar_t__ wFormatTag; scalar_t__ nSamplesPerSec; int nAvgBytesPerSec; int nChannels; int nBlockAlign; } ;
typedef TYPE_1__ WAVEFORMATEX ;
struct TYPE_12__ {int dwSize; TYPE_1__* lpwfxFormat; int dwBufferBytes; int dwFlags; } ;
typedef int LPGUID ;
typedef int * LPDIRECTSOUNDBUFFER ;
typedef int * LPDIRECTSOUND ;
typedef int HRESULT ;
typedef TYPE_2__ DSCAPS ;
typedef TYPE_2__ DSBUFFERDESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,TYPE_1__*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_2__*,int **,int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__* VAR_16 ;
 int** VAR_17 ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*,scalar_t__,int,int,int) ;
 int FUNC_13 (int,char*,int,...) ;
 int FUNC_14 (int ,int **,int *) ;
 int FUNC_15 (int *,int **,int ,int ,int ,int ,int ,scalar_t__,double,int ,int *,int ,int ,int ,int ) ;
 int FUNC_16 (char*,scalar_t__,int,int,scalar_t__,scalar_t__,int,...) ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static HRESULT FUNC_17(LPGUID VAR_19)
{
    HRESULT VAR_20;
    LPDIRECTSOUND VAR_21=((void*)0);
    LPDIRECTSOUNDBUFFER VAR_22=((void*)0),VAR_23=((void*)0);
    DSBUFFERDESC VAR_24;
    DSCAPS VAR_25;
    WAVEFORMATEX VAR_26, VAR_27;
    int VAR_28,VAR_29,VAR_30;


    VAR_20=FUNC_14(VAR_19,&VAR_21,((void*)0));
    FUNC_13(VAR_20==VAR_9||VAR_20==VAR_6||VAR_20==VAR_3,
       "DirectSoundCreate() failed: %08x\n",VAR_20);
    if (VAR_20!=VAR_9)
        return VAR_20;


    FUNC_7(&VAR_25, sizeof(VAR_25));
    VAR_25.dwSize=sizeof(VAR_25);
    VAR_20=FUNC_4(VAR_21,&VAR_25);
    FUNC_13(VAR_20==VAR_9,"IDirectSound_GetCaps() failed: %08x\n",VAR_20);
    if (VAR_20!=VAR_9)
        goto EXIT;



    VAR_20=FUNC_6(VAR_21,FUNC_11(),VAR_8);
    FUNC_13(VAR_20==VAR_9,"IDirectSound_SetCooperativeLevel() failed: %08x\n", VAR_20);
    if (VAR_20!=VAR_9)
        goto EXIT;

    FUNC_7(&VAR_24, sizeof(VAR_24));
    VAR_24.dwSize=sizeof(VAR_24);
    VAR_24.dwFlags=VAR_2;
    VAR_20=FUNC_3(VAR_21,&VAR_24,&VAR_22,((void*)0));
    FUNC_13(VAR_20==VAR_9 && VAR_22!=((void*)0),
       "IDirectSound_CreateSoundBuffer() failed to create a primary buffer %08x\n",VAR_20);

    if (VAR_20==VAR_9 && VAR_22!=((void*)0)) {
        for (VAR_28=0;VAR_28<VAR_12;VAR_28++) {
          for (VAR_30=0;VAR_30<VAR_13;VAR_30++) {

            if ((VAR_16[VAR_30] == VAR_14) && (VAR_17[VAR_28][1] != 32))
                continue;





            VAR_20=FUNC_6(VAR_21,FUNC_11(),VAR_8);
            FUNC_13(VAR_20==VAR_9,"IDirectSound_SetCooperativeLevel() failed: %08x\n", VAR_20);
            if (VAR_20!=VAR_9)
                goto EXIT;

            FUNC_12(&VAR_26,VAR_16[VAR_30],VAR_17[VAR_28][0],VAR_17[VAR_28][1],
                        VAR_17[VAR_28][2]);
            VAR_27=VAR_26;
            VAR_20=FUNC_2(VAR_22,&VAR_26);

            if (VAR_26.wBitsPerSample <= 16)
                FUNC_13(VAR_20==VAR_9,"IDirectSoundBuffer_SetFormat(%s) failed: %08x\n",
                   FUNC_10(&VAR_26), VAR_20);
            else
                FUNC_13(VAR_20==VAR_9 || VAR_20 == VAR_10, "SetFormat (%s) failed: %08x\n",
                   FUNC_10(&VAR_26), VAR_20);





            VAR_20=FUNC_0(VAR_22,&VAR_26,sizeof(VAR_26),((void*)0));
            FUNC_13(VAR_20==VAR_9,"IDirectSoundBuffer_GetFormat() failed: %08x\n", VAR_20);
            if (VAR_20==VAR_9 &&
                (VAR_26.wFormatTag!=VAR_27 ||
                 VAR_26.nSamplesPerSec!=VAR_27 ||
                 VAR_26.wBitsPerSample!=VAR_27 ||
                 VAR_26.nChannels!=VAR_27)) {
                FUNC_16("Requested primary format tag=0x%04x %dx%dx%d "
                      "avg.B/s=%d align=%d\n",
                      VAR_27,VAR_27,VAR_27,
                      VAR_27,VAR_27,VAR_27);
                FUNC_16("Got tag=0x%04x %dx%dx%d avg.B/s=%d align=%d\n",
                      VAR_26.wFormatTag,VAR_26.nSamplesPerSec,VAR_26.wBitsPerSample,
                      VAR_26.nChannels,VAR_26.nAvgBytesPerSec,VAR_26.nBlockAlign);
            }



            VAR_20=FUNC_6(VAR_21,FUNC_11(),VAR_7);
            FUNC_13(VAR_20==VAR_9,"IDirectSound_SetCooperativeLevel() failed: %08x\n", VAR_20);

            FUNC_12(&VAR_27,VAR_15,11025,16,2);

            VAR_23=((void*)0);
            FUNC_7(&VAR_24, sizeof(VAR_24));
            VAR_24.dwSize=sizeof(VAR_24);
            VAR_24.dwFlags=VAR_1;
            VAR_24.dwBufferBytes=FUNC_8(VAR_26.nAvgBytesPerSec*VAR_0/1000,
                                        VAR_26.nBlockAlign);
            VAR_24.lpwfxFormat=&VAR_27;
            if (VAR_18) {
                FUNC_16("  Testing a primary buffer at %dx%dx%d (fmt=%d) with a "
                      "secondary buffer at %dx%dx%d\n",
                      VAR_26.nSamplesPerSec,VAR_26.wBitsPerSample,VAR_26.nChannels,VAR_16[VAR_30],
                      VAR_27,VAR_27,VAR_27);
            }
            VAR_20=FUNC_3(VAR_21,&VAR_24,&VAR_23,((void*)0));
            FUNC_13((VAR_20==VAR_9 && VAR_23!=((void*)0)) || FUNC_9(VAR_20 == VAR_4),
               "IDirectSound_CreateSoundBuffer() failed to create a secondary buffer %08x\n",VAR_20);

            if (VAR_20==VAR_9 && VAR_23!=((void*)0)) {
                FUNC_15(VAR_21,&VAR_23,0,VAR_11,0,VAR_11,0,
                            VAR_18,1.0,0,((void*)0),0,0,VAR_11,0);

                VAR_29=FUNC_1(VAR_23);
                FUNC_13(VAR_29==0,"IDirectSoundBuffer_Release() has %d references, "
                   "should have 0\n",VAR_29);
            }
          }
        }

        VAR_29=FUNC_1(VAR_22);
        FUNC_13(VAR_29==0,"IDirectSoundBuffer_Release() primary has %d references, "
           "should have 0\n",VAR_29);
    }



    VAR_20=FUNC_6(VAR_21,FUNC_11(),VAR_7);
    FUNC_13(VAR_20==VAR_9,"IDirectSound_SetCooperativeLevel() failed: %08x\n", VAR_20);

EXIT:
    VAR_29=FUNC_5(VAR_21);
    FUNC_13(VAR_29==0,"IDirectSound_Release() has %d references, should have 0\n",VAR_29);
    if (VAR_29!=0)
        return VAR_5;

    return VAR_20;
}
