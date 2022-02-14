
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_16__ {int cbStruct; scalar_t__ szName; scalar_t__ dwSource; int dwDestination; } ;
struct TYPE_15__ {scalar_t__ hmx; } ;
struct TYPE_12__ {scalar_t__ cConnections; int dwDestination; } ;
struct TYPE_14__ {TYPE_2__* Connections; TYPE_1__ Info; } ;
struct TYPE_13__ {struct TYPE_13__* Next; scalar_t__ DisplayControls; int * Controls; TYPE_6__ Info; } ;
typedef TYPE_2__ SND_MIXER_CONNECTION ;
typedef TYPE_3__* PSND_MIXER_DESTINATION ;
typedef TYPE_2__* PSND_MIXER_CONNECTION ;
typedef TYPE_5__* PSND_MIXER ;
typedef scalar_t__ MMRESULT ;
typedef TYPE_6__ MIXERLINE ;
typedef int LineInfo ;
typedef int * LPMIXERCONTROL ;
typedef int HMIXEROBJ ;
typedef int BOOL ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_5__*,scalar_t__*,TYPE_6__*,int **) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,TYPE_6__*,int ) ;

__attribute__((used)) static BOOL
FUNC_6(PSND_MIXER VAR_5,
                         PSND_MIXER_DESTINATION VAR_6)
{
    UINT VAR_7, VAR_8;
    MIXERLINE VAR_9;
    MMRESULT VAR_10;
    BOOL VAR_11 = VAR_4;

    VAR_9.cbStruct = sizeof(VAR_9);
    for (VAR_7 = VAR_6->Info.cConnections; VAR_7 > 0; VAR_7--)
    {
        VAR_9.dwDestination = VAR_6->Info.dwDestination;
        VAR_9.dwSource = VAR_7 - 1;
        VAR_10 = FUNC_5((HMIXEROBJ)VAR_5->hmx,
                                  &VAR_9,
                                  VAR_2);
        if (VAR_10 == VAR_3)
        {
            LPMIXERCONTROL VAR_12 = ((void*)0);
            PSND_MIXER_CONNECTION VAR_13;

            FUNC_0("++ Source: %ws\n", VAR_9.szName);

            VAR_8 = 0;

            if (!FUNC_4(VAR_5,
                                       &VAR_8,
                                       &VAR_9,
                                       &VAR_12))
            {
                FUNC_0("Failed to query connection controls\n");
                VAR_11 = VAR_0;
                break;
            }

            VAR_13 = (SND_MIXER_CONNECTION*) FUNC_2(FUNC_1(),
                            VAR_1,
                            sizeof(SND_MIXER_CONNECTION));
            if (VAR_13 != ((void*)0))
            {
                VAR_13->Info = VAR_9;
                VAR_13->Controls = VAR_12;
                VAR_13->DisplayControls = VAR_8;
                VAR_13->Next = VAR_6->Connections;
                VAR_6->Connections = VAR_13;
            }
            else
            {
                FUNC_3(FUNC_1(),
                         0,
                         VAR_12);
            }
        }
        else
        {
            FUNC_0("Failed to get connection information: %d\n", VAR_10);
            VAR_11 = VAR_0;
            break;
        }
    }

    return VAR_11;
}
