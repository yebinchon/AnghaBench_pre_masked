
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_9__ {TYPE_1__* rd_rel; } ;
struct TYPE_8__ {int reltoastrelid; int relam; int relowner; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int NewHeapName ;
typedef int LOCKMODE ;
typedef int HeapTuple ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 char VAR_9 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int*) ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (char*,int,int,int,int,int,int ,int ,int ,int ,int ,char,int,int ,int ,scalar_t__,int,int,int,int,int *) ;
 int FUNC_15 (char*,int,char*,int) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_17 (int,int ) ;

Oid
FUNC_18(Oid VAR_10, Oid VAR_11, char VAR_12,
     LOCKMODE VAR_13)
{
 TupleDesc VAR_14;
 char VAR_15[VAR_3];
 Oid VAR_16;
 Oid VAR_17;
 Relation VAR_18;
 HeapTuple VAR_19;
 Datum VAR_20;
 bool VAR_21;
 Oid VAR_22;

 VAR_18 = FUNC_17(VAR_10, VAR_13);
 VAR_14 = FUNC_7(VAR_18);
 VAR_19 = FUNC_11(VAR_8, FUNC_5(VAR_10));
 if (!FUNC_2(VAR_19))
  FUNC_13(VAR_1, "cache lookup failed for relation %u", VAR_10);
 VAR_20 = FUNC_12(VAR_8, VAR_19, VAR_0,
         &VAR_21);
 if (VAR_21)
  VAR_20 = (Datum) 0;

 if (VAR_12 == VAR_9)
  VAR_22 = FUNC_3("pg_temp");
 else
  VAR_22 = FUNC_8(VAR_18);
 FUNC_15(VAR_15, sizeof(VAR_15), "pg_temp_%u", VAR_10);

 VAR_16 = FUNC_14(VAR_15,
            VAR_22,
            VAR_11,
            VAR_2,
            VAR_2,
            VAR_2,
            VAR_18->rd_rel->relowner,
            VAR_18->rd_rel->relam,
            VAR_14,
            VAR_4,
            VAR_7,
            VAR_12,
            0,
            FUNC_9(VAR_18),
            VAR_6,
            VAR_20,
            0,
            1,
            1,
            VAR_10,
            ((void*)0));
 FUNC_0(VAR_16 != VAR_2);

 FUNC_10(VAR_19);





 FUNC_1();
 VAR_17 = VAR_18->rd_rel->reltoastrelid;
 if (FUNC_6(VAR_17))
 {

  VAR_19 = FUNC_11(VAR_8, FUNC_5(VAR_17));
  if (!FUNC_2(VAR_19))
   FUNC_13(VAR_1, "cache lookup failed for relation %u", VAR_17);
  VAR_20 = FUNC_12(VAR_8, VAR_19, VAR_0,
          &VAR_21);
  if (VAR_21)
   VAR_20 = (Datum) 0;

  FUNC_4(VAR_16, VAR_20, VAR_13);

  FUNC_10(VAR_19);
 }

 FUNC_16(VAR_18, VAR_5);

 return VAR_16;
}
