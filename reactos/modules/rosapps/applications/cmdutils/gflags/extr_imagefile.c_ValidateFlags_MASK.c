
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int wDest; size_t dwFlag; } ;
typedef size_t DWORD ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static DWORD FUNC_1(DWORD VAR_1, WORD VAR_2)
{
    DWORD VAR_3;
    DWORD VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3)
    {
        if (VAR_0[VAR_3].wDest & VAR_2)
        {
            VAR_4 |= VAR_0[VAR_3].dwFlag;
        }
    }

    return VAR_1 & VAR_4;
}
