
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pdir_hash; } ;
struct TYPE_5__ {int * pd; int rel; } ;
typedef int Relation ;
typedef TYPE_1__ PartitionDirectoryEntry ;
typedef TYPE_2__* PartitionDirectory ;
typedef int * PartitionDesc ;
typedef int Oid ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,int *,int ,int*) ;

PartitionDesc
FUNC_5(PartitionDirectory VAR_1, Relation VAR_2)
{
 PartitionDirectoryEntry *VAR_3;
 Oid VAR_4 = FUNC_2(VAR_2);
 bool VAR_5;

 VAR_3 = FUNC_4(VAR_1->pdir_hash, &VAR_4, VAR_0, &VAR_5);
 if (!VAR_5)
 {




  FUNC_3(VAR_2);
  VAR_3->rel = VAR_2;
  VAR_3->pd = FUNC_1(VAR_2);
  FUNC_0(VAR_3->pd != ((void*)0));
 }
 return VAR_3->pd;
}
