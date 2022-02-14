
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int relname; int nspname; } ;
struct TYPE_5__ {TYPE_1__ remoterel; int localrel; scalar_t__ updatable; } ;
typedef TYPE_2__ LogicalRepRelMapEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(LogicalRepRelMapEntry *VAR_2)
{

 if (VAR_2->updatable)
  return;





 if (FUNC_1(FUNC_0(VAR_2->localrel)))
 {
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("publisher did not send replica identity column "
      "expected by the logical replication target relation \"%s.%s\"",
      VAR_2->remoterel.nspname, VAR_2->remoterel.relname)));
 }

 FUNC_2(VAR_1,
   (FUNC_3(VAR_0),
    FUNC_4("logical replication target relation \"%s.%s\" has "
     "neither REPLICA IDENTITY index nor PRIMARY "
     "KEY and published relation does not have "
     "REPLICA IDENTITY FULL",
     VAR_2->remoterel.nspname, VAR_2->remoterel.relname)));
}
