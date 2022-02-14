
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONG64 ;
typedef size_t ULONG ;
struct TYPE_10__ {scalar_t__ PageFrameNumber; int Valid; } ;
struct TYPE_9__ {int Valid; scalar_t__ PageFrameNumber; } ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__* PHARDWARE_PTE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 (TYPE_1__*) ;

BOOLEAN
FUNC_4(PVOID VAR_4)
{
    PHARDWARE_PTE VAR_5, VAR_6, VAR_7;
    ULONG VAR_8;

    VAR_8 = FUNC_3(VAR_4);
    if (!VAR_2[VAR_8].Valid)
        return VAR_0;

    VAR_5 = (PVOID)((ULONG64)(VAR_2[VAR_8].PageFrameNumber) * VAR_1);
    VAR_8 = FUNC_1(VAR_4);
    if (!VAR_5[VAR_8].Valid)
        return VAR_0;

    VAR_6 = (PVOID)((ULONG64)(VAR_5[VAR_8].PageFrameNumber) * VAR_1);
    VAR_8 = FUNC_0(VAR_4);
    if (!VAR_6[VAR_8].Valid)
        return VAR_0;

    VAR_7 = (PVOID)((ULONG64)(VAR_6[VAR_8].PageFrameNumber) * VAR_1);
    VAR_8 = FUNC_2(VAR_4);
    if (!VAR_7[VAR_8].Valid)
        return VAR_0;

    return VAR_3;
}
