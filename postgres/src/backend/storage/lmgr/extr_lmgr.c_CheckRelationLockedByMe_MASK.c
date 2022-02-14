
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int locktag_lockmethodid; } ;
struct TYPE_9__ {int relId; int dbId; } ;
struct TYPE_10__ {TYPE_1__ lockRelId; } ;
struct TYPE_11__ {TYPE_2__ rd_lockInfo; } ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__ LOCKTAG ;
typedef scalar_t__ LOCKMODE ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;

bool
FUNC_5(Relation VAR_2, LOCKMODE VAR_3, bool VAR_4)
{
 LOCKTAG VAR_5;

 FUNC_3(VAR_5,
       VAR_2->rd_lockInfo.lockRelId.dbId,
       VAR_2->rd_lockInfo.lockRelId.relId);

 if (FUNC_1(&VAR_5, VAR_3))
  return 1;

 if (VAR_4)
 {
  LOCKMODE VAR_6;

  for (VAR_6 = VAR_3 + 1;
    VAR_6 <= VAR_0;
    VAR_6++)
  {
   if (FUNC_1(&VAR_5, VAR_6))
   {







    return 1;
   }
  }
 }

 return 0;
}
