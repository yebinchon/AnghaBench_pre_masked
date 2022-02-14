
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_11__ {TYPE_2__* DebugInfo; } ;
struct TYPE_8__ {TYPE_3__* lpvBuffer; } ;
struct TYPE_10__ {TYPE_7__ cs; TYPE_1__ inet_buffers; int completion_event; int refs; } ;
struct TYPE_9__ {scalar_t__* Spare; } ;
typedef TYPE_3__ RpcHttpAsyncData ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,TYPE_3__*) ;

__attribute__((used)) static ULONG FUNC_6(RpcHttpAsyncData *VAR_0)
{
    ULONG VAR_1 = FUNC_4(&VAR_0->refs);
    if (!VAR_1)
    {
        FUNC_5("destroying async data %p\n", VAR_0);
        FUNC_0(VAR_0->completion_event);
        FUNC_3(FUNC_2(), 0, VAR_0->inet_buffers.lpvBuffer);
        VAR_0->cs.DebugInfo->Spare[0] = 0;
        FUNC_1(&VAR_0->cs);
        FUNC_3(FUNC_2(), 0, VAR_0);
    }
    return VAR_1;
}
