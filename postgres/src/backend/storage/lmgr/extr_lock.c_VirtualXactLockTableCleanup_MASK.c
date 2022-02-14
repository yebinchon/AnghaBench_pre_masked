
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int localTransactionId; int backendId; } ;
typedef TYPE_1__ VirtualTransactionId ;
struct TYPE_6__ {scalar_t__ backendId; int fpVXIDLock; int backendLock; int fpLocalTransactionId; } ;
typedef int LocalTransactionId ;
typedef int LOCKTAG ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int * VAR_5 ;
 int FUNC_4 (int ,TYPE_3__*,int *,int ,int) ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_5 (int ,TYPE_1__) ;

void
FUNC_6(void)
{
 bool VAR_8;
 LocalTransactionId VAR_9;

 FUNC_0(VAR_7->backendId != VAR_2);




 FUNC_1(&VAR_7->backendLock, VAR_4);

 VAR_8 = VAR_7->fpVXIDLock;
 VAR_9 = VAR_7->fpLocalTransactionId;
 VAR_7->fpVXIDLock = 0;
 VAR_7->fpLocalTransactionId = VAR_3;

 FUNC_2(&VAR_7->backendLock);





 if (!VAR_8 && FUNC_3(VAR_9))
 {
  VirtualTransactionId VAR_10;
  LOCKTAG VAR_11;

  VAR_10.backendId = VAR_6;
  VAR_10.localTransactionId = VAR_9;
  FUNC_5(VAR_11, VAR_10);

  FUNC_4(VAR_5[VAR_0], VAR_7,
        &VAR_11, VAR_1, 0);
 }
}
