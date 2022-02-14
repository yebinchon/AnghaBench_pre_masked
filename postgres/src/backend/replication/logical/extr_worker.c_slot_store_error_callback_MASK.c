
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * attnames; int relname; int nspname; int * atttyps; } ;
struct TYPE_6__ {TYPE_1__ remoterel; int localreloid; } ;
struct TYPE_5__ {size_t remote_attnum; scalar_t__ local_attnum; TYPE_3__* rel; } ;
typedef TYPE_2__ SlotErrCallbackArg ;
typedef int Oid ;
typedef TYPE_3__ LogicalRepRelMapEntry ;


 int FUNC_0 (char*,int ,int ,int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 SlotErrCallbackArg *VAR_1 = (SlotErrCallbackArg *) VAR_0;
 LogicalRepRelMapEntry *VAR_2;
 char *VAR_3;
 Oid VAR_4,
    VAR_5;


 if (VAR_1->remote_attnum < 0)
  return;

 VAR_2 = VAR_1->rel;
 VAR_4 = VAR_2->remoterel.atttyps[VAR_1->remote_attnum];


 VAR_3 = FUNC_3(VAR_4);


 VAR_5 = FUNC_2(VAR_2->localreloid, VAR_1->local_attnum + 1);

 FUNC_0("processing remote data for replication target relation \"%s.%s\" column \"%s\", "
      "remote type %s, local type %s",
      VAR_2->remoterel.nspname, VAR_2->remoterel.relname,
      VAR_2->remoterel.attnames[VAR_1->remote_attnum],
      VAR_3,
      FUNC_1(VAR_5));
}
