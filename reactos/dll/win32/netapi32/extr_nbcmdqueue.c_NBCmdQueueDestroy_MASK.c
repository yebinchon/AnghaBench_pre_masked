
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* DebugInfo; } ;
struct NBCmdQueue {int heap; TYPE_2__ cs; } ;
struct TYPE_3__ {scalar_t__* Spare; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,struct NBCmdQueue*) ;
 int FUNC_2 (struct NBCmdQueue*) ;
 int FUNC_3 (char*,struct NBCmdQueue*) ;

void FUNC_4(struct NBCmdQueue *VAR_0)
{
    FUNC_3(": queue %p\n", VAR_0);

    if (VAR_0)
    {
        FUNC_2(VAR_0);
        VAR_0->cs.DebugInfo->Spare[0] = 0;
        FUNC_0(&VAR_0->cs);
        FUNC_1(VAR_0->heap, 0, VAR_0);
    }
}
