
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int keysize; int entrysize; void* hcxt; } ;
struct TYPE_7__ {int pdir_hash; void* pdir_mcxt; } ;
typedef int PartitionDirectoryEntry ;
typedef int PartitionDirectoryData ;
typedef TYPE_1__* PartitionDirectory ;
typedef int Oid ;
typedef void* MemoryContext ;
typedef TYPE_2__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (char*,int,TYPE_2__*,int) ;
 TYPE_1__* FUNC_3 (int) ;

PartitionDirectory
FUNC_4(MemoryContext VAR_3)
{
 MemoryContext VAR_4 = FUNC_1(VAR_3);
 PartitionDirectory VAR_5;
 HASHCTL VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(HASHCTL));
 VAR_6.keysize = sizeof(Oid);
 VAR_6.entrysize = sizeof(PartitionDirectoryEntry);
 VAR_6.hcxt = VAR_3;

 VAR_5 = FUNC_3(sizeof(PartitionDirectoryData));
 VAR_5->pdir_mcxt = VAR_3;
 VAR_5->pdir_hash = FUNC_2("partition directory", 256, &VAR_6,
          VAR_2 | VAR_0 | VAR_1);

 FUNC_1(VAR_4);
 return VAR_5;
}
