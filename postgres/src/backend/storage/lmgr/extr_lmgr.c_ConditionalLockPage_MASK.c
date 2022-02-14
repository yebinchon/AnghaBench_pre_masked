
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int relId; int dbId; } ;
struct TYPE_6__ {TYPE_1__ lockRelId; } ;
struct TYPE_7__ {TYPE_2__ rd_lockInfo; } ;
typedef TYPE_3__* Relation ;
typedef int LOCKTAG ;
typedef int LOCKMODE ;
typedef int BlockNumber ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

bool
FUNC_2(Relation VAR_1, BlockNumber VAR_2, LOCKMODE VAR_3)
{
 LOCKTAG VAR_4;

 FUNC_1(VAR_4,
      VAR_1->rd_lockInfo.lockRelId.dbId,
      VAR_1->rd_lockInfo.lockRelId.relId,
      VAR_2);

 return (FUNC_0(&VAR_4, VAR_3, 0, 1) != VAR_0);
}
