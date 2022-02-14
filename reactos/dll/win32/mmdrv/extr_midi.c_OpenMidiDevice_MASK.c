
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int hMidi; int dwInstance; int dwCallback; } ;
struct TYPE_8__ {TYPE_1__* Bufs; } ;
struct TYPE_7__ {int DeviceType; int * AuxEvent2; int * AuxEvent1; void* Event; int DeviceHandle; scalar_t__ dwFlags; int hMidi; int dwInstance; int dwCallback; TYPE_3__* Mid; } ;
struct TYPE_6__ {TYPE_2__* pClient; } ;
typedef TYPE_2__* PMIDIALLOC ;
typedef TYPE_3__* PLOCALMIDIDATA ;
typedef scalar_t__ MMRESULT ;
typedef int MIDIALLOC ;
typedef TYPE_4__* LPMIDIOPENDESC ;
typedef int LOCALMIDIDATA ;
typedef scalar_t__ DWORD ;


 void* FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;


 scalar_t__ FUNC_3 (int,scalar_t__,int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;

__attribute__((used)) static DWORD FUNC_6(UINT VAR_8, DWORD VAR_9, DWORD VAR_10, DWORD VAR_11, DWORD VAR_12)
{
    PMIDIALLOC VAR_13 = ((void*)0);
    MMRESULT VAR_14 = VAR_6;


    FUNC_1("OpenMidiDevice()\n");

    switch(VAR_8)
    {
        case 128 :
            VAR_13 = (PMIDIALLOC) FUNC_2(VAR_3, 0, sizeof(MIDIALLOC));
            if ( VAR_13 ) FUNC_5(VAR_13, 0, sizeof(MIDIALLOC));
            break;

        case 129 :
            VAR_13 = (PMIDIALLOC) FUNC_2(VAR_3, 0, sizeof(MIDIALLOC) + sizeof(LOCALMIDIDATA));
   if ( VAR_13 ) FUNC_5(VAR_13, 0, sizeof(MIDIALLOC) + sizeof(LOCALMIDIDATA));
            break;
    };

    if ( !VAR_13 )
        return VAR_7;

 if (VAR_8 == 129)
 {
        int VAR_15;
        VAR_13->Mid = (PLOCALMIDIDATA)(VAR_13 + 1);
        for (VAR_15 = 0 ;VAR_15 < VAR_5 ; VAR_15++)
  {
            VAR_13->Mid->Bufs[VAR_15].pClient = VAR_13;
        }
    }

    VAR_13->DeviceType = VAR_8;
    VAR_13->dwCallback = ((LPMIDIOPENDESC)VAR_11)->dwCallback;
    VAR_13->dwInstance = ((LPMIDIOPENDESC)VAR_11)->dwInstance;
    VAR_13->hMidi = ((LPMIDIOPENDESC)VAR_11)->hMidi;
    VAR_13->dwFlags = VAR_12;

    VAR_14 = FUNC_3(VAR_8, VAR_9, &VAR_13->DeviceHandle, (VAR_1 | VAR_2));

    if ( VAR_14 != VAR_6 )
    {

        return VAR_14;
    }

    VAR_13->Event = FUNC_0(((void*)0), VAR_0, VAR_0, ((void*)0));

    if ( !VAR_13->Event )
    {

        return VAR_7;
    }

 if (VAR_8 == 129)
 {

        VAR_13->AuxEvent1 = FUNC_0(((void*)0), VAR_0, VAR_0, ((void*)0));
        if (VAR_13->AuxEvent1 == ((void*)0))
  {

            return VAR_7;
        }

  VAR_13->AuxEvent2 = FUNC_0(((void*)0), VAR_0, VAR_0, ((void*)0));
        if (VAR_13->AuxEvent2 == ((void*)0))
  {

            return VAR_7;
        }





       FUNC_4(VAR_13->AuxEvent2, VAR_4);
    }

    PMIDIALLOC *VAR_16;
    VAR_16 = (PMIDIALLOC*) VAR_10;
    *VAR_16 = VAR_13;



    return VAR_6;
}
