
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pdir_hash; } ;
struct TYPE_5__ {int rel; } ;
typedef TYPE_1__ PartitionDirectoryEntry ;
typedef TYPE_2__* PartitionDirectory ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int *) ;

void
FUNC_3(PartitionDirectory VAR_0)
{
 HASH_SEQ_STATUS VAR_1;
 PartitionDirectoryEntry *VAR_2;

 FUNC_1(&VAR_1, VAR_0->pdir_hash);
 while ((VAR_2 = FUNC_2(&VAR_1)) != ((void*)0))
  FUNC_0(VAR_2->rel);
}
