
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t int32 ;
struct TYPE_7__ {size_t num_mappings; TYPE_1__* mappings; } ;
struct TYPE_6__ {int mapfilenode; int mapoid; } ;
typedef TYPE_2__ RelMapFile ;


 int FUNC_0 (TYPE_2__*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(RelMapFile *VAR_0, const RelMapFile *VAR_1, bool VAR_2)
{
 int32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_mappings; VAR_3++)
 {
  FUNC_0(VAR_0,
       VAR_1->mappings[VAR_3].mapoid,
       VAR_1->mappings[VAR_3].mapfilenode,
       VAR_2);
 }
}
