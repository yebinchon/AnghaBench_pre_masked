
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {scalar_t__ RefCount; int FileObject; int FcbListEntry; int PathName; } ;
struct TYPE_8__ {int FcbListLock; } ;
typedef TYPE_1__* PNTFS_VCB ;
typedef TYPE_2__* PNTFS_FCB ;
typedef int KIRQL ;


 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (char*,TYPE_2__*,int ,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;

VOID
FUNC_7(PNTFS_VCB VAR_0,
               PNTFS_FCB VAR_1)
{
    KIRQL VAR_2;

    FUNC_1("releasing FCB at %p: %S, refCount:%d\n",
           VAR_1,
           VAR_1->PathName,
           VAR_1->RefCount);

    FUNC_2(&VAR_0->FcbListLock, &VAR_2);
    VAR_1->RefCount--;
    if (VAR_1->RefCount <= 0 && !FUNC_5(VAR_1))
    {
        FUNC_6(&VAR_1->FcbListEntry);
        FUNC_3(&VAR_0->FcbListLock, VAR_2);
        FUNC_0(VAR_1->FileObject, ((void*)0), ((void*)0));
        FUNC_4(VAR_1);
    }
    else
    {
        FUNC_3(&VAR_0->FcbListLock, VAR_2);
    }
}
