
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_10__ {int relisshared; } ;
struct TYPE_9__ {int cc_nkeys; scalar_t__* cc_keyno; int cc_tupdesc; int cc_relname; TYPE_1__* cc_skey; int * cc_fastequal; int * cc_hashfunc; int cc_relisshared; int cc_reloid; } ;
struct TYPE_8__ {int attnotnull; int atttypid; } ;
struct TYPE_7__ {scalar_t__ sk_attno; int sk_collation; int sk_subtype; int sk_strategy; int sk_func; } ;
typedef int Relation ;
typedef int RegProcedure ;
typedef int Oid ;
typedef int * MemoryContext ;
typedef TYPE_2__* Form_pg_attribute ;
typedef TYPE_3__ CatCache ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,int,...) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int *,int *,int *) ;
 int VAR_8 ;
 int * FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 TYPE_5__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static void
FUNC_14(CatCache *VAR_10)
{
 Relation VAR_11;
 MemoryContext VAR_12;
 TupleDesc VAR_13;
 int VAR_14;

 VAR_4;

 VAR_11 = FUNC_13(VAR_10->cc_reloid, VAR_0);





 FUNC_0(VAR_3 != ((void*)0));

 VAR_12 = FUNC_4(VAR_3);




 VAR_13 = FUNC_2(FUNC_5(VAR_11));





 VAR_10->cc_relname = FUNC_11(FUNC_7(VAR_11));
 VAR_10->cc_relisshared = FUNC_6(VAR_11)->relisshared;




 FUNC_4(VAR_12);

 FUNC_12(VAR_11, VAR_0);

 FUNC_1(VAR_6, "CatalogCacheInitializeCache: %s, %d keys",
      VAR_10->cc_relname, VAR_10->cc_nkeys);




 for (VAR_14 = 0; VAR_14 < VAR_10->cc_nkeys; ++VAR_14)
 {
  Oid VAR_15;
  RegProcedure VAR_16;

  VAR_5;

  if (VAR_10->cc_keyno[VAR_14] > 0)
  {
   Form_pg_attribute VAR_17 = FUNC_8(VAR_13,
               VAR_10->cc_keyno[VAR_14] - 1);

   VAR_15 = VAR_17->atttypid;

   FUNC_0(VAR_17->attnotnull);
  }
  else
  {
   if (VAR_10->cc_keyno[VAR_14] < 0)
    FUNC_9(VAR_7, "sys attributes are not supported in caches");
   VAR_15 = VAR_9;
  }

  FUNC_3(VAR_15,
       &VAR_10->cc_hashfunc[VAR_14],
       &VAR_16,
       &VAR_10->cc_fastequal[VAR_14]);





  FUNC_10(VAR_16,
       &VAR_10->cc_skey[VAR_14].sk_func,
       VAR_3);


  VAR_10->cc_skey[VAR_14].sk_attno = VAR_10->cc_keyno[VAR_14];


  VAR_10->cc_skey[VAR_14].sk_strategy = VAR_1;
  VAR_10->cc_skey[VAR_14].sk_subtype = VAR_8;

  VAR_10->cc_skey[VAR_14].sk_collation = VAR_2;

  FUNC_1(VAR_6, "CatalogCacheInitializeCache %s %d %p",
       VAR_10->cc_relname, VAR_14, VAR_10);
 }




 VAR_10->cc_tupdesc = VAR_13;
}
