
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int wfx ;
typedef int dscaps ;
typedef int bufdesc ;
struct TYPE_12__ {scalar_t__ wFormatTag; scalar_t__ nSamplesPerSec; scalar_t__ wBitsPerSample; scalar_t__ nChannels; int nAvgBytesPerSec; int nBlockAlign; } ;
typedef TYPE_1__ WAVEFORMATEX ;
struct TYPE_13__ {int dwSize; TYPE_1__* lpwfxFormat; int dwBufferBytes; int dwFlags; } ;
typedef int LPGUID ;
typedef int * LPDIRECTSOUNDBUFFER ;
typedef int * LPDIRECTSOUND8 ;
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
 int FUNC_0 (int *,TYPE_2__*,int **,int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_2__*,int **,int *) ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__* VAR_15 ;
 int** VAR_16 ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*,scalar_t__,int,int,int) ;
 int FUNC_13 (int,char*,int,...) ;
 int FUNC_14 (int ,int **,int *) ;
 int FUNC_15 (int *,int **,int ,int ,int ,int ,int ,scalar_t__,double,int ,int *,int ,int ) ;
 int FUNC_16 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,...) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static HRESULT FUNC_17(LPGUID VAR_18)
{
    HRESULT VAR_19;
    LPDIRECTSOUND8 VAR_20=((void*)0);
    LPDIRECTSOUNDBUFFER VAR_21=((void*)0),VAR_22=((void*)0);
    DSBUFFERDESC VAR_23;
    DSCAPS VAR_24;
    WAVEFORMATEX VAR_25, VAR_26;
    int VAR_27;
    unsigned int VAR_28, VAR_29;


    VAR_19=FUNC_14(VAR_18,&VAR_20,((void*)0));
    FUNC_13(VAR_19==VAR_9||VAR_19==VAR_6||VAR_19==VAR_3,
       "DirectSoundCreate8() failed: %08x\n",VAR_19);
    if (VAR_19!=VAR_9)
        return VAR_19;


    FUNC_8(&VAR_24, sizeof(VAR_24));
    VAR_24.dwSize=sizeof(VAR_24);
    VAR_19=FUNC_1(VAR_20,&VAR_24);
    FUNC_13(VAR_19==VAR_9,"IDirectSound8_GetCaps() failed: %08x\n",VAR_19);
    if (VAR_19!=VAR_9)
        goto EXIT;



    VAR_19=FUNC_3(VAR_20,FUNC_11(),VAR_8);
    FUNC_13(VAR_19==VAR_9,"IDirectSound8_SetCooperativeLevel() failed: %08x\n", VAR_19);
    if (VAR_19!=VAR_9)
        goto EXIT;

    FUNC_8(&VAR_23, sizeof(VAR_23));
    VAR_23.dwSize=sizeof(VAR_23);
    VAR_23.dwFlags=VAR_2;
    VAR_19=FUNC_0(VAR_20,&VAR_23,&VAR_21,((void*)0));
    FUNC_13(VAR_19==VAR_9 && VAR_21!=((void*)0),
       "IDirectSound8_CreateSoundBuffer() failed to create a primary buffer "
       "%08x\n",VAR_19);

    if (VAR_19==VAR_9 && VAR_21!=((void*)0)) {
        for (VAR_28=0;VAR_28<VAR_11;VAR_28++) {
          for (VAR_29=0;VAR_29<VAR_12;VAR_29++) {

            if ((VAR_15[VAR_29] == VAR_13) && (VAR_16[VAR_28][1] != 32))
                continue;





            VAR_19=FUNC_3(VAR_20,FUNC_11(),VAR_8);
            FUNC_13(VAR_19==VAR_9,"IDirectSound8_SetCooperativeLevel() failed: %08x\n", VAR_19);
            if (VAR_19!=VAR_9)
                goto EXIT;

            FUNC_12(&VAR_25,VAR_15[VAR_29],VAR_16[VAR_28][0],VAR_16[VAR_28][1],
                        VAR_16[VAR_28][2]);
            VAR_26=VAR_25;
            VAR_19=FUNC_6(VAR_21,&VAR_25);
            FUNC_13(VAR_19==VAR_9
               || VAR_19==VAR_5,
               "IDirectSoundBuffer_SetFormat(%s) failed: %08x\n",
               FUNC_10(&VAR_25), VAR_19);





            VAR_19=FUNC_4(VAR_21,&VAR_25,sizeof(VAR_25),((void*)0));
            FUNC_13(VAR_19==VAR_9,"IDirectSoundBuffer_GetFormat() failed: %08x\n", VAR_19);
            if (VAR_19==VAR_9 &&
                (VAR_25.wFormatTag!=VAR_26 ||
                 VAR_25.nSamplesPerSec!=VAR_26 ||
                 VAR_25.wBitsPerSample!=VAR_26 ||
                 VAR_25.nChannels!=VAR_26)) {
                FUNC_16("Requested primary format tag=0x%04x %dx%dx%d "
                      "avg.B/s=%d align=%d\n",
                      VAR_26,VAR_26,VAR_26,
                      VAR_26,VAR_26,VAR_26);
                FUNC_16("Got tag=0x%04x %dx%dx%d avg.B/s=%d align=%d\n",
                      VAR_25.wFormatTag,VAR_25.nSamplesPerSec,VAR_25.wBitsPerSample,
                      VAR_25.nChannels,VAR_25.nAvgBytesPerSec,VAR_25.nBlockAlign);
            }



            VAR_19=FUNC_3(VAR_20,FUNC_11(),VAR_7);
            FUNC_13(VAR_19==VAR_9,"IDirectSound8_SetCooperativeLevel() failed: %08x\n", VAR_19);

            FUNC_12(&VAR_26,VAR_14,11025,16,2);

            VAR_22=((void*)0);
            FUNC_8(&VAR_23, sizeof(VAR_23));
            VAR_23.dwSize=sizeof(VAR_23);
            VAR_23.dwFlags=VAR_1;
            VAR_23.dwBufferBytes=FUNC_9(VAR_25.nAvgBytesPerSec*VAR_0/1000,
                                        VAR_25.nBlockAlign);
            VAR_23.lpwfxFormat=&VAR_26;
            if (VAR_17) {
                FUNC_16("  Testing a primary buffer at %dx%dx%d (fmt=%d) with a "
                      "secondary buffer at %dx%dx%d\n",
                      VAR_25.nSamplesPerSec,VAR_25.wBitsPerSample,VAR_25.nChannels,VAR_15[VAR_29],
                      VAR_26,VAR_26,VAR_26);
            }
            VAR_19=FUNC_7(VAR_20,&VAR_23,&VAR_22,((void*)0));
            FUNC_13(VAR_19==VAR_9 && VAR_22!=((void*)0),
               "IDirectSound_CreateSoundBuffer() failed to create a secondary "
               "buffer %08x\n",VAR_19);

            if (VAR_19==VAR_9 && VAR_22!=((void*)0)) {
                FUNC_15(VAR_20,&VAR_22,0,VAR_10,0,VAR_10,0,
                             VAR_17,1.0,0,((void*)0),0,0);

                VAR_27=FUNC_5(VAR_22);
                FUNC_13(VAR_27==0,"IDirectSoundBuffer_Release() has %d references, "
                   "should have 0\n",VAR_27);
            }
          }
        }

        VAR_27=FUNC_5(VAR_21);
        FUNC_13(VAR_27==0,"IDirectSoundBuffer_Release() primary has %d references, "
           "should have 0\n",VAR_27);
    }



    VAR_19=FUNC_3(VAR_20,FUNC_11(),VAR_7);
    FUNC_13(VAR_19==VAR_9,"IDirectSound8_SetCooperativeLevel() failed: %08x\n", VAR_19);

EXIT:
    VAR_27=FUNC_2(VAR_20);
    FUNC_13(VAR_27==0,"IDirectSound8_Release() has %d references, should have 0\n",VAR_27);
    if (VAR_27!=0)
        return VAR_4;

    return VAR_19;
}
