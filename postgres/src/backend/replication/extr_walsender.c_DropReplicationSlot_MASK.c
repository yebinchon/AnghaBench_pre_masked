
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wait; int slotname; } ;
typedef TYPE_1__ DropReplicationSlotCmd ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(DropReplicationSlotCmd *VAR_1)
{
 FUNC_1(VAR_1->slotname, !VAR_1->wait);
 FUNC_0("DROP_REPLICATION_SLOT", VAR_0);
}
