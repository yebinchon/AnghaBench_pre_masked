
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_5__ {size_t num_mappings; TYPE_1__* mappings; } ;
struct TYPE_4__ {scalar_t__ mapoid; scalar_t__ mapfilenode; } ;
typedef TYPE_2__ RelMapFile ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_1(RelMapFile *VAR_2, Oid VAR_3, Oid VAR_4, bool VAR_5)
{
 int32 VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2->num_mappings; VAR_6++)
 {
  if (VAR_3 == VAR_2->mappings[VAR_6].mapoid)
  {
   VAR_2->mappings[VAR_6].mapfilenode = VAR_4;
   return;
  }
 }


 if (!VAR_5)
  FUNC_0(VAR_0, "attempt to apply a mapping to unmapped relation %u",
    VAR_3);
 if (VAR_2->num_mappings >= VAR_1)
  FUNC_0(VAR_0, "ran out of space in relation map");
 VAR_2->mappings[VAR_2->num_mappings].mapoid = VAR_3;
 VAR_2->mappings[VAR_2->num_mappings].mapfilenode = VAR_4;
 VAR_2->num_mappings++;
}
