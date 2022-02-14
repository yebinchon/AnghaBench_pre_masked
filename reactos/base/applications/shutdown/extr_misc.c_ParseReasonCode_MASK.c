
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int major; int minor; int flag; scalar_t__ prefix; } ;
typedef TYPE_1__* PREASON ;
typedef int * LPWSTR ;
typedef int* LPCWSTR ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int*) ;

DWORD FUNC_2(LPCWSTR VAR_2)
{
    PREASON VAR_3;
    int VAR_4 = 0;
    int VAR_5 = 0;
    LPWSTR VAR_6 = ((void*)0);
    size_t VAR_7;


    if(VAR_2 == ((void*)0))
    {
        return VAR_0;
    }
    else
    {

        VAR_7 = (size_t)FUNC_1(VAR_2);


        if ((VAR_2[0] == L':') || (VAR_2[VAR_7] == L':'))
        {
            return VAR_0;
        }


        if ((VAR_7 < 5) || (VAR_7 > 7))
        {
            return VAR_0;
        }




        if ((VAR_4 > 7 ) || (VAR_4 < 0) ||
            (VAR_5 > 20) || (VAR_5 < 0))
        {
            return VAR_0;
        }


        for (VAR_3 = VAR_1 ; VAR_3->prefix ; VAR_3++)
        {
            if ((VAR_4 == VAR_3->major) &&
                (VAR_5 == VAR_3->minor) &&
                (FUNC_0(VAR_6, VAR_3->prefix) != 0))
            {
                return VAR_3->flag;
            }
        }
    }

    return VAR_0;
}
