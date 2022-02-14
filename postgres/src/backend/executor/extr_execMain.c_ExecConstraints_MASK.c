
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_17__ {scalar_t__ num_check; scalar_t__ has_not_null; } ;
typedef TYPE_2__ TupleConstr ;
struct TYPE_19__ {int attname; scalar_t__ attnotnull; } ;
struct TYPE_18__ {scalar_t__ ri_PartitionRoot; scalar_t__ ri_PartitionCheck; scalar_t__ ri_RelationDesc; } ;
struct TYPE_16__ {int natts; TYPE_2__* constr; } ;
typedef TYPE_3__ ResultRelInfo ;
typedef scalar_t__ Relation ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int EState ;
typedef int Bitmapset ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ,int *,TYPE_1__*,int *,int) ;
 char* FUNC_2 (TYPE_3__*,int *,int *) ;
 int * FUNC_3 (TYPE_3__*,int *) ;
 int * FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int VAR_3 ;
 TYPE_4__* FUNC_10 (TYPE_1__*,int) ;
 int * FUNC_11 (int *,int *) ;
 int * FUNC_12 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,int ,...) ;
 int FUNC_17 (scalar_t__,int) ;
 int FUNC_18 (scalar_t__,char const*) ;
 int * FUNC_19 (int *,int *,int ) ;
 scalar_t__ FUNC_20 (int *,int) ;

void
FUNC_21(ResultRelInfo *VAR_4,
    TupleTableSlot *VAR_5, EState *VAR_6)
{
 Relation VAR_7 = VAR_4->ri_RelationDesc;
 TupleDesc VAR_8 = FUNC_7(VAR_7);
 TupleConstr *VAR_9 = VAR_8->constr;
 Bitmapset *VAR_10;
 Bitmapset *VAR_11;
 Bitmapset *VAR_12;

 FUNC_0(VAR_9 || VAR_4->ri_PartitionCheck);

 if (VAR_9 && VAR_9->has_not_null)
 {
  int VAR_13 = VAR_8->natts;
  int VAR_14;

  for (VAR_14 = 1; VAR_14 <= VAR_13; VAR_14++)
  {
   Form_pg_attribute VAR_15 = FUNC_10(VAR_8, VAR_14 - 1);

   if (VAR_15->attnotnull && FUNC_20(VAR_5, VAR_14))
   {
    char *VAR_16;
    Relation VAR_17 = VAR_7;
    TupleDesc VAR_18 = FUNC_7(VAR_7);
    if (VAR_4->ri_PartitionRoot)
    {
     AttrNumber *VAR_19;

     VAR_7 = VAR_4->ri_PartitionRoot;
     VAR_8 = FUNC_7(VAR_7);

     VAR_19 = FUNC_12(VAR_18,
               VAR_8);





     if (VAR_19 != ((void*)0))
      VAR_5 = FUNC_19(VAR_19, VAR_5,
              FUNC_5(VAR_8, &VAR_3));
    }

    VAR_11 = FUNC_3(VAR_4, VAR_6);
    VAR_12 = FUNC_4(VAR_4, VAR_6);
    VAR_10 = FUNC_11(VAR_11, VAR_12);
    VAR_16 = FUNC_1(FUNC_9(VAR_7),
               VAR_5,
               VAR_8,
               VAR_10,
               64);

    FUNC_13(VAR_2,
      (FUNC_14(VAR_1),
       FUNC_16("null value in column \"%s\" violates not-null constraint",
        FUNC_6(VAR_15->attname)),
       VAR_16 ? FUNC_15("Failing row contains %s.", VAR_16) : 0,
       FUNC_17(VAR_17, VAR_14)));
   }
  }
 }

 if (VAR_9 && VAR_9->num_check > 0)
 {
  const char *VAR_20;

  if ((VAR_20 = FUNC_2(VAR_4, VAR_5, VAR_6)) != ((void*)0))
  {
   char *VAR_21;
   Relation VAR_22 = VAR_7;


   if (VAR_4->ri_PartitionRoot)
   {
    TupleDesc VAR_23 = FUNC_7(VAR_7);
    AttrNumber *VAR_24;

    VAR_7 = VAR_4->ri_PartitionRoot;
    VAR_8 = FUNC_7(VAR_7);

    VAR_24 = FUNC_12(VAR_23,
              VAR_8);





    if (VAR_24 != ((void*)0))
     VAR_5 = FUNC_19(VAR_24, VAR_5,
             FUNC_5(VAR_8, &VAR_3));
   }

   VAR_11 = FUNC_3(VAR_4, VAR_6);
   VAR_12 = FUNC_4(VAR_4, VAR_6);
   VAR_10 = FUNC_11(VAR_11, VAR_12);
   VAR_21 = FUNC_1(FUNC_9(VAR_7),
              VAR_5,
              VAR_8,
              VAR_10,
              64);
   FUNC_13(VAR_2,
     (FUNC_14(VAR_0),
      FUNC_16("new row for relation \"%s\" violates check constraint \"%s\"",
       FUNC_8(VAR_22), VAR_20),
      VAR_21 ? FUNC_15("Failing row contains %s.", VAR_21) : 0,
      FUNC_18(VAR_22, VAR_20)));
  }
 }
}
