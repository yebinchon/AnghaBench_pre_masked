
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_26__ {scalar_t__ contype; int coninhcount; int conislocal; int conname; scalar_t__ convalidated; scalar_t__ connoinherit; } ;
struct TYPE_25__ {int t_self; } ;
struct TYPE_24__ {TYPE_1__* rd_rel; } ;
struct TYPE_23__ {scalar_t__ relkind; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_constraint ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int *,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_9 (int *,int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,...) ;
 TYPE_3__* FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_18 (int ) ;
 TYPE_3__* FUNC_19 (int ) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_21 (int ,int ) ;

__attribute__((used)) static void
FUNC_22(Relation VAR_11, Relation VAR_12)
{
 Relation VAR_13;
 TupleDesc VAR_14;
 SysScanDesc VAR_15;
 ScanKeyData VAR_16;
 HeapTuple VAR_17;
 bool VAR_18 = 0;

 VAR_13 = FUNC_21(VAR_3, VAR_10);
 VAR_14 = FUNC_6(VAR_13);


 if (VAR_12->rd_rel->relkind == VAR_9)
  VAR_18 = 1;


 FUNC_9(&VAR_16,
    VAR_0,
    VAR_1, VAR_8,
    FUNC_5(FUNC_8(VAR_12)));
 VAR_15 = FUNC_17(VAR_13, VAR_4,
          1, ((void*)0), 1, &VAR_16);

 while (FUNC_3(VAR_17 = FUNC_19(VAR_15)))
 {
  Form_pg_constraint VAR_19 = (Form_pg_constraint) FUNC_2(VAR_17);
  SysScanDesc VAR_20;
  ScanKeyData VAR_21;
  HeapTuple VAR_22;
  bool VAR_23 = 0;

  if (VAR_19->contype != VAR_2)
   continue;


  if (VAR_19->connoinherit)
   continue;


  FUNC_9(&VAR_21,
     VAR_0,
     VAR_1, VAR_8,
     FUNC_5(FUNC_8(VAR_11)));
  VAR_20 = FUNC_17(VAR_13, VAR_4,
          1, ((void*)0), 1, &VAR_21);

  while (FUNC_3(VAR_22 = FUNC_19(VAR_20)))
  {
   Form_pg_constraint VAR_24 = (Form_pg_constraint) FUNC_2(VAR_22);
   HeapTuple VAR_25;

   if (VAR_24->contype != VAR_2)
    continue;

   if (FUNC_16(FUNC_4(VAR_19->conname),
        FUNC_4(VAR_24->conname)) != 0)
    continue;

   if (!FUNC_10(VAR_17, VAR_22, VAR_14))
    FUNC_11(VAR_7,
      (FUNC_12(VAR_5),
       FUNC_13("child table \"%s\" has different definition for check constraint \"%s\"",
        FUNC_7(VAR_11),
        FUNC_4(VAR_19->conname))));


   if (VAR_24->connoinherit)
    FUNC_11(VAR_7,
      (FUNC_12(VAR_6),
       FUNC_13("constraint \"%s\" conflicts with non-inherited constraint on child table \"%s\"",
        FUNC_4(VAR_24->conname),
        FUNC_7(VAR_11))));





   if (VAR_19->convalidated && !VAR_24->convalidated)
    FUNC_11(VAR_7,
      (FUNC_12(VAR_6),
       FUNC_13("constraint \"%s\" conflicts with NOT VALID constraint on child table \"%s\"",
        FUNC_4(VAR_24->conname),
        FUNC_7(VAR_11))));





   VAR_25 = FUNC_14(VAR_22);
   VAR_24 = (Form_pg_constraint) FUNC_2(VAR_25);
   VAR_24->coninhcount++;






   if (VAR_18)
   {
    FUNC_0(VAR_24->coninhcount == 1);
    VAR_24->conislocal = 0;
   }

   FUNC_1(VAR_13, &VAR_25->t_self, VAR_25);
   FUNC_15(VAR_25);

   VAR_23 = 1;
   break;
  }

  FUNC_18(VAR_20);

  if (!VAR_23)
   FUNC_11(VAR_7,
     (FUNC_12(VAR_5),
      FUNC_13("child table is missing constraint \"%s\"",
       FUNC_4(VAR_19->conname))));
 }

 FUNC_18(VAR_15);
 FUNC_20(VAR_13, VAR_10);
}
