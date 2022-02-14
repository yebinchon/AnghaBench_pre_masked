
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int cycle_ctr; int num_vacuums; int max_vacuums; TYPE_4__* vacuums; } ;
struct TYPE_8__ {scalar_t__ relId; scalar_t__ dbId; } ;
struct TYPE_11__ {int cycleid; TYPE_1__ relid; } ;
struct TYPE_9__ {TYPE_1__ lockRelId; } ;
struct TYPE_10__ {TYPE_2__ rd_lockInfo; } ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__ BTOneVacInfo ;
typedef int BTCycleId ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_3 (int ,char*,...) ;

BTCycleId
FUNC_4(Relation VAR_5)
{
 BTCycleId VAR_6;
 int VAR_7;
 BTOneVacInfo *VAR_8;

 FUNC_0(VAR_0, VAR_2);





 VAR_6 = ++(VAR_4->cycle_ctr);
 if (VAR_6 == 0 || VAR_6 > VAR_3)
  VAR_6 = VAR_4->cycle_ctr = 1;


 for (VAR_7 = 0; VAR_7 < VAR_4->num_vacuums; VAR_7++)
 {
  VAR_8 = &VAR_4->vacuums[VAR_7];
  if (VAR_8->relid.relId == VAR_5->rd_lockInfo.lockRelId.relId &&
   VAR_8->relid.dbId == VAR_5->rd_lockInfo.lockRelId.dbId)
  {






   FUNC_1(VAR_0);
   FUNC_3(VAR_1, "multiple active vacuums for index \"%s\"",
     FUNC_2(VAR_5));
  }
 }


 if (VAR_4->num_vacuums >= VAR_4->max_vacuums)
 {
  FUNC_1(VAR_0);
  FUNC_3(VAR_1, "out of btvacinfo slots");
 }
 VAR_8 = &VAR_4->vacuums[VAR_4->num_vacuums];
 VAR_8->relid = VAR_5->rd_lockInfo.lockRelId;
 VAR_8->cycleid = VAR_6;
 VAR_4->num_vacuums++;

 FUNC_1(VAR_0);
 return VAR_6;
}
