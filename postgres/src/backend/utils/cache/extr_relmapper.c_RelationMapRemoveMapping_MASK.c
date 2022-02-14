
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_5__ {size_t num_mappings; TYPE_1__* mappings; } ;
struct TYPE_4__ {scalar_t__ mapoid; } ;
typedef TYPE_2__ RelMapFile ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

void
FUNC_1(Oid VAR_2)
{
 RelMapFile *VAR_3 = &VAR_1;
 int32 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_mappings; VAR_4++)
 {
  if (VAR_2 == VAR_3->mappings[VAR_4].mapoid)
  {

   VAR_3->mappings[VAR_4] = VAR_3->mappings[VAR_3->num_mappings - 1];
   VAR_3->num_mappings--;
   return;
  }
 }
 FUNC_0(VAR_0, "could not find temporary mapping for relation %u",
   VAR_2);
}
