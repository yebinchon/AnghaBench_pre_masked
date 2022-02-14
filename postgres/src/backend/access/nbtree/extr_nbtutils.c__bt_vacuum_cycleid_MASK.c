
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int num_vacuums; TYPE_5__* vacuums; } ;
struct TYPE_8__ {scalar_t__ relId; scalar_t__ dbId; } ;
struct TYPE_12__ {int cycleid; TYPE_1__ relid; } ;
struct TYPE_9__ {scalar_t__ relId; scalar_t__ dbId; } ;
struct TYPE_10__ {TYPE_2__ lockRelId; } ;
struct TYPE_11__ {TYPE_3__ rd_lockInfo; } ;
typedef TYPE_4__* Relation ;
typedef TYPE_5__ BTOneVacInfo ;
typedef int BTCycleId ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;

BTCycleId
FUNC_2(Relation VAR_3)
{
 BTCycleId VAR_4 = 0;
 int VAR_5;


 FUNC_0(VAR_0, VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_2->num_vacuums; VAR_5++)
 {
  BTOneVacInfo *VAR_6 = &VAR_2->vacuums[VAR_5];

  if (VAR_6->relid.relId == VAR_3->rd_lockInfo.lockRelId.relId &&
   VAR_6->relid.dbId == VAR_3->rd_lockInfo.lockRelId.dbId)
  {
   VAR_4 = VAR_6->cycleid;
   break;
  }
 }

 FUNC_1(VAR_0);
 return VAR_4;
}
