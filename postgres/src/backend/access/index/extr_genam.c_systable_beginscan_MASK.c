
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {TYPE_2__* rd_index; } ;
struct TYPE_21__ {int sk_attno; } ;
struct TYPE_20__ {int * iscan; int * scan; int * snapshot; int slot; TYPE_5__* irel; TYPE_5__* heap_rel; } ;
struct TYPE_18__ {int* values; } ;
struct TYPE_19__ {TYPE_1__ indkey; } ;
typedef int SysScanDescData ;
typedef TYPE_3__* SysScanDesc ;
typedef int * Snapshot ;
typedef TYPE_4__* ScanKey ;
typedef TYPE_5__* Relation ;
typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (TYPE_5__*,TYPE_5__*,int *,int,int ) ;
 TYPE_5__* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,TYPE_4__*,int,int *,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int * FUNC_10 (TYPE_5__*,int *,int,TYPE_4__*,int,int) ;
 int FUNC_11 (TYPE_5__*,int *) ;

SysScanDesc
FUNC_12(Relation VAR_3,
       Oid VAR_4,
       bool VAR_5,
       Snapshot VAR_6,
       int VAR_7, ScanKey VAR_8)
{
 SysScanDesc VAR_9;
 Relation VAR_10;

 if (VAR_5 &&
  !VAR_2 &&
  !FUNC_3(VAR_4))
  VAR_10 = FUNC_7(VAR_4, VAR_0);
 else
  VAR_10 = ((void*)0);

 VAR_9 = (SysScanDesc) FUNC_9(sizeof(SysScanDescData));

 VAR_9->heap_rel = VAR_3;
 VAR_9->irel = VAR_10;
 VAR_9->slot = FUNC_11(VAR_3, ((void*)0));

 if (VAR_6 == ((void*)0))
 {
  Oid VAR_11 = FUNC_4(VAR_3);

  VAR_6 = FUNC_2(FUNC_0(VAR_11));
  VAR_9->snapshot = VAR_6;
 }
 else
 {

  VAR_9->snapshot = ((void*)0);
 }

 if (VAR_10)
 {
  int VAR_12;


  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
  {
   int VAR_13;

   for (VAR_13 = 0; VAR_13 < FUNC_1(VAR_10); VAR_13++)
   {
    if (VAR_8[VAR_12].sk_attno == VAR_10->rd_index->indkey.values[VAR_13])
    {
     VAR_8[VAR_12].sk_attno = VAR_13 + 1;
     break;
    }
   }
   if (VAR_13 == FUNC_1(VAR_10))
    FUNC_5(VAR_1, "column is not in index");
  }

  VAR_9->iscan = FUNC_6(VAR_3, VAR_10,
           VAR_6, VAR_7, 0);
  FUNC_8(VAR_9->iscan, VAR_8, VAR_7, ((void*)0), 0);
  VAR_9->scan = ((void*)0);
 }
 else
 {







  VAR_9->scan = FUNC_10(VAR_3, VAR_6,
             VAR_7, VAR_8,
             1, 0);
  VAR_9->iscan = ((void*)0);
 }

 return VAR_9;
}
