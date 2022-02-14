
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


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;

int
FUNC_2(Relation VAR_0)
{
 LOCKTAG VAR_1;

 FUNC_1(VAR_1,
        VAR_0->rd_lockInfo.lockRelId.dbId,
        VAR_0->rd_lockInfo.lockRelId.relId);

 return FUNC_0(&VAR_1);
}
