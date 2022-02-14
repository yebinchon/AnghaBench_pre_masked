
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_8__ {size_t num_mappings; TYPE_1__* mappings; } ;
struct TYPE_7__ {scalar_t__ mapfilenode; scalar_t__ mapoid; } ;
typedef TYPE_2__ RelMapFile ;
typedef scalar_t__ Oid ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_2__ VAR_4 ;

Oid
FUNC_0(Oid VAR_5, bool VAR_6)
{
 const RelMapFile *VAR_7;
 int32 VAR_8;


 if (VAR_6)
 {
  VAR_7 = &VAR_2;
  for (VAR_8 = 0; VAR_8 < VAR_7->num_mappings; VAR_8++)
  {
   if (VAR_5 == VAR_7->mappings[VAR_8].mapfilenode)
    return VAR_7->mappings[VAR_8].mapoid;
  }
  VAR_7 = &VAR_4;
  for (VAR_8 = 0; VAR_8 < VAR_7->num_mappings; VAR_8++)
  {
   if (VAR_5 == VAR_7->mappings[VAR_8].mapfilenode)
    return VAR_7->mappings[VAR_8].mapoid;
  }
 }
 else
 {
  VAR_7 = &VAR_1;
  for (VAR_8 = 0; VAR_8 < VAR_7->num_mappings; VAR_8++)
  {
   if (VAR_5 == VAR_7->mappings[VAR_8].mapfilenode)
    return VAR_7->mappings[VAR_8].mapoid;
  }
  VAR_7 = &VAR_3;
  for (VAR_8 = 0; VAR_8 < VAR_7->num_mappings; VAR_8++)
  {
   if (VAR_5 == VAR_7->mappings[VAR_8].mapfilenode)
    return VAR_7->mappings[VAR_8].mapoid;
  }
 }

 return VAR_0;
}
