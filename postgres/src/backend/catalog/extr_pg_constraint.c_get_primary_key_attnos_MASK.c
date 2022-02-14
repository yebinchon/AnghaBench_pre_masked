
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_2__ {scalar_t__ contype; int oid; scalar_t__ condeferrable; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_constraint ;
typedef int Datum ;
typedef int Bitmapset ;
typedef int ArrayType ;


 scalar_t__ FUNC_0 (int *) ;
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
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ,int ,int ) ;
 int * FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int ,int ,int ,int*) ;
 int FUNC_14 (int ,int ,int,int *,int,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;

Bitmapset *
FUNC_19(Oid VAR_12, bool VAR_13, Oid *VAR_14)
{
 Bitmapset *VAR_15 = ((void*)0);
 Relation VAR_16;
 HeapTuple VAR_17;
 SysScanDesc VAR_18;
 ScanKeyData VAR_19[1];


 *VAR_14 = VAR_11;


 VAR_16 = FUNC_18(VAR_5, VAR_0);

 FUNC_10(&VAR_19[0],
    VAR_2,
    VAR_3, VAR_8,
    FUNC_8(VAR_12));

 VAR_18 = FUNC_14(VAR_16, VAR_6, 1,
         ((void*)0), 1, VAR_19);

 while (FUNC_7(VAR_17 = FUNC_16(VAR_18)))
 {
  Form_pg_constraint VAR_20 = (Form_pg_constraint) FUNC_6(VAR_17);
  Datum VAR_21;
  bool VAR_22;
  ArrayType *VAR_23;
  int16 *VAR_24;
  int VAR_25;
  int VAR_26;


  if (VAR_20->contype != VAR_4)
   continue;






  if (VAR_20->condeferrable && !VAR_13)
   break;


  VAR_21 = FUNC_13(VAR_17, VAR_1,
         FUNC_9(VAR_16), &VAR_22);
  if (VAR_22)
   FUNC_12(VAR_7, "null conkey for constraint %u",
     ((Form_pg_constraint) FUNC_6(VAR_17))->oid);
  VAR_23 = FUNC_5(VAR_21);
  VAR_25 = FUNC_1(VAR_23)[0];
  if (FUNC_4(VAR_23) != 1 ||
   VAR_25 < 0 ||
   FUNC_3(VAR_23) ||
   FUNC_2(VAR_23) != VAR_10)
   FUNC_12(VAR_7, "conkey is not a 1-D smallint array");
  VAR_24 = (int16 *) FUNC_0(VAR_23);


  for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++)
  {
   VAR_15 = FUNC_11(VAR_15,
           VAR_24[VAR_26] - VAR_9);
  }
  *VAR_14 = ((Form_pg_constraint) FUNC_6(VAR_17))->oid;


  break;
 }

 FUNC_15(VAR_18);

 FUNC_17(VAR_16, VAR_0);

 return VAR_15;
}
