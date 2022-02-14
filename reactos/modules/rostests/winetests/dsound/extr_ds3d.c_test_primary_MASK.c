
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int dscaps ;
typedef int bufdesc ;
struct TYPE_6__ {int dwSize; int dwFlags; } ;
typedef int LPGUID ;
typedef int * LPDIRECTSOUNDBUFFER ;
typedef int * LPDIRECTSOUND ;
typedef int LONG ;
typedef int HRESULT ;
typedef TYPE_1__ DSCAPS ;
typedef TYPE_1__ DSBUFFERDESC ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*,int **,int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_15 ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int ,int **,int *) ;
 int FUNC_9 (int *,int **,int,int ,int,int ,int,int,double,int ,int *,int ,int ,int ,int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static HRESULT FUNC_11(LPGUID VAR_17)
{
    HRESULT VAR_18;
    LPDIRECTSOUND VAR_19=((void*)0);
    LPDIRECTSOUNDBUFFER VAR_20=((void*)0);
    DSBUFFERDESC VAR_21;
    DSCAPS VAR_22;
    int VAR_23, VAR_24;


    VAR_18=FUNC_8(VAR_17,&VAR_19,((void*)0));
    FUNC_7(VAR_18==VAR_13||VAR_18==VAR_10,"DirectSoundCreate() failed: %08x\n", VAR_18);
    if (VAR_18!=VAR_13)
        return VAR_18;


    FUNC_5(&VAR_22, sizeof(VAR_22));
    VAR_22.dwSize=sizeof(VAR_22);
    VAR_18=FUNC_2(VAR_19,&VAR_22);
    FUNC_7(VAR_18==VAR_13,"IDirectSound_GetCaps() failed: %08x\n",VAR_18);
    if (VAR_18!=VAR_13)
        goto EXIT;



    VAR_18=FUNC_4(VAR_19,FUNC_6(),VAR_12);
    FUNC_7(VAR_18==VAR_13,"IDirectSound_SetCooperativeLevel(DSSCL_PRIORITY) failed: %08x\n",VAR_18);
    if (VAR_18!=VAR_13)
        goto EXIT;


    VAR_20=((void*)0);
    FUNC_5(&VAR_21, sizeof(VAR_21));
    VAR_21.dwSize=sizeof(VAR_21);
    VAR_21.dwFlags=VAR_2|VAR_1|VAR_0;
    VAR_18=FUNC_1(VAR_19,&VAR_21,&VAR_20,((void*)0));
    FUNC_7((VAR_18==VAR_13 && VAR_20!=((void*)0)) || (VAR_18==VAR_8),
       "IDirectSound_CreateSoundBuffer() failed to create a primary buffer: %08x\n",VAR_18);
    if (VAR_18==VAR_8)
        FUNC_10("  No Primary\n");
    else if (VAR_18==VAR_13 && VAR_20!=((void*)0)) {
        FUNC_9(VAR_19,&VAR_20,1,VAR_15,0,VAR_15,0,VAR_16 &&
                    !(VAR_22.dwFlags & VAR_7),1.0,0,((void*)0),0,0,
                    VAR_14,0);
        if (VAR_16) {
            LONG VAR_25,VAR_26;

            VAR_25 = VAR_5;
            for (VAR_24 = 0; VAR_24 < 6; VAR_24++) {
                FUNC_9(VAR_19,&VAR_20,1,VAR_15,VAR_25,VAR_15,0,
                            VAR_16 &&
                            !(VAR_22.dwFlags & VAR_7),
                            1.0,0,((void*)0),0,0,VAR_14,0);
                VAR_25 -= ((VAR_5-VAR_6) / 40);
            }

            VAR_26 = VAR_3;
            for (VAR_24 = 0; VAR_24 < 7; VAR_24++) {
                FUNC_9(VAR_19,&VAR_20,1,VAR_15,0,VAR_15,VAR_26,
                            VAR_16 &&
                            !(VAR_22.dwFlags & VAR_7),1.0,0,0,0,0,VAR_14,0);
                VAR_26 += ((VAR_4-VAR_3) / 6);
            }
        }
        VAR_23=FUNC_0(VAR_20);
        FUNC_7(VAR_23==0,"IDirectSoundBuffer_Release() primary has %d references, "
           "should have 0\n",VAR_23);
    }



    VAR_18=FUNC_4(VAR_19,FUNC_6(),VAR_11);
    FUNC_7(VAR_18==VAR_13,"IDirectSound_SetCooperativeLevel(DSSCL_NORMAL) failed: %08x\n", VAR_18);

EXIT:
    VAR_23=FUNC_3(VAR_19);
    FUNC_7(VAR_23==0,"IDirectSound_Release() has %d references, should have 0\n",VAR_23);
    if (VAR_23!=0)
        return VAR_9;

    return VAR_18;
}
