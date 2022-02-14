
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt753x_mapping {int * vids; int * etags; int * members; int * pvids; } ;
struct gsw_mt753x {TYPE_2__* vlan_entries; TYPE_1__* port_entries; } ;
struct TYPE_4__ {int vid; int etags; int member; } ;
struct TYPE_3__ {int pvid; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct gsw_mt753x *VAR_2, struct mt753x_mapping *VAR_3)
{
 int VAR_4 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_2->port_entries[VAR_4].pvid = VAR_3->pvids[VAR_4];

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_2->vlan_entries[VAR_4].member = VAR_3->members[VAR_4];
  VAR_2->vlan_entries[VAR_4].etags = VAR_3->etags[VAR_4];
  VAR_2->vlan_entries[VAR_4].vid = VAR_3->vids[VAR_4];
 }
}
