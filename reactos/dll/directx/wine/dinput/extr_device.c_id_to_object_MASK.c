
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwType; } ;
struct TYPE_5__ {int dwNumObjs; } ;
typedef TYPE_1__* LPCDIDATAFORMAT ;


 TYPE_3__* FUNC_0 (TYPE_1__*,int) ;

int FUNC_1(LPCDIDATAFORMAT VAR_0, int VAR_1)
{
    int VAR_2;

    VAR_1 &= 0x00ffffff;
    for (VAR_2 = 0; VAR_2 < VAR_0->dwNumObjs; VAR_2++)
        if ((FUNC_0(VAR_0, VAR_2)->dwType & 0x00ffffff) == VAR_1)
            return VAR_2;

    return -1;
}
