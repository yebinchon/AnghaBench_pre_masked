
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* DebugInfo; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_11__ {TYPE_7__ cs; int cmdQueue; TYPE_1__ impl; TYPE_3__* transport; int shuttingDown; } ;
struct TYPE_10__ {int (* cleanupAdapter ) (int ) ;} ;
struct TYPE_9__ {scalar_t__* Spare; } ;
typedef TYPE_4__ NetBIOSAdapter ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(NetBIOSAdapter *VAR_1)
{
    if (VAR_1)
    {
        VAR_1->shuttingDown = VAR_0;
        FUNC_1(VAR_1->cmdQueue);
        if (VAR_1->transport->cleanupAdapter)
            VAR_1->transport->cleanupAdapter(VAR_1->impl.data);
        FUNC_2(VAR_1->cmdQueue);
        VAR_1->cs.DebugInfo->Spare[0] = 0;
        FUNC_0(&VAR_1->cs);
        FUNC_3(VAR_1, 0, sizeof(NetBIOSAdapter));
    }
}
