
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {scalar_t__ dwLineID; int szShortName; int szName; } ;
struct TYPE_6__ {TYPE_1__* Lines; scalar_t__ hmx; } ;
struct TYPE_5__ {TYPE_3__ Info; struct TYPE_5__* Next; } ;
typedef int TCHAR ;
typedef TYPE_1__* PSND_MIXER_DESTINATION ;
typedef TYPE_2__* PSND_MIXER ;
typedef int * LPTSTR ;
typedef TYPE_3__* LPMIXERLINE ;
typedef int INT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;

INT
FUNC_3(PSND_MIXER VAR_0,
                    DWORD VAR_1,
                    LPTSTR VAR_2,
                    UINT VAR_3,
                    BOOL VAR_4)
{
    if (VAR_0->hmx)
    {
        UINT VAR_5;
        PSND_MIXER_DESTINATION VAR_6;
        LPMIXERLINE VAR_7 = ((void*)0);

        for (VAR_6 = VAR_0->Lines; VAR_6 != ((void*)0); VAR_6 = VAR_6->Next)
        {
            if (VAR_6->Info.dwLineID == VAR_1)
            {
                VAR_7 = &VAR_6->Info;
                break;
            }
        }

        if (VAR_7 != ((void*)0))
        {
            VAR_5 = (UINT) FUNC_1(VAR_4 ? VAR_7->szName : VAR_7->szShortName);
            if(VAR_5 + 1 > VAR_3)
            {
                return VAR_5 + 1;
            }
            else
            {
                FUNC_2(VAR_2, VAR_4 ? VAR_7->szName : VAR_7->szShortName, VAR_5 * sizeof(TCHAR));
                VAR_2[VAR_5] = FUNC_0('\0');
                return VAR_5;
            }
        }
    }

    return -1;
}
