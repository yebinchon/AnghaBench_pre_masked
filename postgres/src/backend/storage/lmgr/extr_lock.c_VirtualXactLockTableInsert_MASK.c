
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ backendId; scalar_t__ localTransactionId; } ;
typedef TYPE_1__ VirtualTransactionId ;
struct TYPE_6__ {scalar_t__ backendId; scalar_t__ fpLocalTransactionId; int fpVXIDLock; int backendLock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_3 (TYPE_1__) ;

void
FUNC_4(VirtualTransactionId VAR_3)
{
 FUNC_0(FUNC_3(VAR_3));

 FUNC_1(&VAR_2->backendLock, VAR_1);

 FUNC_0(VAR_2->backendId == VAR_3.backendId);
 FUNC_0(VAR_2->fpLocalTransactionId == VAR_0);
 FUNC_0(VAR_2->fpVXIDLock == 0);

 VAR_2->fpVXIDLock = 1;
 VAR_2->fpLocalTransactionId = VAR_3.localTransactionId;

 FUNC_2(&VAR_2->backendLock);
}
