
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wic ;
struct TYPE_8__ {int wChannels; int dwFormats; int szPname; } ;
typedef TYPE_1__ WAVEINCAPSA ;
typedef int UINT ;
struct TYPE_11__ {int dwSize; int dwChannels; int dwFormats; int dwFlags; } ;
struct TYPE_10__ {int dwFlags; unsigned int dnDevNode; int szDrvname; } ;
struct TYPE_9__ {TYPE_5__ drvcaps; TYPE_4__ drvdesc; int * driver; int guid; } ;
typedef int * LPCGUID ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef TYPE_2__ DirectSoundCaptureDevice ;
typedef int DWORD_PTR ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__* VAR_9 ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (TYPE_2__**) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_16 ;
 int FUNC_10 (int ,int ,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,TYPE_1__*,int) ;
 unsigned int FUNC_13 () ;
 int FUNC_14 (int ,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_15(
    DirectSoundCaptureDevice ** VAR_17,
    LPCGUID VAR_18)
{
    HRESULT VAR_19 = VAR_6;
    unsigned VAR_20, VAR_21;
    BOOLEAN VAR_22 = VAR_13;
    GUID VAR_23;
    DirectSoundCaptureDevice *VAR_24 = *VAR_17;
    FUNC_6("(%p, %s)\n", VAR_17, FUNC_9(VAR_18));


    if ( !VAR_18 || FUNC_5(VAR_18, &VAR_14) )
 VAR_18 = &VAR_4;

    if (FUNC_1(VAR_18, &VAR_23) != VAR_12) {
        FUNC_8("invalid parameter: lpcGUID\n");
        return VAR_6;
    }

    VAR_21 = FUNC_13();
    if (!VAR_21) {
 FUNC_8("no audio devices found\n");
 return VAR_7;
    }


    for (VAR_20=0; VAR_20<VAR_21; VAR_20++) {
 if (FUNC_5( &VAR_23, &VAR_10[VAR_20]) ) {
     VAR_22 = VAR_15;
     break;
 }
    }

    if (VAR_22 == VAR_13) {
 FUNC_8("No device found matching given ID!\n");
 return VAR_7;
    }

    if (VAR_9[VAR_20]) {
        FUNC_8("already in use\n");
        return VAR_5;
    }

    VAR_19 = FUNC_0(&(VAR_24));
    if (VAR_19 != VAR_12) {
        FUNC_8("DirectSoundCaptureDevice_Create failed\n");
        return VAR_19;
    }

    *VAR_17 = VAR_24;
    VAR_24->guid = VAR_23;


    VAR_24->driver = ((void*)0);
    if (VAR_16 != VAR_11)
    {
        VAR_19 = FUNC_11(FUNC_14(FUNC_7(VAR_20),VAR_0,(DWORD_PTR)&VAR_24->driver,0));
        if ( (VAR_19 != VAR_12) && (VAR_19 != VAR_8) ) {
            FUNC_8("waveInMessage failed; err=%x\n",VAR_19);
            return VAR_19;
        }
    }
    VAR_19 = VAR_12;


    if (VAR_24->driver) {
        FUNC_6("using DirectSound driver\n");
        VAR_19 = FUNC_3(VAR_24->driver, &(VAR_24->drvdesc));
 if (VAR_19 != VAR_12) {
     FUNC_8("IDsCaptureDriver_GetDriverDesc failed\n");
     return VAR_19;
 }
    } else {
        FUNC_6("using WINMM\n");

        VAR_24->drvdesc.dwFlags = VAR_2 |
            VAR_3;
    }

    VAR_24->drvdesc.dnDevNode = VAR_20;


    if (VAR_24->driver && (VAR_19 == VAR_12))
        VAR_19 = FUNC_4(VAR_24->driver);

    if (VAR_19 == VAR_12) {
        *VAR_17 = VAR_24;


        if (VAR_24->driver) {
     VAR_24->drvcaps.dwSize = sizeof(VAR_24->drvcaps);
            VAR_19 = FUNC_2(VAR_24->driver,&(VAR_24->drvcaps));
     if (VAR_19 != VAR_12) {
  FUNC_8("IDsCaptureDriver_GetCaps failed\n");
  return VAR_19;
     }
        } else {
            WAVEINCAPSA VAR_25;
            VAR_19 = FUNC_11(FUNC_12((UINT)VAR_24->drvdesc.dnDevNode, &VAR_25, sizeof(VAR_25)));

            if (VAR_19 == VAR_12) {
                VAR_24->drvcaps.dwFlags = 0;
                FUNC_10(VAR_24->drvdesc.szDrvname, VAR_25.szPname,
                          sizeof(VAR_24->drvdesc.szDrvname));

                VAR_24->drvcaps.dwFlags |= VAR_1;
                VAR_24->drvcaps.dwFormats = VAR_25.dwFormats;
                VAR_24->drvcaps.dwChannels = VAR_25.wChannels;
            }
        }
    }

    return VAR_19;
}
