
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_15__ {int cbStruct; int dwComponentType; int dwLineID; int szName; scalar_t__ dwDestination; } ;
struct TYPE_12__ {scalar_t__ cDestinations; } ;
struct TYPE_14__ {TYPE_2__* Lines; scalar_t__ hmx; TYPE_1__ Caps; } ;
struct TYPE_13__ {struct TYPE_13__* Next; int Controls; TYPE_5__ Info; int DisplayControls; } ;
typedef TYPE_2__ SND_MIXER_DESTINATION ;
typedef TYPE_2__* PSND_MIXER_DESTINATION ;
typedef TYPE_4__* PSND_MIXER ;
typedef int HMIXEROBJ ;
typedef int BOOL ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*,int *,TYPE_5__*,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,TYPE_5__*,int ) ;

__attribute__((used)) static BOOL
FUNC_7(PSND_MIXER VAR_5)
{
    UINT VAR_6;
    BOOL VAR_7 = VAR_4;

    for (VAR_6 = VAR_5->Caps.cDestinations; VAR_6 > 0; VAR_6--)
    {
        PSND_MIXER_DESTINATION VAR_8;

        VAR_8 = (SND_MIXER_DESTINATION*) FUNC_2(FUNC_1(),
                         VAR_1,
                         sizeof(SND_MIXER_DESTINATION));
        if (VAR_8 != ((void*)0))
        {
            VAR_8->Info.cbStruct = sizeof(VAR_8->Info);
            VAR_8->Info.dwDestination = VAR_6 - 1;
            if (FUNC_6((HMIXEROBJ)VAR_5->hmx,
                                 &VAR_8->Info,
                                 VAR_2) == VAR_3)
            {
                FUNC_0("+ Destination: %ws (0x%x, %d)\n", VAR_8->Info.szName, VAR_8->Info.dwLineID, VAR_8->Info.dwComponentType);

                if (!FUNC_5(VAR_5,
                                           &VAR_8->DisplayControls,
                                           &VAR_8->Info,
                                           &VAR_8->Controls))
                {
                    FUNC_0("Failed to query mixer controls!\n");
                    VAR_7 = VAR_0;
                    break;
                }

                if (!FUNC_4(VAR_5, VAR_8))
                {
                    FUNC_0("Failed to query mixer connections!\n");
                    VAR_7 = VAR_0;
                    break;
                }

                VAR_8->Next = VAR_5->Lines;
                VAR_5->Lines = VAR_8;
            }
            else
            {
                FUNC_0("Failed to get line information for id %d!\n", VAR_6);
                FUNC_3(FUNC_1(),
                         0,
                         VAR_8);
                VAR_7 = VAR_0;
                break;
            }
        }
        else
        {
            FUNC_0("Allocation of SND_MIXER_DEST structure for id %d failed!\n", VAR_6);
            VAR_7 = VAR_0;
            break;
        }
    }

    return VAR_7;
}
