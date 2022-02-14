
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_2__ {int * Specific; int FuncTable; } ;


 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;

VOID* FUNC_0(ULONG VAR_2)
{
    if (VAR_2 >= VAR_1 || !VAR_0[VAR_2].FuncTable)
        return ((void*)0);
    return VAR_0[VAR_2].Specific;
}
