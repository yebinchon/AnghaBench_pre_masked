
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zoneref {scalar_t__ zone_idx; int * zone; } ;
struct TYPE_7__ {int node_id; TYPE_1__* node_zonelists; } ;
typedef TYPE_2__ pg_data_t ;
struct TYPE_6__ {struct zoneref* _zonerefs; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_2__*,struct zoneref*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(pg_data_t *VAR_2)
{
 int VAR_3, VAR_4;
 struct zoneref *VAR_5;
 int VAR_6;

 VAR_4 = VAR_2->node_id;

 VAR_5 = VAR_2->node_zonelists[VAR_1]._zonerefs;
 VAR_6 = FUNC_1(VAR_2, VAR_5);
 VAR_5 += VAR_6;
 for (VAR_3 = VAR_4 + 1; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_2(VAR_3))
   continue;
  VAR_6 = FUNC_1(FUNC_0(VAR_3), VAR_5);
  VAR_5 += VAR_6;
 }
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  if (!FUNC_2(VAR_3))
   continue;
  VAR_6 = FUNC_1(FUNC_0(VAR_3), VAR_5);
  VAR_5 += VAR_6;
 }

 VAR_5->zone = ((void*)0);
 VAR_5->zone_idx = 0;
}
