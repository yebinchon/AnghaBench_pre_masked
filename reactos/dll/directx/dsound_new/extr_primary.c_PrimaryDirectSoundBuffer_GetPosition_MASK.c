
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ WriteOffset; scalar_t__ PlayOffset; } ;
struct TYPE_5__ {int Flags; int Set; int Id; } ;
struct TYPE_4__ {int hPin; } ;
typedef int PVOID ;
typedef scalar_t__* LPDWORD ;
typedef int LPDIRECTSOUNDBUFFER8 ;
typedef TYPE_1__* LPCDirectSoundBuffer ;
typedef TYPE_2__ KSPROPERTY ;
typedef TYPE_3__ KSAUDIO_POSITION ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,int ,int,int *) ;
 int VAR_8 ;

HRESULT
FUNC_3(
    LPDIRECTSOUNDBUFFER8 VAR_9,
    LPDWORD VAR_10,
    LPDWORD VAR_11)
{
    KSAUDIO_POSITION VAR_12;
    KSPROPERTY VAR_13;
    DWORD VAR_14;
    LPCDirectSoundBuffer VAR_15 = (LPCDirectSoundBuffer)FUNC_0(VAR_9, VAR_0, VAR_8);



    if (!VAR_15->hPin)
    {
        if (VAR_10)
            *VAR_10 = 0;

        if (VAR_11)
            *VAR_11 = 0;

        FUNC_1("No Audio Pin\n");
        return VAR_2;
    }


    VAR_13.Id = VAR_5;
    VAR_13.Set = VAR_7;
    VAR_13.Flags = VAR_6;


    VAR_14 = FUNC_2(VAR_15->hPin, VAR_4, (PVOID)&VAR_13, sizeof(KSPROPERTY), (PVOID)&VAR_12, sizeof(KSAUDIO_POSITION), ((void*)0));

    if (VAR_14 != VAR_3)
    {
        FUNC_1("GetPosition failed with %x\n", VAR_14);
        return VAR_1;
    }



    if (VAR_10)
        *VAR_10 = (DWORD)VAR_12.PlayOffset;

    if (VAR_11)
        *VAR_11 = (DWORD)VAR_12.WriteOffset;

    return VAR_2;
}
