
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_13__ {int ThreadListHead; } ;
struct TYPE_9__ {int * Flink; } ;
struct TYPE_12__ {TYPE_1__ ThreadListHead; } ;
struct TYPE_10__ {int UniqueThread; } ;
struct TYPE_11__ {TYPE_2__ Cid; } ;
typedef scalar_t__ PVOID ;
typedef int * PLIST_ENTRY ;
typedef TYPE_3__* PETHREAD ;
typedef TYPE_4__* PEPROCESS ;
typedef int BOOLEAN ;


 TYPE_3__* FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (scalar_t__,TYPE_4__**) ;
 int VAR_3 ;

BOOLEAN
FUNC_6(
    PVOID VAR_4)
{
    PEPROCESS VAR_5 = ((void*)0);
    PETHREAD VAR_6;
    PLIST_ENTRY VAR_7;


    if (!FUNC_3(FUNC_5(VAR_4, &VAR_5)))
    {
        FUNC_2("Invalid process id: 0x%08x\n", (ULONG_PTR)VAR_4);
        return VAR_1;
    }

    VAR_7 = VAR_5->ThreadListHead.Flink;
    FUNC_4(VAR_5);
    if (VAR_7 == &VAR_2->ThreadListHead)
    {
        FUNC_2("No threads in process 0x%p, cannot attach to process!\n", VAR_4);
        return VAR_1;
    }

    VAR_6 = FUNC_0(VAR_7, VAR_0, VAR_3);

    return FUNC_1(VAR_6->Cid.UniqueThread);
}
