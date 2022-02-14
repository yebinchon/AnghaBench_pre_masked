
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t TAG ;
typedef size_t DWORD ;


 int VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;

__attribute__((used)) static DWORD FUNC_0(TAG VAR_3)
{
    DWORD VAR_4;
    TAG* VAR_5;
    switch (VAR_0)
    {
    case 26:
        VAR_5 = VAR_1;
        break;
    case 28:
        VAR_5 = VAR_2;
        break;
    default:
        return ~0;
    }

    for (VAR_4 = 0; VAR_4 < VAR_5[VAR_4]; ++VAR_4)
    {
        if (VAR_5[VAR_4] == VAR_3)
            return VAR_4;
    }
    return ~0;
}
