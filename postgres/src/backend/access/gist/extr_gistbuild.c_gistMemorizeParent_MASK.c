
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
 scalar_t__ FUNC_0 (int ,void const*,int ,int*) ;

__attribute__((used)) static void
FUNC_1(GISTBuildState *VAR_1, BlockNumber VAR_2, BlockNumber VAR_3)
{
 ParentMapEntry *VAR_4;
 bool VAR_5;

 VAR_4 = (ParentMapEntry *) FUNC_0(VAR_1->parentMap,
             (const void *) &VAR_2,
             VAR_0,
             &VAR_5);
 VAR_4->parentblkno = VAR_3;
}
