
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dbId; int relId; } ;
struct TYPE_10__ {TYPE_2__ lockRelId; } ;
struct TYPE_11__ {TYPE_3__ rd_lockInfo; TYPE_1__* rd_rel; } ;
struct TYPE_8__ {scalar_t__ relisshared; } ;
typedef TYPE_4__* Relation ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;

void
FUNC_4(Relation VAR_2)
{
 FUNC_0(FUNC_3(VAR_2));
 FUNC_0(FUNC_1(FUNC_2(VAR_2)));

 VAR_2->rd_lockInfo.lockRelId.relId = FUNC_2(VAR_2);

 if (VAR_2->rd_rel->relisshared)
  VAR_2->rd_lockInfo.lockRelId.dbId = VAR_0;
 else
  VAR_2->rd_lockInfo.lockRelId.dbId = VAR_1;
}
