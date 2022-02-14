
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {size_t ncb_lsn; int ncb_lana_num; } ;
struct TYPE_9__ {size_t sessionsLen; TYPE_1__* sessions; } ;
struct TYPE_8__ {scalar_t__ inUse; } ;
typedef TYPE_2__ NetBIOSAdapter ;
typedef TYPE_3__ NCB ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__ const*) ;

void FUNC_2(const NCB *VAR_0)
{
    NetBIOSAdapter *VAR_1;

    if (!VAR_0) return;

    VAR_1 = FUNC_0(VAR_0->ncb_lana_num);
    if (VAR_1)
    {
        if (VAR_0->ncb_lsn < VAR_1->sessionsLen &&
         VAR_1->sessions[VAR_0->ncb_lsn].inUse)
            FUNC_1(VAR_1, VAR_0);
    }
}
