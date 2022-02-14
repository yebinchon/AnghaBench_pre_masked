
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int wDest; size_t dwFlag; int szAbbr; } ;
typedef int PCWSTR ;
typedef size_t DWORD ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static DWORD FUNC_2(PCWSTR VAR_1, WORD VAR_2)
{
    DWORD VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3)
    {
        if (VAR_0[VAR_3].wDest & VAR_2)
        {
            if (!FUNC_1(VAR_1, VAR_0[VAR_3].szAbbr))
            {
                return VAR_0[VAR_3].dwFlag;
            }
        }
    }

    return 0;
}
