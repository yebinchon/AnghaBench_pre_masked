
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int IsFDO; } ;
struct TYPE_5__ {int NoPendingRequests; int IrpListHead; int IrpListLock; TYPE_1__ Common; } ;
typedef TYPE_2__* PFDO_DEVICE_EXTENSION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

VOID
FUNC_4(
    PFDO_DEVICE_EXTENSION VAR_2)
{



    FUNC_0(VAR_2->Common.IsFDO);




    FUNC_3(&VAR_2->IrpListLock);




    FUNC_1(&VAR_2->IrpListHead);




    FUNC_2(&VAR_2->NoPendingRequests, VAR_0, VAR_1);
}
