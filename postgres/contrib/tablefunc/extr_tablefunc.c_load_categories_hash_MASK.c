
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int ctl ;
struct TYPE_10__ {char* catname; scalar_t__ attidx; } ;
typedef TYPE_1__ crosstab_cat_desc ;
typedef int crosstab_HashEnt ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_13__ {int entrysize; int hcxt; int keysize; } ;
struct TYPE_12__ {int * vals; TYPE_2__* tupdesc; } ;
struct TYPE_11__ {int natts; } ;
typedef TYPE_3__ SPITupleTable ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef int HTAB ;
typedef TYPE_4__ HASHCTL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int ) ;
 scalar_t__ FUNC_4 () ;
 char* FUNC_5 (int ,TYPE_2__*,int) ;
 scalar_t__ VAR_8 ;
 TYPE_3__* VAR_9 ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int * FUNC_11 (char*,int ,TYPE_4__*,int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static HTAB *
FUNC_13(char *VAR_10, MemoryContext VAR_11)
{
 HTAB *VAR_12;
 HASHCTL VAR_13;
 int VAR_14;
 uint64 VAR_15;
 MemoryContext VAR_16;


 FUNC_0(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.keysize = VAR_5;
 VAR_13.entrysize = sizeof(crosstab_HashEnt);
 VAR_13.hcxt = VAR_11;





 VAR_12 = FUNC_11("crosstab hash",
        VAR_4,
        &VAR_13,
        VAR_3 | VAR_2);


 if ((VAR_14 = FUNC_2()) < 0)

  FUNC_7(VAR_1, "load_categories_hash: SPI_connect returned %d", VAR_14);


 VAR_14 = FUNC_3(VAR_10, 1, 0);
 VAR_15 = VAR_8;


 if ((VAR_14 == VAR_7) && (VAR_15 > 0))
 {
  SPITupleTable *VAR_17 = VAR_9;
  TupleDesc VAR_18 = VAR_17->tupdesc;
  uint64 VAR_19;





  if (VAR_18->natts != 1)
   FUNC_8(VAR_1,
     (FUNC_9(VAR_0),
      FUNC_10("provided \"categories\" SQL must " "return 1 column of at least one row")));


  for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++)
  {
   crosstab_cat_desc *VAR_20;
   char *VAR_21;
   HeapTuple VAR_22;


   VAR_22 = VAR_17->vals[VAR_19];


   VAR_21 = FUNC_5(VAR_22, VAR_18, 1);

   VAR_16 = FUNC_1(VAR_11);

   VAR_20 = (crosstab_cat_desc *) FUNC_12(sizeof(crosstab_cat_desc));
   VAR_20->catname = VAR_21;
   VAR_20->attidx = VAR_19;


   FUNC_6(VAR_12, VAR_20);

   FUNC_1(VAR_16);
  }
 }

 if (FUNC_4() != VAR_6)

  FUNC_7(VAR_1, "load_categories_hash: SPI_finish() failed");

 return VAR_12;
}
