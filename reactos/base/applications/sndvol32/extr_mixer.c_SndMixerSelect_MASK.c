
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {scalar_t__ MixersCount; scalar_t__ MixerId; int * hmx; int Caps; scalar_t__ hWndNotification; } ;
typedef TYPE_1__* PSND_MIXER ;
typedef int DWORD_PTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int *,int) ;
 scalar_t__ FUNC_5 (int **,scalar_t__,int ,int ,int) ;

BOOL
FUNC_6(PSND_MIXER VAR_5,
               UINT VAR_6)
{
    if (VAR_6 >= VAR_5->MixersCount)
    {
        return VAR_1;
    }

    FUNC_1(VAR_5);

    if (FUNC_5(&VAR_5->hmx,
                  VAR_6,
                  (DWORD_PTR)VAR_5->hWndNotification,
                  0,
                  VAR_0 | VAR_2) == VAR_3 ||
        FUNC_5(&VAR_5->hmx,
                  VAR_6,
                  (DWORD_PTR)VAR_5->hWndNotification,
                  0,
                  VAR_0) == VAR_3 ||
        FUNC_5(&VAR_5->hmx,
                  VAR_6,
                  0,
                  0,
                  0) == VAR_3)
    {
        if (FUNC_4(VAR_6,
                            &VAR_5->Caps,
                            sizeof(VAR_5->Caps)) == VAR_3)
        {
            BOOL VAR_7 = VAR_1;

            VAR_5->MixerId = VAR_6;

            FUNC_0(VAR_5);

            VAR_7 = FUNC_2(VAR_5);

            if (!VAR_7)
            {
                FUNC_0(VAR_5);
            }

            return VAR_7;
        }
        else
        {
            FUNC_3(VAR_5->hmx);
        }
    }

    VAR_5->hmx = ((void*)0);
    VAR_5->MixerId = VAR_4;
    return VAR_1;
}
