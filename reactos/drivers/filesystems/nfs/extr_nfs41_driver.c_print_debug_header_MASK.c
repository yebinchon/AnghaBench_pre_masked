
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int SharedDelete; int SharedWrite; int SharedRead; int DeleteAccess; int WriteAccess; int ReadAccess; int FileName; } ;
struct TYPE_8__ {TYPE_5__* FileObject; } ;
struct TYPE_7__ {scalar_t__ CurrentIrp; TYPE_2__* CurrentIrpSp; } ;
typedef TYPE_1__* PRX_CONTEXT ;
typedef TYPE_2__* PIO_STACK_LOCATION ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,TYPE_5__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,TYPE_2__*) ;

void FUNC_5(
    PRX_CONTEXT VAR_0)
{

    PIO_STACK_LOCATION VAR_1 = VAR_0->CurrentIrpSp;

    if (VAR_1) {
        FUNC_0("FileOject %p name %wZ access r=%d,w=%d,d=%d share r=%d,w=%d,d=%d\n",
            VAR_1->FileObject, &VAR_1->FileObject->FileName,
            VAR_1->FileObject->ReadAccess, VAR_1->FileObject->WriteAccess,
            VAR_1->FileObject->DeleteAccess, VAR_1->FileObject->SharedRead,
            VAR_1->FileObject->SharedWrite, VAR_1->FileObject->SharedDelete);
        FUNC_1(0, VAR_1->FileObject);
        FUNC_4(0, VAR_0->CurrentIrpSp);
    } else
        FUNC_0("Couldn't print FileObject IrpSp is NULL\n");

    FUNC_2(1, VAR_0);
    if (VAR_0->CurrentIrp)
        FUNC_3(0, VAR_0->CurrentIrp);
}
