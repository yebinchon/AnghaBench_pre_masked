
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int rd_partcheckvalid; int * rd_partcheck; int * rd_partcheckcxt; TYPE_1__* rd_rel; } ;
struct TYPE_12__ {scalar_t__ relispartition; } ;
typedef TYPE_2__* Relation ;
typedef int * MemoryContext ;
typedef int List ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int*) ;
 int FUNC_10 (int ) ;
 int VAR_9 ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 () ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ) ;
 int * FUNC_16 (TYPE_2__*,TYPE_2__*,int) ;
 int * FUNC_17 (int *,int *) ;
 int * FUNC_18 (int *,int,TYPE_2__*,TYPE_2__*,int*) ;
 int FUNC_19 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_20 (int ,int ) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static List *
FUNC_22(Relation VAR_10)
{
 HeapTuple VAR_11;
 MemoryContext VAR_12;
 Datum VAR_13;
 bool VAR_14;
 List *VAR_15 = VAR_5,
      *VAR_16 = VAR_5;
 Relation VAR_17;
 bool VAR_18;


 FUNC_12();


 if (VAR_10->rd_partcheckvalid)
  return FUNC_13(VAR_10->rd_partcheck);


 VAR_17 = FUNC_20(FUNC_15(FUNC_6(VAR_10)),
         VAR_1);


 VAR_11 = FUNC_8(VAR_8, FUNC_6(VAR_10));
 if (!FUNC_2(VAR_11))
  FUNC_14(VAR_4, "cache lookup failed for relation %u",
    FUNC_6(VAR_10));

 VAR_13 = FUNC_9(VAR_8, VAR_11,
         VAR_2,
         &VAR_14);
 if (!VAR_14)
 {
  VAR_7 *VAR_9;

  VAR_9 = FUNC_11(VAR_7,
       FUNC_21(FUNC_10(VAR_13)));

  VAR_15 = FUNC_16(VAR_10, VAR_17, VAR_9);
 }

 FUNC_7(VAR_11);


 if (VAR_17->rd_rel->relispartition)
  VAR_16 = FUNC_17(FUNC_22(VAR_17), VAR_15);
 else
  VAR_16 = VAR_15;







 VAR_16 = FUNC_18(VAR_16, 1, VAR_10, VAR_17,
          &VAR_18);

 if (VAR_18)
  FUNC_14(VAR_4, "unexpected whole-row reference found in partition key");


 FUNC_1(VAR_10->rd_partcheckcxt == ((void*)0));
 FUNC_1(VAR_10->rd_partcheck == VAR_5);
 if (VAR_16 != VAR_5)
 {
  VAR_10->rd_partcheckcxt = FUNC_0(VAR_3,
              "partition constraint",
              VAR_0);
  FUNC_3(VAR_10->rd_partcheckcxt,
            FUNC_5(VAR_10));
  VAR_12 = FUNC_4(VAR_10->rd_partcheckcxt);
  VAR_10->rd_partcheck = FUNC_13(VAR_16);
  FUNC_4(VAR_12);
 }
 else
  VAR_10->rd_partcheck = VAR_5;
 VAR_10->rd_partcheckvalid = 1;


 FUNC_19(VAR_17, VAR_6);


 return VAR_16;
}
