
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ contype; int conislocal; int connoinherit; int coninhcount; int convalidated; } ;
struct TYPE_21__ {int t_self; } ;
struct TYPE_20__ {TYPE_1__* rd_rel; int rd_att; } ;
struct TYPE_19__ {scalar_t__ relispartition; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef int Node ;
typedef TYPE_3__* HeapTuple ;
typedef TYPE_4__* Form_pg_constraint ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_3__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_15 ;
 int FUNC_8 (int *,int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,int ) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char*,char const*,...) ;
 int FUNC_15 (TYPE_3__*,int ,int ,int*) ;
 TYPE_3__* FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_19 (int ) ;
 TYPE_3__* FUNC_20 (int ) ;
 int FUNC_21 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_22 (int ,int ) ;

__attribute__((used)) static bool
FUNC_23(Relation VAR_16, const char *VAR_17, Node *VAR_18,
       bool VAR_19, bool VAR_20,
       bool VAR_21,
       bool VAR_22)
{
 bool VAR_23;
 Relation VAR_24;
 SysScanDesc VAR_25;
 ScanKeyData VAR_26[3];
 HeapTuple VAR_27;


 VAR_24 = FUNC_22(VAR_6, VAR_15);

 VAR_23 = 0;

 FUNC_8(&VAR_26[0],
    VAR_2,
    VAR_4, VAR_12,
    FUNC_5(FUNC_7(VAR_16)));
 FUNC_8(&VAR_26[1],
    VAR_3,
    VAR_4, VAR_12,
    FUNC_5(VAR_13));
 FUNC_8(&VAR_26[2],
    VAR_1,
    VAR_4, VAR_11,
    FUNC_1(VAR_17));

 VAR_25 = FUNC_18(VAR_24, VAR_7, 1,
         ((void*)0), 3, VAR_26);


 if (FUNC_4(VAR_27 = FUNC_20(VAR_25)))
 {
  Form_pg_constraint VAR_28 = (Form_pg_constraint) FUNC_3(VAR_27);


  if (VAR_28->contype == VAR_5)
  {
   Datum VAR_29;
   bool VAR_30;

   VAR_29 = FUNC_15(VAR_27,
         VAR_0,
         VAR_24->rd_att, &VAR_30);
   if (VAR_30)
    FUNC_10(VAR_10, "null conbin for rel %s",
      FUNC_6(VAR_16));
   if (FUNC_11(VAR_18, FUNC_17(FUNC_9(VAR_29))))
    VAR_23 = 1;
  }
  if (VAR_20 && !VAR_28->conislocal && !VAR_16->rd_rel->relispartition)
   VAR_19 = 1;

  if (!VAR_23 || !VAR_19)
   FUNC_12(VAR_10,
     (FUNC_13(VAR_8),
      FUNC_14("constraint \"%s\" for relation \"%s\" already exists",
       VAR_17, FUNC_6(VAR_16))));


  if (VAR_28->connoinherit)
   FUNC_12(VAR_10,
     (FUNC_13(VAR_9),
      FUNC_14("constraint \"%s\" conflicts with non-inherited constraint on relation \"%s\"",
       VAR_17, FUNC_6(VAR_16))));






  if (VAR_28->coninhcount > 0 && VAR_22)
   FUNC_12(VAR_10,
     (FUNC_13(VAR_9),
      FUNC_14("constraint \"%s\" conflicts with inherited constraint on relation \"%s\"",
       VAR_17, FUNC_6(VAR_16))));





  if (VAR_21 && !VAR_28->convalidated)
   FUNC_12(VAR_10,
     (FUNC_13(VAR_9),
      FUNC_14("constraint \"%s\" conflicts with NOT VALID constraint on relation \"%s\"",
       VAR_17, FUNC_6(VAR_16))));


  FUNC_12(VAR_14,
    (FUNC_14("merging constraint \"%s\" with inherited definition",
      VAR_17)));

  VAR_27 = FUNC_16(VAR_27);
  VAR_28 = (Form_pg_constraint) FUNC_3(VAR_27);






  if (VAR_16->rd_rel->relispartition)
  {
   VAR_28->coninhcount = 1;
   VAR_28->conislocal = 0;
  }
  else
  {
   if (VAR_20)
    VAR_28->conislocal = 1;
   else
    VAR_28->coninhcount++;
  }

  if (VAR_22)
  {
   FUNC_0(VAR_20);
   VAR_28->connoinherit = 1;
  }

  FUNC_2(VAR_24, &VAR_27->t_self, VAR_27);
 }

 FUNC_19(VAR_25);
 FUNC_21(VAR_24, VAR_15);

 return VAR_23;
}
