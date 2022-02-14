
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int Next; int TsDrop; } ;
struct TYPE_5__ {int FcbList; int ReferenceCount; int FcbCount; int FcbLock; } ;
typedef TYPE_1__* PEXT2_VCB ;
typedef TYPE_2__* PEXT2_FCB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

VOID
FUNC_5(PEXT2_VCB VAR_0, PEXT2_FCB VAR_1)
{
    FUNC_0(FUNC_1(&VAR_0->FcbLock));

    FUNC_4(&VAR_1->TsDrop);
    FUNC_2(&VAR_0->FcbCount);
    FUNC_2(&VAR_0->ReferenceCount);
    FUNC_3(&VAR_0->FcbList, &VAR_1->Next);
}
