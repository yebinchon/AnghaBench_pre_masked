
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cbStruct; int paDetails; void* cbDetails; scalar_t__ cMultipleItems; void* cChannels; void* dwControlID; } ;
struct TYPE_5__ {scalar_t__ hmx; } ;
typedef TYPE_1__* PSND_MIXER ;
typedef TYPE_2__ MIXERCONTROLDETAILS ;
typedef int LPVOID ;
typedef int INT ;
typedef int HMIXEROBJ ;
typedef void* DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*,int) ;

INT
FUNC_1(PSND_MIXER VAR_3, DWORD VAR_4, DWORD VAR_5, DWORD VAR_6, LPVOID VAR_7)
{
    MIXERCONTROLDETAILS VAR_8;

    if (VAR_3->hmx)
    {
        VAR_8.cbStruct = sizeof(MIXERCONTROLDETAILS);
        VAR_8.dwControlID = VAR_4;
        VAR_8.cChannels = VAR_5;
        VAR_8.cMultipleItems = 0;
        VAR_8.cbDetails = VAR_6;
        VAR_8.paDetails = VAR_7;

        if (FUNC_0((HMIXEROBJ)VAR_3->hmx, &VAR_8, VAR_1 | VAR_0) == VAR_2)
        {
            return 1;
        }
    }

    return -1;
}
