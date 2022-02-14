
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fdwControl; int dwControlType; } ;
struct TYPE_5__ {scalar_t__ hmx; } ;
typedef TYPE_1__* PSND_MIXER ;
typedef TYPE_2__* LPMIXERCONTROL ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

BOOL
FUNC_0(PSND_MIXER VAR_4,
                         LPMIXERCONTROL VAR_5)
{
    if (VAR_4->hmx && !(VAR_5->fdwControl & VAR_1))
    {
        switch (VAR_5->dwControlType & VAR_2)
        {
            case 129:
            case 128:
                return VAR_3;
        }
    }

    return VAR_0;
}
