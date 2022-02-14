
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_16__ {int cControls; int dwLineID; } ;
struct TYPE_15__ {int dwControlType; int fdwControl; int szName; } ;
struct TYPE_14__ {int cbStruct; size_t cControls; int cbmxctrl; TYPE_3__* pamxctrl; int dwLineID; } ;
struct TYPE_13__ {scalar_t__ hmx; } ;
typedef int * PUINT ;
typedef TYPE_1__* PSND_MIXER ;
typedef scalar_t__ MMRESULT ;
typedef TYPE_2__ MIXERLINECONTROLS ;
typedef TYPE_3__ MIXERCONTROL ;
typedef int LineControls ;
typedef TYPE_4__* LPMIXERLINE ;
typedef TYPE_3__* LPMIXERCONTROL ;
typedef int HMIXEROBJ ;
typedef int BOOL ;


 int FUNC_0 (char*,int ,scalar_t__,...) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*,int ) ;

BOOL
FUNC_6(PSND_MIXER VAR_5,
                      PUINT VAR_6,
                      LPMIXERLINE VAR_7,
                      LPMIXERCONTROL *VAR_8)
{
    if (VAR_7->cControls > 0)
    {
        *VAR_8 = (MIXERCONTROL*) FUNC_2(FUNC_1(),
                              VAR_1,
                              VAR_7->cControls * sizeof(MIXERCONTROL));
        if (*VAR_8 != ((void*)0))
        {
            MIXERLINECONTROLS VAR_9;
            MMRESULT VAR_10;
            UINT VAR_11;

            VAR_9.cbStruct = sizeof(VAR_9);
            VAR_9.dwLineID = VAR_7->dwLineID;
            VAR_9.cControls = VAR_7->cControls;
            VAR_9.cbmxctrl = sizeof(MIXERCONTROL);
            VAR_9.pamxctrl = (MIXERCONTROL*)(*VAR_8);

            VAR_10 = FUNC_5((HMIXEROBJ)VAR_5->hmx,
                                          &VAR_9,
                                          VAR_2);
            if (VAR_10 == VAR_3)
            {
                for (VAR_11 = 0; VAR_11 < VAR_9.cControls; VAR_11++)
                {
                    if (FUNC_4(VAR_5,
                                                 &(*VAR_8)[VAR_11]))
                    {
                        (*VAR_6)++;
                    }

                    FUNC_0("Line control: %ws (0x%x, 0x%x)\n", (*VAR_8)[VAR_11].szName, (*VAR_8)[VAR_11].fdwControl, (*VAR_8)[VAR_11].dwControlType);
                }

                return VAR_4;
            }
            else
            {
                FUNC_3(FUNC_1(),
                         0,
                         *VAR_8);
                *VAR_8 = ((void*)0);
                FUNC_0("Failed to get line (ID: 0x%x) controls: %d\n", VAR_7->dwLineID, VAR_10);
            }
        }
        else
        {
            FUNC_0("Failed to allocate memory for %d line (ID: 0x%x) controls!\n", VAR_7->dwLineID, VAR_7->cControls);
        }

        return VAR_0;
    }
    else
    {
        return VAR_4;
    }
}
