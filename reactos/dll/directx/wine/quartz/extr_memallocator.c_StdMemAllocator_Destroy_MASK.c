
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* DebugInfo; } ;
struct TYPE_7__ {TYPE_4__ csState; } ;
struct TYPE_6__ {scalar_t__* Spare; } ;
typedef TYPE_2__ StdMemAllocator ;
typedef int IMemAllocator ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_2__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(IMemAllocator *VAR_0)
{
    StdMemAllocator *VAR_1 = FUNC_2(VAR_0);

    VAR_1->csState.DebugInfo->Spare[0] = 0;
    FUNC_1(&VAR_1->csState);

    FUNC_0(VAR_1);
}
