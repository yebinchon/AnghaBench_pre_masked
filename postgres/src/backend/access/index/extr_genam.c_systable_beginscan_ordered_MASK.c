
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {TYPE_2__* rd_index; } ;
struct TYPE_20__ {int sk_attno; } ;
struct TYPE_19__ {int * scan; int iscan; int * snapshot; int slot; TYPE_5__* irel; TYPE_5__* heap_rel; } ;
struct TYPE_17__ {int* values; } ;
struct TYPE_18__ {TYPE_1__ indkey; } ;
typedef int SysScanDescData ;
typedef TYPE_3__* SysScanDesc ;
typedef int * Snapshot ;
typedef TYPE_4__* ScanKey ;
typedef TYPE_5__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int VAR_2 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_5__*,TYPE_5__*,int *,int,int ) ;
 int FUNC_8 (int ,TYPE_4__*,int,int *,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (TYPE_5__*,int *) ;

SysScanDesc
FUNC_11(Relation VAR_3,
         Relation VAR_4,
         Snapshot VAR_5,
         int VAR_6, ScanKey VAR_7)
{
 SysScanDesc VAR_8;
 int VAR_9;


 if (FUNC_3(FUNC_5(VAR_4)))
  FUNC_6(VAR_0, "cannot do ordered scan on index \"%s\", because it is being reindexed",
    FUNC_4(VAR_4));

 if (VAR_1)
  FUNC_6(VAR_2, "using index \"%s\" despite IgnoreSystemIndexes",
    FUNC_4(VAR_4));

 VAR_8 = (SysScanDesc) FUNC_9(sizeof(SysScanDescData));

 VAR_8->heap_rel = VAR_3;
 VAR_8->irel = VAR_4;
 VAR_8->slot = FUNC_10(VAR_3, ((void*)0));

 if (VAR_5 == ((void*)0))
 {
  Oid VAR_10 = FUNC_5(VAR_3);

  VAR_5 = FUNC_2(FUNC_0(VAR_10));
  VAR_8->snapshot = VAR_5;
 }
 else
 {

  VAR_8->snapshot = ((void*)0);
 }


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
 {
  int VAR_11;

  for (VAR_11 = 0; VAR_11 < FUNC_1(VAR_4); VAR_11++)
  {
   if (VAR_7[VAR_9].sk_attno == VAR_4->rd_index->indkey.values[VAR_11])
   {
    VAR_7[VAR_9].sk_attno = VAR_11 + 1;
    break;
   }
  }
  if (VAR_11 == FUNC_1(VAR_4))
   FUNC_6(VAR_0, "column is not in index");
 }

 VAR_8->iscan = FUNC_7(VAR_3, VAR_4,
          VAR_5, VAR_6, 0);
 FUNC_8(VAR_8->iscan, VAR_7, VAR_6, ((void*)0), 0);
 VAR_8->scan = ((void*)0);

 return VAR_8;
}
