
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_4__ {int DeviceId; int * Specific; TYPE_1__* FuncTable; } ;
struct TYPE_3__ {scalar_t__ (* Close ) (size_t) ;} ;
typedef scalar_t__ ARC_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (size_t) ;

ARC_STATUS FUNC_1(ULONG VAR_4)
{
    ARC_STATUS VAR_5;

    if (VAR_4 >= VAR_3 || !VAR_2[VAR_4].FuncTable)
        return VAR_0;

    VAR_5 = VAR_2[VAR_4].FuncTable->Close(VAR_4);

    if (VAR_5 == VAR_1)
    {
        VAR_2[VAR_4].FuncTable = ((void*)0);
        VAR_2[VAR_4].Specific = ((void*)0);
        VAR_2[VAR_4].DeviceId = -1;
    }
    return VAR_5;
}
