
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_2__ {scalar_t__ value; } ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

DWORD FUNC_0(UINT VAR_3)
{
    if (VAR_3 < VAR_0 && VAR_2)
    {
        return ((DWORD *)VAR_2->value)[VAR_1] * 10;
    }
    return 0;
}
