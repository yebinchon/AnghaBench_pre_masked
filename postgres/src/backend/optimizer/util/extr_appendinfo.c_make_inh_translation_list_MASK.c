
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {scalar_t__ atttypid; scalar_t__ atttypmod; scalar_t__ attcollation; int attnum; int attname; scalar_t__ attisdropped; } ;
struct TYPE_6__ {int natts; } ;
typedef scalar_t__ Relation ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef int Index ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int AttrNumber ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 char* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,char*) ;
 TYPE_2__* FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (int ,char*,char*,int ) ;
 int * FUNC_10 (int *,int *) ;
 int * FUNC_11 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (char*,char*) ;

__attribute__((used)) static void
FUNC_13(Relation VAR_2, Relation VAR_3,
        Index VAR_4,
        List **VAR_5)
{
 List *VAR_6 = VAR_1;
 TupleDesc VAR_7 = FUNC_3(VAR_2);
 TupleDesc VAR_8 = FUNC_3(VAR_3);
 Oid VAR_9 = FUNC_5(VAR_3);
 int VAR_10 = VAR_7->natts;
 int VAR_11 = VAR_8->natts;
 int VAR_12;
 int VAR_13 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
 {
  Form_pg_attribute VAR_14;
  char *VAR_15;
  Oid VAR_16;
  int32 VAR_17;
  Oid VAR_18;

  VAR_14 = FUNC_8(VAR_7, VAR_12);
  if (VAR_14->attisdropped)
  {

   VAR_6 = FUNC_10(VAR_6, ((void*)0));
   continue;
  }
  VAR_15 = FUNC_2(VAR_14->attname);
  VAR_16 = VAR_14->atttypid;
  VAR_17 = VAR_14->atttypmod;
  VAR_18 = VAR_14->attcollation;





  if (VAR_2 == VAR_3)
  {
   VAR_6 = FUNC_10(VAR_6, FUNC_11(VAR_4,
           (AttrNumber) (VAR_12 + 1),
           VAR_16,
           VAR_17,
           VAR_18,
           0));
   continue;
  }
  if (VAR_13 >= VAR_11 ||
   (VAR_14 = FUNC_8(VAR_8, VAR_13))->attisdropped ||
   FUNC_12(VAR_15, FUNC_2(VAR_14->attname)) != 0)
  {
   HeapTuple VAR_19;

   VAR_19 = FUNC_7(VAR_9, VAR_15);
   if (!FUNC_1(VAR_19))
    FUNC_9(VAR_0, "could not find inherited attribute \"%s\" of relation \"%s\"",
      VAR_15, FUNC_4(VAR_3));
   VAR_13 = ((Form_pg_attribute) FUNC_0(VAR_19))->attnum - 1;
   FUNC_6(VAR_19);

   VAR_14 = FUNC_8(VAR_8, VAR_13);
  }


  if (VAR_16 != VAR_14->atttypid || VAR_17 != VAR_14->atttypmod)
   FUNC_9(VAR_0, "attribute \"%s\" of relation \"%s\" does not match parent's type",
     VAR_15, FUNC_4(VAR_3));
  if (VAR_18 != VAR_14->attcollation)
   FUNC_9(VAR_0, "attribute \"%s\" of relation \"%s\" does not match parent's collation",
     VAR_15, FUNC_4(VAR_3));

  VAR_6 = FUNC_10(VAR_6, FUNC_11(VAR_4,
          (AttrNumber) (VAR_13 + 1),
          VAR_16,
          VAR_17,
          VAR_18,
          0));
  VAR_13++;
 }

 *VAR_5 = VAR_6;
}
