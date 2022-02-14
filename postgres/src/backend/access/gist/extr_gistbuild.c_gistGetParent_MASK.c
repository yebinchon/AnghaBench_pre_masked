
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parentMap; } ;
struct TYPE_4__ {int parentblkno; } ;
typedef TYPE_1__ ParentMapEntry ;
typedef TYPE_2__ GISTBuildState ;
typedef int BlockNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (int ,void const*,int ,int*) ;

__attribute__((used)) static BlockNumber
FUNC_2(GISTBuildState *VAR_2, BlockNumber VAR_3)
{
 ParentMapEntry *VAR_4;
 bool VAR_5;


 VAR_4 = (ParentMapEntry *) FUNC_1(VAR_2->parentMap,
             (const void *) &VAR_3,
             VAR_1,
             &VAR_5);
 if (!VAR_5)
  FUNC_0(VAR_0, "could not find parent of block %d in lookup table", VAR_3);

 return VAR_4->parentblkno;
}
