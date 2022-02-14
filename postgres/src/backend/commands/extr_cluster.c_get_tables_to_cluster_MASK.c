
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int TableScanDesc ;
struct TYPE_5__ {int indexrelid; int indrelid; } ;
struct TYPE_4__ {int indexOid; int tableOid; } ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef TYPE_1__ RelToCluster ;
typedef int MemoryContext ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int * VAR_6 ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int * FUNC_5 (int ,int ) ;
 int * FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static List *
FUNC_13(MemoryContext VAR_7)
{
 Relation VAR_8;
 TableScanDesc VAR_9;
 ScanKeyData VAR_10;
 HeapTuple VAR_11;
 Form_pg_index VAR_12;
 MemoryContext VAR_13;
 RelToCluster *VAR_14;
 List *VAR_15 = VAR_6;







 VAR_8 = FUNC_12(VAR_5, VAR_0);
 FUNC_4(&VAR_10,
    VAR_1,
    VAR_2, VAR_3,
    FUNC_0(1));
 VAR_9 = FUNC_10(VAR_8, 1, &VAR_10);
 while ((VAR_11 = FUNC_5(VAR_9, VAR_4)) != ((void*)0))
 {
  VAR_12 = (Form_pg_index) FUNC_1(VAR_11);

  if (!FUNC_8(VAR_12->indrelid, FUNC_2()))
   continue;





  VAR_13 = FUNC_3(VAR_7);

  VAR_14 = (RelToCluster *) FUNC_7(sizeof(RelToCluster));
  VAR_14->tableOid = VAR_12->indrelid;
  VAR_14->indexOid = VAR_12->indexrelid;
  VAR_15 = FUNC_6(VAR_15, VAR_14);

  FUNC_3(VAR_13);
 }
 FUNC_11(VAR_9);

 FUNC_9(VAR_8, VAR_0);

 return VAR_15;
}
