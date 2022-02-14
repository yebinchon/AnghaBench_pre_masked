
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* lpNext; int * DeviceGuid; } ;
typedef TYPE_1__* LPFILTERINFO ;
typedef int LPCGUID ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

BOOL
FUNC_1(
    LPCGUID VAR_3,
    LPFILTERINFO *VAR_4)
{
    LPFILTERINFO VAR_5;
    if (!VAR_1)
        return VAR_0;


    VAR_5 = VAR_1;

    while(VAR_5)
    {
        if (FUNC_0(&VAR_5->DeviceGuid[0], VAR_3) ||
            FUNC_0(&VAR_5->DeviceGuid[1], VAR_3))
        {

            *VAR_4 = VAR_5;
            return VAR_2;
        }

        VAR_5 = VAR_5->lpNext;
    }

    return VAR_0;
}
