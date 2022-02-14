
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_2__ {scalar_t__ id; int * data; } ;
typedef int * LPVOID ;
typedef size_t DWORD ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

LPVOID FUNC_0(DWORD VAR_2)
{
    UINT VAR_3 = VAR_2 - 1;

    if (VAR_3 >= VAR_1)
        return ((void*)0);

    if (VAR_0[VAR_3].id == 0)
        return ((void*)0);

    return VAR_0[VAR_3].data;
}
