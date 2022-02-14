
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lockRelId; } ;
struct TYPE_6__ {TYPE_1__ rd_lockInfo; } ;
typedef TYPE_2__* Relation ;
typedef int LockRelId ;
typedef int LOCKMODE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(Relation VAR_2, LOCKMODE VAR_3)
{
 LockRelId VAR_4 = VAR_2->rd_lockInfo.lockRelId;

 FUNC_0(VAR_3 >= VAR_1 && VAR_3 < VAR_0);


 FUNC_1(VAR_2);

 if (VAR_3 != VAR_1)
  FUNC_2(&VAR_4, VAR_3);
}
