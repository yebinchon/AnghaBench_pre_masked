
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int RefCount; int PathName; } ;
struct TYPE_6__ {int FcbListLock; } ;
typedef TYPE_1__* PNTFS_VCB ;
typedef TYPE_2__* PNTFS_FCB ;
typedef int KIRQL ;


 int FUNC_0 (char*,TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;

VOID
FUNC_3(PNTFS_VCB VAR_0,
            PNTFS_FCB VAR_1)
{
    KIRQL VAR_2;

    FUNC_0("grabbing FCB at %p: %S, refCount:%d\n",
           VAR_1,
           VAR_1->PathName,
           VAR_1->RefCount);

    FUNC_1(&VAR_0->FcbListLock, &VAR_2);
    VAR_1->RefCount++;
    FUNC_2(&VAR_0->FcbListLock, VAR_2);
}
