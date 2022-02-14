
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint16 ;
struct TYPE_13__ {scalar_t__ contype; scalar_t__ conindid; } ;
struct TYPE_12__ {scalar_t__* rd_exclstrats; scalar_t__* rd_exclops; scalar_t__* rd_exclprocs; int rd_indexcxt; int * rd_opfamily; int rd_att; TYPE_1__* rd_index; } ;
struct TYPE_11__ {int indrelid; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Oid ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_constraint ;
typedef int Datum ;
typedef int ArrayType ;


 scalar_t__* FUNC_0 (int *) ;
 int* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *,int ,int ,int ,int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ,int ,int ,int*) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__*,scalar_t__*,int) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_24 (int ,int ) ;

void
FUNC_25(Relation VAR_11,
       Oid **VAR_12,
       Oid **VAR_13,
       uint16 **VAR_14)
{
 int VAR_15;
 Oid *VAR_16;
 Oid *VAR_17;
 uint16 *VAR_18;
 Relation VAR_19;
 SysScanDesc VAR_20;
 ScanKeyData VAR_21[1];
 HeapTuple VAR_22;
 bool VAR_23;
 MemoryContext VAR_24;
 int VAR_25;

 VAR_15 = FUNC_8(VAR_11);


 *VAR_12 = VAR_16 = (Oid *) FUNC_19(sizeof(Oid) * VAR_15);
 *VAR_13 = VAR_17 = (Oid *) FUNC_19(sizeof(Oid) * VAR_15);
 *VAR_14 = VAR_18 = (uint16 *) FUNC_19(sizeof(uint16) * VAR_15);


 if (VAR_11->rd_exclstrats != ((void*)0))
 {
  FUNC_18(VAR_16, VAR_11->rd_exclops, sizeof(Oid) * VAR_15);
  FUNC_18(VAR_17, VAR_11->rd_exclprocs, sizeof(Oid) * VAR_15);
  FUNC_18(VAR_18, VAR_11->rd_exclstrats, sizeof(uint16) * VAR_15);
  return;
 }
 FUNC_13(&VAR_21[0],
    VAR_2,
    VAR_3, VAR_8,
    FUNC_10(VAR_11->rd_index->indrelid));

 VAR_19 = FUNC_24(VAR_5, VAR_0);
 VAR_20 = FUNC_20(VAR_19, VAR_6, 1,
         ((void*)0), 1, VAR_21);
 VAR_23 = 0;

 while (FUNC_7(VAR_22 = FUNC_22(VAR_20)))
 {
  Form_pg_constraint VAR_26 = (Form_pg_constraint) FUNC_6(VAR_22);
  Datum VAR_27;
  bool VAR_28;
  ArrayType *VAR_29;
  int VAR_30;


  if (VAR_26->contype != VAR_4 ||
   VAR_26->conindid != FUNC_12(VAR_11))
   continue;


  if (VAR_23)
   FUNC_14(VAR_7, "unexpected exclusion constraint record found for rel %s",
     FUNC_11(VAR_11));
  VAR_23 = 1;


  VAR_27 = FUNC_15(VAR_22,
        VAR_1,
        VAR_19->rd_att, &VAR_28);
  if (VAR_28)
   FUNC_14(VAR_7, "null conexclop for rel %s",
     FUNC_11(VAR_11));

  VAR_29 = FUNC_5(VAR_27);
  VAR_30 = FUNC_1(VAR_29)[0];
  if (FUNC_4(VAR_29) != 1 ||
   VAR_30 != VAR_15 ||
   FUNC_3(VAR_29) ||
   FUNC_2(VAR_29) != VAR_10)
   FUNC_14(VAR_7, "conexclop is not a 1-D Oid array");

  FUNC_18(VAR_16, FUNC_0(VAR_29), sizeof(Oid) * VAR_15);
 }

 FUNC_21(VAR_20);
 FUNC_23(VAR_19, VAR_0);

 if (!VAR_23)
  FUNC_14(VAR_7, "exclusion constraint record missing for rel %s",
    FUNC_11(VAR_11));


 for (VAR_25 = 0; VAR_25 < VAR_15; VAR_25++)
 {
  VAR_17[VAR_25] = FUNC_17(VAR_16[VAR_25]);
  VAR_18[VAR_25] = FUNC_16(VAR_16[VAR_25],
            VAR_11->rd_opfamily[VAR_25]);

  if (VAR_18[VAR_25] == VAR_9)
   FUNC_14(VAR_7, "could not find strategy for operator %u in family %u",
     VAR_16[VAR_25], VAR_11->rd_opfamily[VAR_25]);
 }


 VAR_24 = FUNC_9(VAR_11->rd_indexcxt);
 VAR_11->rd_exclops = (Oid *) FUNC_19(sizeof(Oid) * VAR_15);
 VAR_11->rd_exclprocs = (Oid *) FUNC_19(sizeof(Oid) * VAR_15);
 VAR_11->rd_exclstrats = (uint16 *) FUNC_19(sizeof(uint16) * VAR_15);
 FUNC_18(VAR_11->rd_exclops, VAR_16, sizeof(Oid) * VAR_15);
 FUNC_18(VAR_11->rd_exclprocs, VAR_17, sizeof(Oid) * VAR_15);
 FUNC_18(VAR_11->rd_exclstrats, VAR_18, sizeof(uint16) * VAR_15);
 FUNC_9(VAR_24);
}
