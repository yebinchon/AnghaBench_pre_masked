
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_9__ {int attidx; } ;
typedef TYPE_1__ crosstab_cat_desc ;
typedef int Tuplestorestate ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_11__ {int * vals; TYPE_2__* tupdesc; } ;
struct TYPE_10__ {int natts; } ;
typedef TYPE_3__ SPITupleTable ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef int HTAB ;
typedef int AttInMetadata ;


 int FUNC_0 (int *,char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,int ) ;
 scalar_t__ FUNC_3 () ;
 char* FUNC_4 (int ,TYPE_2__*,int) ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,char*,TYPE_1__*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;
 int * FUNC_14 (int,int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int VAR_7 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,char*) ;
 int FUNC_19 (char*,char*) ;

__attribute__((used)) static Tuplestorestate *
FUNC_20(char *VAR_8,
      HTAB *VAR_9,
      TupleDesc VAR_10,
      MemoryContext VAR_11,
      bool VAR_12)
{
 Tuplestorestate *VAR_13;
 int VAR_14 = FUNC_12(VAR_9);
 AttInMetadata *VAR_15 = FUNC_5(VAR_10);
 char **VAR_16;
 HeapTuple VAR_17;
 int VAR_18;
 uint64 VAR_19;


 VAR_13 = FUNC_14(VAR_12, 0, VAR_7);


 if ((VAR_18 = FUNC_1()) < 0)

  FUNC_7(VAR_2, "get_crosstab_tuplestore: SPI_connect returned %d", VAR_18);


 VAR_18 = FUNC_2(VAR_8, 1, 0);
 VAR_19 = VAR_5;


 if ((VAR_18 == VAR_4) && (VAR_19 > 0))
 {
  SPITupleTable *VAR_20 = VAR_6;
  TupleDesc VAR_21 = VAR_20->tupdesc;
  int VAR_22 = VAR_21->natts;
  char *VAR_23;
  char *VAR_24 = ((void*)0);
  bool VAR_25 = 1;
  uint64 VAR_26;
  int VAR_27;
  int VAR_28;

  if (VAR_14 == 0)
  {

   FUNC_8(VAR_2,
     (FUNC_9(VAR_1),
      FUNC_11("provided \"categories\" SQL must " "return 1 column of at least one row")));

  }
  if (VAR_22 < 3)
   FUNC_8(VAR_2,
     (FUNC_9(VAR_0),
      FUNC_11("invalid source data SQL statement"),
      FUNC_10("The provided SQL must return 3 " " columns; rowid, category, and values.")));


  VAR_28 = (VAR_22 - 2) + VAR_14;


  if (VAR_10->natts != VAR_28)
   FUNC_8(VAR_2,
     (FUNC_9(VAR_1),
      FUNC_11("invalid return type"),
      FUNC_10("Query-specified return " "tuple has %d columns but crosstab " "returns %d.", VAR_10->natts, VAR_28)));




  VAR_16 = (char **) FUNC_13(VAR_28 * sizeof(char *));

  for (VAR_26 = 0; VAR_26 < VAR_19; VAR_26++)
  {
   HeapTuple VAR_29;
   crosstab_cat_desc *VAR_30;
   char *VAR_31;


   VAR_29 = VAR_20->vals[VAR_26];


   VAR_23 = FUNC_4(VAR_29, VAR_21, 1);





   if (VAR_25 || !FUNC_19(VAR_24, VAR_23))
   {




    if (!VAR_25)
    {

     VAR_17 = FUNC_0(VAR_15, VAR_16);

     FUNC_16(VAR_13, VAR_17);

     for (VAR_27 = 0; VAR_27 < VAR_28; VAR_27++)
      FUNC_17(VAR_16[VAR_27]);
    }

    VAR_16[0] = VAR_23;
    for (VAR_27 = 1; VAR_27 < VAR_22 - 2; VAR_27++)
     VAR_16[VAR_27] = FUNC_4(VAR_29, VAR_21, VAR_27 + 1);


    VAR_25 = 0;
   }


   VAR_31 = FUNC_4(VAR_29, VAR_21, VAR_22 - 1);

   if (VAR_31 != ((void*)0))
   {
    FUNC_6(VAR_9, VAR_31, VAR_30);

    if (VAR_30)
     VAR_16[VAR_30->attidx + VAR_22 - 2] =
      FUNC_4(VAR_29, VAR_21, VAR_22);
   }

   FUNC_17(VAR_24);
   FUNC_18(VAR_24, VAR_23);
  }


  VAR_17 = FUNC_0(VAR_15, VAR_16);

  FUNC_16(VAR_13, VAR_17);
 }

 if (FUNC_3() != VAR_3)

  FUNC_7(VAR_2, "get_crosstab_tuplestore: SPI_finish() failed");

 FUNC_15(VAR_13);

 return VAR_13;
}
