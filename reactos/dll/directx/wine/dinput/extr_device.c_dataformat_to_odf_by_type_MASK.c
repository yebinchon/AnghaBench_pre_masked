
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dwNumObjs; } ;
struct TYPE_7__ {int dwType; } ;
typedef TYPE_1__* LPDIOBJECTDATAFORMAT ;
typedef TYPE_2__* LPCDIDATAFORMAT ;
typedef int DWORD ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int) ;

LPDIOBJECTDATAFORMAT FUNC_1(LPCDIDATAFORMAT VAR_0, int VAR_1, DWORD VAR_2)
{
    int VAR_3, VAR_4 = 0;

    for (VAR_3=0; VAR_3 < VAR_0->dwNumObjs; VAR_3++)
    {
        LPDIOBJECTDATAFORMAT VAR_5 = FUNC_0(VAR_0, VAR_3);

        if (VAR_5->dwType & VAR_2)
        {
            if (VAR_1 == VAR_4)
                return VAR_5;

            VAR_4++;
        }
    }

    return ((void*)0);
}
