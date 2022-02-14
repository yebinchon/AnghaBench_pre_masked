
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_2__ {int oid; } ;
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int ,int ,int ) ;
 int * FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,char const*,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int ,int*) ;
 int FUNC_20 (int ,int ,int,int *,int,int *) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int ,int ) ;

Bitmapset *
FUNC_25(Oid VAR_15, const char *VAR_16,
          bool VAR_17, Oid *VAR_18)
{
 Bitmapset *VAR_19 = ((void*)0);
 Relation VAR_20;
 HeapTuple VAR_21;
 SysScanDesc VAR_22;
 ScanKeyData VAR_23[3];


 *VAR_18 = VAR_14;

 VAR_20 = FUNC_24(VAR_6, VAR_0);

 FUNC_12(&VAR_23[0],
    VAR_3,
    VAR_5, VAR_11,
    FUNC_9(VAR_15));
 FUNC_12(&VAR_23[1],
    VAR_4,
    VAR_5, VAR_11,
    FUNC_9(VAR_14));
 FUNC_12(&VAR_23[2],
    VAR_2,
    VAR_5, VAR_10,
    FUNC_5(VAR_16));

 VAR_22 = FUNC_20(VAR_20, VAR_7, 1,
         ((void*)0), 3, VAR_23);


 if (FUNC_8(VAR_21 = FUNC_22(VAR_22)))
 {
  Datum VAR_24;
  bool VAR_25;

  *VAR_18 = ((Form_pg_constraint) FUNC_7(VAR_21))->oid;


  VAR_24 = FUNC_19(VAR_21, VAR_1,
         FUNC_11(VAR_20), &VAR_25);
  if (!VAR_25)
  {
   ArrayType *VAR_26;
   int VAR_27;
   int16 *VAR_28;
   int VAR_29;

   VAR_26 = FUNC_6(VAR_24);
   VAR_27 = FUNC_1(VAR_26)[0];
   if (FUNC_4(VAR_26) != 1 ||
    VAR_27 < 0 ||
    FUNC_3(VAR_26) ||
    FUNC_2(VAR_26) != VAR_13)
    FUNC_14(VAR_9, "conkey is not a 1-D smallint array");
   VAR_28 = (int16 *) FUNC_0(VAR_26);


   for (VAR_29 = 0; VAR_29 < VAR_27; VAR_29++)
   {
    VAR_19 = FUNC_13(VAR_19,
             VAR_28[VAR_29] - VAR_12);
   }
  }
 }

 FUNC_21(VAR_22);


 if (!FUNC_10(*VAR_18) && !VAR_17)
  FUNC_15(VAR_9,
    (FUNC_16(VAR_8),
     FUNC_17("constraint \"%s\" for table \"%s\" does not exist",
      VAR_16, FUNC_18(VAR_15))));

 FUNC_23(VAR_20, VAR_0);

 return VAR_19;
}
