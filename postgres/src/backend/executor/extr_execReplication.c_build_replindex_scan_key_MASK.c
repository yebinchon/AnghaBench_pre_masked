
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int * values; } ;
typedef TYPE_2__ oidvector ;
struct TYPE_17__ {int* values; } ;
typedef TYPE_3__ int2vector ;
struct TYPE_18__ {scalar_t__* tts_isnull; int * tts_values; } ;
typedef TYPE_4__ TupleTableSlot ;
struct TYPE_20__ {int * rd_indcollation; int rd_indextuple; TYPE_1__* rd_index; } ;
struct TYPE_19__ {int sk_flags; int sk_collation; } ;
struct TYPE_15__ {TYPE_3__ indkey; } ;
typedef TYPE_5__* ScanKey ;
typedef TYPE_6__* Relation ;
typedef int RegProcedure ;
typedef int Oid ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_5__*,int,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int*) ;
 int FUNC_8 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_13(ScanKey VAR_5, Relation VAR_6, Relation VAR_7,
       TupleTableSlot *VAR_8)
{
 int VAR_9;
 bool VAR_10;
 Datum VAR_11;
 oidvector *VAR_12;
 int2vector *VAR_13 = &VAR_7->rd_index->indkey;
 bool VAR_14 = 0;

 FUNC_0(FUNC_5(VAR_6) == FUNC_4(VAR_7));

 VAR_11 = FUNC_7(VAR_3, VAR_7->rd_indextuple,
         VAR_0, &VAR_10);
 FUNC_0(!VAR_10);
 VAR_12 = (oidvector *) FUNC_1(VAR_11);


 for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_7); VAR_9++)
 {
  Oid VAR_15;
  Oid VAR_16;
  RegProcedure VAR_17;
  int VAR_18 = VAR_9 + 1;
  int VAR_19 = VAR_13->values[VAR_9];
  Oid VAR_20 = FUNC_10(VAR_12->values[VAR_9]);





  VAR_16 = FUNC_9(VAR_12->values[VAR_9]);

  VAR_15 = FUNC_12(VAR_16, VAR_20,
            VAR_20,
            VAR_1);
  if (!FUNC_3(VAR_15))
   FUNC_8(VAR_2, "missing operator %d(%u,%u) in opfamily %u",
     VAR_1, VAR_20, VAR_20, VAR_16);

  VAR_17 = FUNC_11(VAR_15);


  FUNC_6(&VAR_5[VAR_9],
     VAR_18,
     VAR_1,
     VAR_17,
     VAR_8->tts_values[VAR_19 - 1]);

  VAR_5[VAR_9].sk_collation = VAR_7->rd_indcollation[VAR_9];


  if (VAR_8->tts_isnull[VAR_19 - 1])
  {
   VAR_14 = 1;
   VAR_5[VAR_9].sk_flags |= VAR_4;
  }
 }

 return VAR_14;
}
