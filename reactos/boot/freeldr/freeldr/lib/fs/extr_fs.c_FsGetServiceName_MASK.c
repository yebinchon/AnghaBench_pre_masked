
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_4__ {TYPE_1__* FuncTable; } ;
struct TYPE_3__ {int * ServiceName; } ;
typedef int * PCWSTR ;


 TYPE_2__* VAR_0 ;
 size_t VAR_1 ;

PCWSTR FUNC_0(ULONG VAR_2)
{
    if (VAR_2 >= VAR_1 || !VAR_0[VAR_2].FuncTable)
        return ((void*)0);
    return VAR_0[VAR_2].FuncTable->ServiceName;
}
