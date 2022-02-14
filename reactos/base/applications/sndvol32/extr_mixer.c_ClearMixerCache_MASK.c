
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {TYPE_1__* Lines; } ;
struct TYPE_6__ {struct TYPE_6__* Next; struct TYPE_6__* Controls; struct TYPE_6__* Connections; } ;
typedef TYPE_1__* PSND_MIXER_DESTINATION ;
typedef TYPE_1__* PSND_MIXER_CONNECTION ;
typedef TYPE_3__* PSND_MIXER ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static VOID
FUNC_2(PSND_MIXER VAR_0)
{
    PSND_MIXER_DESTINATION VAR_1, VAR_2;
    PSND_MIXER_CONNECTION VAR_3, VAR_4;

    for (VAR_1 = VAR_0->Lines; VAR_1 != ((void*)0); VAR_1 = VAR_2)
    {
        if (VAR_1->Controls != ((void*)0))
        {
            FUNC_1(FUNC_0(),
                     0,
                     VAR_1->Controls);
        }

        for (VAR_3 = VAR_1->Connections; VAR_3 != ((void*)0); VAR_3 = VAR_4)
        {
            if (VAR_3->Controls != ((void*)0))
            {
                FUNC_1(FUNC_0(),
                         0,
                         VAR_3->Controls);
            }

            VAR_4 = VAR_3->Next;
            FUNC_1(FUNC_0(),
                     0,
                     VAR_3);
        }

        VAR_2 = VAR_1->Next;
        FUNC_1(FUNC_0(),
                 0,
                 VAR_1);
    }
    VAR_0->Lines = ((void*)0);
}
