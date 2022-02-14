
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* Lines; scalar_t__ hmx; } ;
struct TYPE_6__ {int DisplayControls; int Info; struct TYPE_6__* Next; } ;
typedef int PVOID ;
typedef TYPE_1__* PSND_MIXER_DESTINATION ;
typedef TYPE_2__* PSND_MIXER ;
typedef int (* PFNSNDMIXENUMLINES ) (TYPE_2__*,int *,int ,int ) ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

BOOL
FUNC_0(PSND_MIXER VAR_2,
                  PFNSNDMIXENUMLINES VAR_3,
                  PVOID VAR_4)
{
    if (VAR_2->hmx)
    {
        PSND_MIXER_DESTINATION VAR_5;

        for (VAR_5 = VAR_2->Lines; VAR_5 != ((void*)0); VAR_5 = VAR_5->Next)
        {
            if (!VAR_3(VAR_2,
                          &VAR_5->Info,
                          VAR_5->DisplayControls,
                          VAR_4))
            {
                return VAR_0;
            }
        }

        return VAR_1;
    }

    return VAR_0;
}
