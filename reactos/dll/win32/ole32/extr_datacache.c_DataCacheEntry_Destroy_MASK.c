
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int running_object; } ;
struct TYPE_7__ {int ptd; } ;
struct TYPE_8__ {scalar_t__ sink_id; int stgmedium; TYPE_1__ fmtetc; int entry; } ;
typedef TYPE_2__ DataCacheEntry ;
typedef TYPE_3__ DataCache ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(DataCache *VAR_0, DataCacheEntry *VAR_1)
{
    FUNC_5(&VAR_1->entry);
    FUNC_0(VAR_1->fmtetc.ptd);
    FUNC_4(&VAR_1->stgmedium);
    if(VAR_1->sink_id)
        FUNC_3(VAR_0->running_object, VAR_1->sink_id);

    FUNC_2(FUNC_1(), 0, VAR_1);
}
