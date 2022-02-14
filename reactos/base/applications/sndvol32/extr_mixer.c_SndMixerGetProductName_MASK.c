
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int szPname; } ;
struct TYPE_5__ {TYPE_1__ Caps; scalar_t__ hmx; } ;
typedef int TCHAR ;
typedef TYPE_2__* PSND_MIXER ;
typedef int * LPTSTR ;
typedef int INT ;


 int FUNC_0 (char) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;

INT
FUNC_3(PSND_MIXER VAR_0,
                       LPTSTR VAR_1,
                       UINT VAR_2)
{
    if (VAR_0->hmx)
    {
        UINT VAR_3 = (UINT) FUNC_1(VAR_0->Caps.szPname);
        if(VAR_3 + 1 > VAR_2)
        {
            return VAR_3 + 1;
        }
        else
        {
            FUNC_2(VAR_1, VAR_0->Caps.szPname, VAR_3 * sizeof(TCHAR));
            VAR_1[VAR_3] = FUNC_0('\0');
            return VAR_3;
        }
    }

    return -1;
}
