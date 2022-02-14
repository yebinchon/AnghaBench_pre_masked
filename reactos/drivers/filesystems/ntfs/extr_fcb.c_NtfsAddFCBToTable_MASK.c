
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int FcbListEntry; TYPE_1__* Vcb; } ;
struct TYPE_5__ {int FcbListLock; int FcbListHead; } ;
typedef TYPE_1__* PNTFS_VCB ;
typedef TYPE_2__* PNTFS_FCB ;
typedef int KIRQL ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;

VOID
FUNC_3(PNTFS_VCB VAR_0,
                  PNTFS_FCB VAR_1)
{
    KIRQL VAR_2;

    FUNC_1(&VAR_0->FcbListLock, &VAR_2);
    VAR_1->Vcb = VAR_0;
    FUNC_0(&VAR_0->FcbListHead, &VAR_1->FcbListEntry);
    FUNC_2(&VAR_0->FcbListLock, VAR_2);
}
