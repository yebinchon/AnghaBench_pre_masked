
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t UCHAR ;
struct TYPE_12__ {int data; } ;
struct TYPE_18__ {TYPE_2__ impl; TYPE_1__* transport; } ;
struct TYPE_17__ {TYPE_4__* DebugInfo; } ;
struct TYPE_16__ {size_t tableSize; TYPE_8__* table; TYPE_7__ cs; } ;
struct TYPE_13__ {int (* cleanup ) () ;} ;
struct TYPE_15__ {TYPE_3__ transport; } ;
struct TYPE_14__ {scalar_t__* Spare; } ;
struct TYPE_11__ {int (* cleanupAdapter ) (int ) ;} ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_8__*) ;
 int FUNC_4 (TYPE_7__*) ;
 TYPE_6__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

void FUNC_7(void)
{
    UCHAR VAR_3;

    FUNC_1(&VAR_0.cs);
    for (VAR_3 = 0; VAR_3 < VAR_0.tableSize; VAR_3++)
    {
        if (VAR_0.table[VAR_3].transport &&
         VAR_0.table[VAR_3].transport->cleanupAdapter)
            VAR_0.table[VAR_3].transport->cleanupAdapter(
             VAR_0.table[VAR_3].impl.data);
    }
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        if (VAR_2[VAR_3].transport.cleanup)
            VAR_2[VAR_3].transport.cleanup();
    FUNC_4(&VAR_0.cs);
    VAR_0.cs.DebugInfo->Spare[0] = 0;
    FUNC_0(&VAR_0.cs);
    FUNC_3(FUNC_2(), 0, VAR_0.table);
}
