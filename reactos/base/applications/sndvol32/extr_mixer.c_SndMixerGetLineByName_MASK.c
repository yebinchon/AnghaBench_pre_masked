
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ dwLineID; int szName; } ;
struct TYPE_9__ {scalar_t__ hmx; TYPE_1__* Lines; } ;
struct TYPE_8__ {TYPE_4__ Info; struct TYPE_8__* Next; } ;
struct TYPE_7__ {scalar_t__ DisplayControls; TYPE_2__* Connections; TYPE_4__ Info; struct TYPE_7__* Next; } ;
typedef TYPE_1__* PSND_MIXER_DESTINATION ;
typedef TYPE_2__* PSND_MIXER_CONNECTION ;
typedef TYPE_3__* PSND_MIXER ;
typedef int LPWSTR ;
typedef TYPE_4__* LPMIXERLINE ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ,int ) ;

LPMIXERLINE
FUNC_1(PSND_MIXER VAR_0,
                      DWORD VAR_1,
                      LPWSTR VAR_2)
{
    PSND_MIXER_DESTINATION VAR_3;
    PSND_MIXER_CONNECTION VAR_4;

    if (VAR_0->hmx == 0)
        return ((void*)0);

    for (VAR_3 = VAR_0->Lines; VAR_3 != ((void*)0); VAR_3 = VAR_3->Next)
    {
        if (VAR_3->Info.dwLineID == VAR_1)
        {
            if (VAR_3->DisplayControls != 0)
            {
                if (FUNC_0(VAR_3->Info.szName, VAR_2) == 0)
                {
                    return &VAR_3->Info;
                }
            }

            for (VAR_4 = VAR_3->Connections; VAR_4 != ((void*)0); VAR_4 = VAR_4->Next)
            {
                if (FUNC_0(VAR_4->Info.szName, VAR_2) == 0)
                {
                    return &VAR_4->Info;
                }
            }

            return ((void*)0);
        }
    }

    return ((void*)0);
}
