
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ id; scalar_t__ magic; } ;
typedef scalar_t__ DWORD ;


 TYPE_1__* VAR_0 ;
 unsigned int VAR_1 ;

DWORD FUNC_0(DWORD VAR_2, DWORD *VAR_3)
{
    unsigned int VAR_4;
    for (VAR_4 = *VAR_3; VAR_4 < VAR_1; VAR_4++)
        if (VAR_0[VAR_4].id != 0 && VAR_0[VAR_4].magic == VAR_2)
        {
            *VAR_3 = (VAR_4+1);
            return VAR_0[VAR_4].id;
        }
    return 0x0;
}
