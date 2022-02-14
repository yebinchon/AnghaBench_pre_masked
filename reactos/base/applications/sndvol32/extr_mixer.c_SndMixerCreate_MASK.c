
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {scalar_t__ MixersCount; int MixerId; int hWndNotification; } ;
typedef int SND_MIXER ;
typedef TYPE_1__* PSND_MIXER ;
typedef int HWND ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 () ;

PSND_MIXER
FUNC_4(HWND VAR_2, UINT VAR_3)
{
    PSND_MIXER VAR_4 = (PSND_MIXER) FUNC_1(FUNC_0(),
                                 VAR_0,
                                 sizeof(SND_MIXER));
    if (VAR_4 != ((void*)0))
    {
        VAR_4->hWndNotification = VAR_2;
        VAR_4->MixersCount = FUNC_3();
        VAR_4->MixerId = VAR_1;

        if (VAR_4->MixersCount > 0)
        {

            FUNC_2(VAR_4, VAR_3);
        }
    }

    return VAR_4;
}
