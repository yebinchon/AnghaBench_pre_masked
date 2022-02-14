
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ dwLineID; } ;
struct TYPE_11__ {TYPE_1__* Lines; scalar_t__ hmx; } ;
struct TYPE_10__ {TYPE_5__ Info; struct TYPE_10__* Next; } ;
struct TYPE_9__ {scalar_t__ DisplayControls; TYPE_2__* Connections; TYPE_5__ Info; struct TYPE_9__* Next; } ;
typedef int PVOID ;
typedef TYPE_1__* PSND_MIXER_DESTINATION ;
typedef TYPE_2__* PSND_MIXER_CONNECTION ;
typedef TYPE_3__* PSND_MIXER ;
typedef int (* PFNSNDMIXENUMCONNECTIONS ) (TYPE_3__*,scalar_t__,TYPE_5__*,int ) ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

BOOL
FUNC_0(PSND_MIXER VAR_2,
                        DWORD VAR_3,
                        PFNSNDMIXENUMCONNECTIONS VAR_4,
                        PVOID VAR_5)
{
    if (VAR_2->hmx)
    {
        PSND_MIXER_DESTINATION VAR_6;

        for (VAR_6 = VAR_2->Lines; VAR_6 != ((void*)0); VAR_6 = VAR_6->Next)
        {
            if (VAR_6->Info.dwLineID == VAR_3)
            {
                PSND_MIXER_CONNECTION VAR_7;

                if (VAR_6->DisplayControls != 0)
                {
                    if (!VAR_4(VAR_2,
                                  VAR_3,
                                  &VAR_6->Info,
                                  VAR_5))
                    {
                        return VAR_0;
                    }
                }

                for (VAR_7 = VAR_6->Connections; VAR_7 != ((void*)0); VAR_7 = VAR_7->Next)
                {
                    if (!VAR_4(VAR_2,
                                  VAR_3,
                                  &VAR_7->Info,
                                  VAR_5))
                    {
                        return VAR_0;
                    }
                }

                return VAR_1;
            }
        }
    }

    return VAR_0;
}
