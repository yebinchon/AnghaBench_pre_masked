
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_9__ {int hFilter; } ;
struct TYPE_8__ {int * hPin; int dwFrequency; TYPE_6__* Filter; } ;
struct TYPE_7__ {int nSamplesPerSec; } ;
typedef TYPE_1__* LPWAVEFORMATEX ;
typedef int LPDIRECTSOUNDBUFFER8 ;
typedef TYPE_2__* LPCDirectSoundBuffer ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_6__*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,TYPE_1__*,int **,int ) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

HRESULT
FUNC_5(
    LPDIRECTSOUNDBUFFER8 VAR_9,
    LPWAVEFORMATEX VAR_10,
    BOOL VAR_11)
{
    ULONG VAR_12, VAR_13 = 0, VAR_14;
    LPCDirectSoundBuffer VAR_15 = (LPCDirectSoundBuffer)FUNC_0(VAR_9, VAR_0, VAR_8);

    if (VAR_15->hPin)
    {




        if (FUNC_4(VAR_15->hPin, VAR_10))
            return VAR_3;
        else
            return VAR_1;
    }

    do
    {

        VAR_12 = FUNC_2(VAR_15->Filter, VAR_5, VAR_13);
        FUNC_1("PinId %u DeviceId %u\n", VAR_12, VAR_13);

        if (VAR_12 == VAR_7)
            break;

        VAR_14 = FUNC_3(VAR_15->Filter->hFilter, VAR_12, (LPWAVEFORMATEX)VAR_10, &VAR_15->hPin, VAR_11);
        FUNC_1("PinId %u Result %u\n", VAR_12, VAR_14);
        if (VAR_14 == VAR_4)
        {
            VAR_15->dwFrequency = VAR_10->nSamplesPerSec;
            break;
        }

        VAR_15->hPin = ((void*)0);
        VAR_13++;
    }while(VAR_6);

    if (!VAR_15->hPin)
    {
        FUNC_1("PrimaryDirectSoundBuffer8Impl_fnSetFormat failed\n");
        return VAR_2;
    }

    FUNC_1("PrimaryDirectSoundBuffer8Impl_fnSetFormat success\n");
    return VAR_3;
}
