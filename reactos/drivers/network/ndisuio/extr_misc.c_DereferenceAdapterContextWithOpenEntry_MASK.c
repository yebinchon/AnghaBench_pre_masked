
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {int Spinlock; int OpenCount; } ;
struct TYPE_8__ {TYPE_1__* FileObject; int ListEntry; } ;
struct TYPE_7__ {int * FsContext2; int * FsContext; } ;
typedef TYPE_2__* PNDISUIO_OPEN_ENTRY ;
typedef TYPE_3__* PNDISUIO_ADAPTER_CONTEXT ;
typedef int KIRQL ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

VOID
FUNC_4(PNDISUIO_ADAPTER_CONTEXT VAR_0,
                                       PNDISUIO_OPEN_ENTRY VAR_1)
{
    KIRQL VAR_2;


    FUNC_1(&VAR_0->Spinlock, &VAR_2);


    VAR_0->OpenCount--;


    if (VAR_1 != ((void*)0))
    {

        FUNC_3(&VAR_1->ListEntry);


        VAR_1->FileObject->FsContext = ((void*)0);
        VAR_1->FileObject->FsContext2 = ((void*)0);


        FUNC_0(VAR_1);
    }


    FUNC_2(&VAR_0->Spinlock, VAR_2);
}
