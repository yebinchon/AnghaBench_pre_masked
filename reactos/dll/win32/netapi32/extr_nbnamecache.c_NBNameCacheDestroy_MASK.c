
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* DebugInfo; } ;
struct NBNameCache {int heap; scalar_t__ head; TYPE_2__ cs; } ;
struct TYPE_3__ {scalar_t__* Spare; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,struct NBNameCache*) ;
 int FUNC_2 (struct NBNameCache*,scalar_t__*) ;

void FUNC_3(struct NBNameCache *VAR_0)
{
    if (VAR_0)
    {
        VAR_0->cs.DebugInfo->Spare[0] = 0;
        FUNC_0(&VAR_0->cs);
        while (VAR_0->head)
            FUNC_2(VAR_0, &VAR_0->head);
        FUNC_1(VAR_0->heap, 0, VAR_0);
    }
}
